//implementation file for patientType   
#include <iostream> 
#include <string>
#include "patientType.h"

using namespace std;

//function to print patient name, DOB, physician, admission date, discharge date
void patientType::print() const
{
	cout << "Patient: ";
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

//function to set patient info
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

//function to set patient ID
void patientType::setID(string id)
{
	ID = id;
}

//function to return ID
string patientType::getID()
{
	return ID;
}

//function to set DOB
void patientType::setBirthDate(int bDay, int bMth, int bYear)
{
	dateOfBirth.setDate(bMth, bDay, bYear);
}

//function to return birth day
int patientType::getBirthDay()
{
	return dateOfBirth.getDay();
}

//function to return birth month
int patientType::getBirthMonth()
{
	return dateOfBirth.getMonth();
}

//function to return birth year
int patientType::getBirthYear()
{
	return dateOfBirth.getYear();
}

//function to set doctor name
void patientType::setDoctorName(string fName, string lName)
{
	attendingPhysician = doctorType(fName, lName);
}

//function to set doctor speciality
void patientType::setDoctorSpl(string spl)
{
	attendingPhysician.setSpeciality(spl);
}

//function to return doctor first name
string patientType::getDoctorFName()
{
	return attendingPhysician.getFirstName();
}

//function to return doctor last name
string patientType::getDoctorLName()
{
	return attendingPhysician.getLastName();
}

//function to return doctor speciality
string patientType::getDoctorSpl()
{
	return attendingPhysician.getSpeciality();
}

//function to set admission date
void patientType::setAdmDate(int admDay, int admMth, int admYear)
{
	admitDate.setDate(admDay, admMth, admYear);
}

//function to return admission day
int patientType::getAdmDay()
{
	return admitDate.getDay();
}

//function to return admission month
int patientType::getAdmMonth()
{
	return admitDate.getMonth();
}

//function to return admission year
int patientType::getAdmYear()
{
	return admitDate.getYear();
}

//function to set discharge date
void patientType::setDisDate(int disDay, int disMth, int disYear)
{
	dischargeDate.setDate(disDay, disMth, disYear);
}

//function to return discharge day
int patientType::getDisDay()
{
	return dischargeDate.getDay();
}

//function to return discharge month
int patientType::getDisMonth()
{
	return dischargeDate.getMonth();
}

//function to return discharge year
int patientType::getDisYear()
{
	return dischargeDate.getYear();
}

//constructor for class patientType
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
