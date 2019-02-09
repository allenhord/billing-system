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

void patientType::setID(string id)
{
	ID = id;
}

string patientType::getID()
{
	return ID;
}

void patientType::setBirthDate(int bDay, int bMth, int bYear)
{
	dateOfBirth.setDate(bMth, bDay, bYear);
}

int patientType::getBirthDay()
{
	return dateOfBirth.getDay();
}
int patientType::getBirthMonth()
{
	return dateOfBirth.getMonth();
}

int patientType::getBirthYear()
{
	return dateOfBirth.getYear();
}

void patientType::setDoctorName(string fName, string lName)
{
	attendingPhysician = doctorType(fName, lName);
}

void patientType::setDoctorSpl(string spl)
{
	attendingPhysician.setSpeciality(spl);
}

string patientType::getDoctorFName()
{
	return attendingPhysician.getFirstName();
}

string patientType::getDoctorLName()
{
	return attendingPhysician.getLastName();
}

string patientType::getDoctorSpl()
{
	return attendingPhysician.getSpeciality();
}

void patientType::setAdmDate(int admDay, int admMth, int admYear)
{
	admitDate.setDate(admDay, admMth, admYear);
}

int patientType::getAdmDay()
{
	return admitDate.getDay();
}
int patientType::getAdmMonth()
{
	return admitDate.getMonth();
}

int patientType::getAdmYear()
{
	return admitDate.getYear();
}

void patientType::setDisDate(int disDay, int disMth, int disYear)
{
	dischargeDate.setDate(disDay, disMth, disYear);
}

int patientType::getDisDay()
{
	return dischargeDate.getDay();
}
int patientType::getDisMonth()
{
	return dischargeDate.getMonth();
}

int patientType::getDisYear()
{
	return dischargeDate.getYear();
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