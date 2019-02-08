#include <iostream> 
#include <string>
#include "doctorType.h"

using namespace std;

void doctorType::print() const
{
	personType::print();
	cout << ": " << speciality;
}

void doctorType::setSpeciality(string spl)
{
	speciality = spl;
}

string doctorType::getSpeciality()
{
	return speciality;
}

//constructor
doctorType::doctorType(string first, string last, string spl) : personType(first, last)
{
	speciality = spl;
}