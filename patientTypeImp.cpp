//patientTypeImp.cpp
   
#include <iostream> 
#include <string>
#include "patientType.h"

using namespace std;

void patientType::print() const
{
	personType::print();
	cout << "\nID: " << ID <<
		"\nDOB: " << dateOfBirth <<
		"\nPhysician: " << attendingPhysician <<
		"\nAdmit Date: " << admitDate <<
		"\nDischarge Date: " << dischargeDate;
}

void patientType::setInfo(string id, string fName, string lName,
	int bDay, int bMth, int bYear, string docFrName, string docLaName,
	string docSpl, int admDay, int admMth, int admYear,
	int disChDay, int disChMth, int disChYear)
{
	personType::setName(fName, lName);
	ID = id;
	//set DOB will go here
	attendingPhysician = docFrName + " " + docLaName;
	//TO BE CONTINUED
}
