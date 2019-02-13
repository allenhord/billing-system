//*************************************************************************** 
//* Programmers:       Allen Hord & Robert Thornton
//* Due Date:                 Feb 14, 2019
//* Program:             Chapter 11  Exercise  11
//*
//* Purpose:
//*   Hospital billing system created from class personType.
//*
//***************************************************************************
#include <cstdlib>		// system() function.
#include <iostream>
#include "patientType.h"
#include "billType.h"
#include "testprogram.h"

using namespace std;

//===========================================================================

void menu3();
char menu();

void clearScreen();

void setPatientRecords(patientType patients[]);
void setBillRecords(billType bills[]);

//===========================================================================

int main() {

const int	numberOfPatients = 3;		// Number of overall patients in system. 
patientType patients[numberOfPatients];	// Array of patientType class.
								// Limited by 'numberOfPatients' variable.
billType bills[numberOfPatients];	// Array of billType class.
								// Limited by 'numberOfPatients' variable.

//=======================
	string uID;
	string ufName;
	string ulName;

	//int ubDay;
	//int ubMth;
	//int ubYear;

	string udocFrName;
	string udocLaName;
	string udocSpl;

	//int uadmDay;
	//int uadmMth;
	//int uadmYear;

	int udisChDay;
	int udisChMth;
	int udisChYear;

//===========================================================================

	clearScreen();

	cout << "\n\t-------------------------------------------------";
	cout << "\n\t     Welcome to the Hospital Billing System.";
	cout << "\n\t-------------------------------------------------" << endl;

	// Loads patient list within Hospital by populating patient array.
	setPatientRecords(patients);

	// Loads expenses per patient within Hospital by populating bill array.
	setBillRecords(bills);

	cout << "\n\t     Current patient personal data:" << endl << endl;

	patients[0].print();
	cout << "=====================================" << endl;
	patients[1].print();
	cout << "=====================================" << endl;
	patients[2].print();

	cout << "\n\n\t === === === === === === === === ===";
	cout << "\n\n\t     Press \"Enter Key\" to continue.\n";
	if (cin.get() == '\n') 
	{
		; // No Operative
	}

	clearScreen();

	cout << "\n\t     Current patient billing data:" << endl << endl;

	bills[0].printBill();
	cout << "=====================================" << endl;
	bills[1].printBill();
	cout << "=====================================" << endl;
	bills[2].printBill();

	cout << "\n\n\t === === === === === === === === ===";
	cout << "\n\n\t     Press \"Enter Key\" to continue.\n";
	while ( ! ( cin.get() == '\n') )
	{
		; // No Operative
	}

	clearScreen();

	udisChDay=patients[0].getDisDay();
	udisChMth=patients[0].getDisMonth();
	udisChYear=patients[0].getDisYear();

	cout << "\n=====================================";
	cout << "\n\n Current discharge date for patient 101.";
	cout << "\n\n-------------------------------------";
	cout << "\n\n  Month: " << udisChMth << " Day: " << udisChDay << \
		" Year: " << udisChYear << "\n";
	cout << "\n-------------------------------------";
	// Update Discharge date.
	patients[0].setDisDate( 10, 21, 3145);

	udisChDay=patients[0].getDisDay();
	udisChMth=patients[0].getDisMonth();
	udisChYear=patients[0].getDisYear();

	cout << "\n\nUpdated discharge date for Patient 101.";
	cout << "\n\n-------------------------------------";
	cout << "\n\n  Month: " << udisChMth << " Day: " << udisChDay << \
		" Year: " << udisChYear << "\n";
	cout << "\n=====================================" << endl;

	cout << "\n\n\t === === === === === === === === ===";
	cout << "\n\n\t     Press \"Enter Key\" to continue.\n";
	while ( ! ( cin.get() == '\n') )
	{
		; // No Operative
	}


	clearScreen();

	cout << "\n\n=====================================" << endl;
	cout << "\n\n  set  and get billing stuff.\n\n";

	cout << "=====================================" << endl;
	cout << "\n\n  set  and get billing stuff.\n\n";

	cout << "\n\n\t === === === === === === === === ===";
	cout << "\n\n\t     Press \"Enter Key\" to continue.\n";
	while ( ! ( cin.get() == '\n') )
	{
		; // No Operative
	}

	cout << "\n\n=====================================";
	cout << "\n\n  Done.\n\n";
	cout << "=====================================\n";




//			cout << "\nChange patient data:\nID: ";
//			cin >> uID;

//			cout << "First name: ";
//			cin >> ufName;
//			cout << "Last name: ";
//			cin >> ulName;
//			cout << "Birth day: ";
//			cin >> ubDay;
//			cout << "Birth month: ";
//			cin >> ubMth;
//			cout << "Birth year: ";
//			cin >> ubYear;

//	cout << "\n\n\t-----------------------------------------------";
//	cout << "\n\n\t-----------------------------------------------";

//			cout << "Doctor first name: ";		cin >> udocFrName;
//			cout << "Doctor last name: ";		cin >> udocLaName;
//			cout << "Doctor speciality: ";		cin >> udocSpl;

//			cout << "Admission day: ";			cin >> uadmDay;
//			cout << "Admission month: ";		cin >> uadmMth;
//			cout << "Admission year: ";			cin >> uadmYear;

//			cout << "Discharge day: ";			cin >> udisChDay;
//			cout << "Discharge month: ";		cin >> udisChMth;
//			cout << "Discharge year: ";			cin >> udisChYear;

//============================================================================

    return 0;

}  // main

//===========================================================================

void menu3()
{

/**
	cout << "\nChange patient data:\nID: ";
	cin >> uID;

	cin >> ubYear;
	cout << "Doctor first name: ";
	cin >> udocFrName;
	cout << "Doctor last name: ";
	cin >> udocLaName;
	cout << "Doctor speciality: ";
	cin >> udocSpl;
	cout << "Admission day: ";
	cin >> uadmDay;
	cout << "Admission month: ";
	cin >> uadmMth;
	cout << "Admission year: ";
	cin >> uadmYear;

	cout << "Discharge day: ";
	cin >> udisChDay;
	cout << "Discharge month: ";
	cin >> udisChMth;
	cout << "Discharge year: ";
	cin >> udisChYear;
	cout << endl;

**/

}

//*************************************************************************** 

void clearScreen() {

	// Using a system call to execute 'clear' command.
	system( CLR );

}

//============================================================================

// cout << "\nChange patient data:\nID: ";

	//	I :	uID;

	//	P : "First name: ";		cin >> ufName;
	//		"Last name: ";		cin >> ulName;
	//			cout << "Birth day: ";		cin >> ubDay;
	//			cout << "Birth month: ";	cin >> ubMth;
	//			cout << "Birth year: ";		cin >> ubYear;

	//	D :		cout << "Doctor first name: ";		cin >> udocFrName;
	//			cout << "Doctor last name: ";		cin >> udocLaName;
	//			cout << "Doctor speciality: ";		cin >> udocSpl;

	//	A :		cout << "Admission day: ";			cin >> uadmDay;
	//			cout << "Admission month: ";		cin >> uadmMth;
	//			cout << "Admission year: ";			cin >> uadmYear;

	//	S :		cout << "Discharge day: ";			cin >> udisChDay;
	//			cout << "Discharge month: ";		cin >> udisChMth;
	//			cout << "Discharge year: ";			cin >> udisChYear;

//	cout << endl;

//============================================================================

/**
 * Function setPatientRecords
 *		Adds fixed patient data to patients array.
 *
 * Parameters 
 *	 patientType patients array.
**/
void setPatientRecords(patientType patients[])
{
  	patients[0].setInfo("101", "Keith", "Richards",
		18, 12, 1943, "Robert", "Freymann", "General Practioner",
		15, 1, 2019, 1, 2, 2019);

	patients[1].setInfo("202", "David", "Robinson",
		2, 4, 1949, "Ric", "Ocasek", "Nurse Practioner",
		10, 1, 2019, 21, 1, 2019);

	patients[2].setInfo("303", "Bobby", "Elliott",
		8, 12, 1941, "Allan", "Clarke", "General Practioner",
		4, 12, 2018, 18, 1, 2019);
  
} // end: setPatientRecords

//============================================================================

/**
 * Function setBillRecords
 *		Adds fixed patient expense data to bill array.
 *
 * Parameters 
 *	 billType bill array.
**/
void setBillRecords(billType bills[])
{

	bills[0].setInfo("101", 500, 1500, 1000);
	bills[1].setInfo("202", 400, 1100, 2300);
	bills[2].setInfo("303", 300, 2200, 800);

};  // end: setBillRecords 


/**/
