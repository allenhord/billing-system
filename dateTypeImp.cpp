//Implementation file for class dateType
   
#include <iostream>
#include "dateType.h"

using namespace std;

//Function to set the date
void dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}

//Function to return the day
int dateType::getDay() const 
{
    return dDay;
}

//Function to return the month
int dateType::getMonth() const 
{
    return dMonth;
}

//Function to return the year
int dateType::getYear() const 
{
    return dYear;
}

//function to print the date
void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

//Constructor with parameters
dateType::dateType(int month, int day, int year) 
{ 
    dMonth = month;
    dDay = day;
    dYear = year;
}

