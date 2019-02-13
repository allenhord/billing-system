//implementation file for personType
   
#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

//function to print personType first and last name
void personType::print() const
{
    cout << firstName << " " << lastName;
}

//function to set personType first and last name
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

//function to return personType first name
string personType::getFirstName() const
{
    return firstName;
}

//function to return personType last name
string personType::getLastName() const
{
    return lastName;
}

//constructor for class personType
personType::personType(string first, string last) 

{ 
    firstName = first;
    lastName = last;
}

