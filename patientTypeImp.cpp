//patientTypeImp.cpp
   
#include <iostream> 
#include <string>
#include "patientType.h"

using namespace std;

void patientType::print() const
{
	personType::print();
	cout << "\nID: " << ID << "\nDOB: ";
	dateOfBirth.printDate();
	cout << "\nPhysician: ";
	attendingPhysician.print();
	cout << "\nAdmit Date: ";
	admitDate.printDate();
	cout << "\nDischarge Date: ";
	dischargeDate.printDate();
	cout << endl;
}

void patientType::setInfo(string id, string fName, string lName,
	int bDay, int bMth, int bYear, string docFrName, string docLaName,
	string docSpl, int admDay, int admMth, int admYear,
	int disChDay, int disChMth, int disChYear)
{
	personType::setName(fName, lName);
	ID = id;
	dateOfBirth.setDate(bMth, bDay, bYear);
	attendingPhysician = doctorType(docFrName, docLaName, docSpl);
	admitDate.setDate(admMth, admDay, admYear);
	dischargeDate.setDate(disChMth, disChDay, disChYear);
}

patientType::patientType(string id, string fName, string lName,
	int bDay, int bMth, int bYear,
	string docFrName, string docLaName, string docSpl,
	int admDay, int admMth, int admYear,
	int disChDay, int disChMth, int disChYear)
	: personType(fName, lName),
	dateOfBirth(bMth, bDay, bYear),
	attendingPhysician(docFrName, docLaName, docSpl),
	admitDate(admMth, admDay, admYear),
	dischargeDate(disChMth, disChDay, disChYear)
{
	ID = id;
}

//string ID;
//dateType dateOfBirth;
//doctorType attendingPhysician;
//dateType admitDate;
//dateType dischargeDate;