#include <iostream>
#include <ctime> // For time-related functions

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Default constructor
    Date()
    {
        // Get the current system time
        time_t now = time(0);
        tm *localTime = localtime(&now);

        // Extract day, month, and year
        day = localTime->tm_mday;
        month = localTime->tm_mon + 1;    // Months are 0-based
        year = localTime->tm_year + 1900; // Years since 1900

        // Print the date
        std::cout << "Today's date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main()
{
    Date currentDate; // Create an instance of the Date class
    return 0;
}
