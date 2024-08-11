#include <iostream>
#include <cstring> // For strlen()

class StringHandler {
private:
    char* str; // Pointer to character array (C-style string)

public:
    // Constructor: Initialize with an empty string
    StringHandler() {
        str = new char[1];
        str[0] = '\0'; // Null-terminate the string
    }

    // Constructor: Initialize with a given string
    StringHandler(const char* initialStr) {
        str = new char[strlen(initialStr) + 1];
        strcpy(str, initialStr);
    }

    // Destructor: Clean up dynamically allocated memory
    ~StringHandler() {
        delete[] str;
    }

    // Function to get string length
    int length() const {
        return strlen(str);
    }

    // Function to concatenate two strings
    void concatenate(const char* other) {
        char* temp = new char[length() + strlen(other) + 1];
        strcpy(temp, str);
        strcat(temp, other);
        delete[] str;
        str = temp;
    }

    // Function to compare two strings
    int compare(const char* other) const {
        return strcmp(str, other);
    }

    // Function to display the string
    void display() const {
        std::cout << "String: " << str << std::endl;
    }
};

int main() {
    StringHandler myString("Hello");
    myString.display();

    myString.concatenate(" World!");
    myString.display();

    std::cout << "Length: " << myString.length() << std::endl;

    if (myString.compare("Hello World!") == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else {
        std::cout << "Strings are not equal." << std::endl;
    }

    return 0;
}
