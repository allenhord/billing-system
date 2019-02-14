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

void userPause();
void clearScreen();
void setPatientRecords(patientType patients[]);
void setBillRecords(billType bills[]);

//===========================================================================

int main() {

	// Number of overall patients in system. 
const int	numberOfPatients = 3;
	// Array of patientType class.  Limited by 'numberOfPatients' variable.
patientType patients[numberOfPatients];
	// Array of billType class  Limited by 'numberOfPatients' variable.
billType bills[numberOfPatients];

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

	userPause();
	clearScreen();

	cout << "\n\t     Current patient billing data:" << endl << endl;

	bills[0].printBill();
	cout << "=====================================" << endl;
	bills[1].printBill();
	cout << "=====================================" << endl;
	bills[2].printBill();

	userPause();
	clearScreen();

	udisChDay=patients[0].getDisDay();
	udisChMth=patients[0].getDisMonth();
	udisChYear=patients[0].getDisYear();

	cout << "\n=====================================";
	cout << "\n\n Current discharge date for patient ID: 101.";
	cout << "\n\n-------------------------------------";
	cout << "\n\n  Month: " << udisChMth << " Day: " << udisChDay << \
		" Year: " << udisChYear << "\n";
	cout << "\n-------------------------------------";
	// Update Discharge date.
	patients[0].setDisDate( 10, 21, 3145);

	udisChDay=patients[0].getDisDay();
	udisChMth=patients[0].getDisMonth();
	udisChYear=patients[0].getDisYear();

	cout << "\n\nUpdated discharge date for patient ID: 101.";
	cout << "\n\n-------------------------------------";
	cout << "\n\n  Month: " << udisChMth << " Day: " << udisChDay << \
		" Year: " << udisChYear << "\n";
	cout << "\n=====================================" << endl;

	userPause();
	clearScreen();

	cout << "\n\n=====================================";
	cout << "\n\n  Doctor speciality BEFORE update.\n\n";
  	patients[0].print();

	cout << "\n=====================================";
	cout << "\n\t\t  UPDATE.";
  	patients[0].setDoctorSpl( "Medieval Barber" );

	cout << "\n=====================================";
	cout << "\n\n  Doctor speciality AFTER update.\n\n";

  	patients[0].print();

	userPause();
	clearScreen();

	cout << "\n\n=====================================";
	cout << "\n\n  Current balance for patient ID: 303.\n\n";
	bills[2].printBill();

	cout << "=====================================";
	cout << "\n\n  New charges added..\n";

	bills[2].updatePharmacyCharges(8000);
	bills[2].updateRoomRent(145000);
	bills[2].updateDoctorFee(300000);

	cout << "\n=====================================";
	cout << "\n\n  New balance for patient ID: 303.\n\n";
	bills[2].printBill();
	cout << "=====================================" << endl;
	cout << "\n  New total balance: $ " << bills[2].billingAmount() << "." << endl;

	userPause();
	clearScreen();

	cout << "\n\n=====================================" << endl;
	cout << "\n\n  More More ?? \n\n";

	cout << "Is there another update / change to the base data to add??\n\n";

	cout << "=====================================" << endl;
	cout << "\n\n     Here    Here?? \n\n";

	userPause();
	clearScreen();

	cout << "\n\n=====================================";
	cout << "\n\n  Complete.";
	cout << "\n\n=====================================";
	cout << "\n\n";


    return 0;

}  // main

//*************************************************************************** 

void userPause() {

	cout << "\n\n\t === === === === === === === === ===";
	cout << "\n\n\t     Press \"Enter Key\" to continue.\n";
	while ( ! ( cin.get() == '\n') )
	{
		; // No Operative
	}

}

//============================================================================

void clearScreen() {

	// Using a system call to execute 'clear' command.
	system( CLR );

}

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
