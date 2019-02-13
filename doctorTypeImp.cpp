//Implementation file for class dateType
#include <iostream> 
#include <string>
#include "doctorType.h"

using namespace std;

//function to print doctor name and speciality
void doctorType::print() const
{
	personType::print();
	cout << ": " << speciality;
}

//function to set speciality
void doctorType::setSpeciality(string spl)
{
	speciality = spl;
}

//function to get speciality
string doctorType::getSpeciality()
{
	return speciality;
}

//constructor for class doctorType
doctorType::doctorType(string first, string last, string spl) : personType(first, last)
{
	speciality = spl;
}
