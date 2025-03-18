#include <stdio.h>
int leapyear(int year)
{
    // Check if the year is a leap year
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return 1; // Leap year
            else
                return 0; // Not a leap year
        }
        else
            return 1; // Leap year
    }
    else
        return 0; // Not a leap year
}
const char *dayinweek(int year)
{
    int day = 1;
    const char *days_in_week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int total_days = 0;
    for (int i = 1; i < year; i++)
    {
        if (leapyear(i))
        {
            total_days += 366; // Leap year
        }
        else
        {
            total_days += 365; // Normal year
        }
    }
    int day_in_week = (day + total_days) % 7;

    return days_in_week[day_in_week];
}
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);
    const char *day = dayinweek(year);
    printf("The day on January 1st, %d is: %s\n", year, day);
    return 0;
}