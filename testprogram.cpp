//*************************************************************************** 
//* Programmers:       Allen Hord & Robert Thornton
//* Due Date:                 Feb 14, 2019
//* Program:             Chapter 11  Exercise  11
//*
//* Purpose:
//*   Hospital billing system created from class personType.
//*
//***************************************************************************
#include <cstdlib>		// system function.
#include <iomanip>		// setprecision function.
#include <iostream>
#include "patientType.h"
#include "billType.h"
#include "testprogram.h"

using namespace std;

//===========================================================================

void menu3();
char menu();
void menu2();
void clearScreen();
void display(void);
void setPatientRecords(patientType patients[]);
void setBillRecords(billType bills[]);

//===========================================================================

int main() {

const int	numberOfPatients = 3;		// Number of overall patients in system. 
patientType patients[numberOfPatients];	// Array of patientType class.
								// Limited by 'numberOfPatients' variable.
billType bills[numberOfPatients];	// Array of billType class.
								// Limited by 'numberOfPatients' variable.

//======================
//bool	loop;
//bool	notGood;
//bool	exitProg;
//
//bool	debug;
//=======================
char	categoryIn;
char	waitState;
//=======================

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
	//int udisChDay;
	//int udisChMth;
	//int udisChYear;
//=======================

//===========================================================================

// Set floating-point number format.
// cout << fixed << setprecision(2);

// =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =

	clearScreen();

	cout << "\n\t-------------------------------------------------";
	cout << "\n\t     Welcome to the Hospital Billing System." << endl;

	cout << "\n\t Loading initial patient data...";

	setPatientRecords(patients);
	// Loads patient list within Hospital by populating patient array.

	cout << "\n\t Loading initial patient expense data...";

	setBillRecords(bills);
	// Loads expenses per patient within Hospital by populating bill array.


	// display();


	cout << "=====================================" << endl;
	patients[0].print();
	cout << "=====================================" << endl;
	patients[1].print();
	cout << "=====================================" << endl;
	patients[2].print();

	cout << "\n\n\t === === === === === === === === -==" << endl;
	cout << "\n\n\t     Press \"Enter Key\" to continue.\n";
	if (cin.get() == '\n') 
	{
		; // No Operative
	}


	bills[0].printBill();
	cout << "=====================================" << endl;
	bills[1].printBill();
	cout << "=====================================" << endl;
	bills[2].printBill();
	cout << "=====================================" << endl;


	cout << "\n\n\t     Press \"Enter Key\" to continue.\n";
	while ( ! ( cin.get() == '\n') )
	{
		; // No Operative
	}


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


//			cout << " pRint current record?";



//============================================================================

	cout << "\n\n\t ==================================" << endl;
//	cout << "\n\n\t     To exit, type an \'x\'.";
//	cout << "\n\n\t     Type any other key to continue." << endl;

//	cin >> categoryIn;

/**
	if ( ! (categoryIn=='x') ) {
		; 	// no-op
	} else {
		// Leave loop and program.
		loop=false;
		exitProg=true;
		notGood=false;
		//
		cout << "\n\t Exiting program.\n" << endl;
	}

**/

    return 0;

}  // main

//===========================================================================

void menu3()
{

// patientType patients[numberOfPatients];	// Array of patientType class.

	//newPatient.print();


/**
	cout << "\nChange patient data:\nID: ";
	cin >> uID;
	cout << "First name: ";
	cin >> ufName;
	cout << "Last name: ";
	cin >> ulName;
	cout << "Birth day: ";
	cin >> ubDay;
	cout << "Birth month: ";
	cin >> ubMth;
	cout << "Birth year: ";
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

	newPatient.setInfo(uID, ufName, ulName, ubDay, ubMth,
		ubYear, udocFrName, udocLaName, udocSpl, uadmDay,
		uadmMth, uadmYear, udisChDay, udisChMth, udisChYear);

	newPatient.print();

	cout << "Enter any key to continue: ";
	cin >> userinput;
	// if (userinput)

**/

}

//*************************************************************************** 

void clearScreen() {

	// Using a system call to execute 'clear' command.
	system( CLR );

}

//============================================================================


char menu () {

char	replyIn;

replyIn=' ';

/**
	cout << "\n\t-------------------------------------------------";
	cout << "\n\t     Welcome to the Hospital Billing System." << endl;	//print greeting

	cout << "\n\n\t  To add or update record data: ";

	cout << "\n\t\t  Enter \'I\' for Patient ID.";
	cout << "\n\t\t  Enter \'P\' for Patient data.";
	cout << "\n\t\t  Enter \'D\' for Doctor data.";
	cout << "\n\t\t  Enter \'A\' for Admission data.";
	cout << "\n\t\t  Enter \'S\' for diScharge data.";
	cout << "\n\t\t  Enter \'R\' for pRint current record.";

	cout << "\n\n\t\t  Enter \'X\' to exit.";

	cout << "\n\n\t\t---------------------------------";

	cout << "\n\n\t\t  Enter service category: ";

	cin >> replyIn;

	return replyIn;
**/

}  // menu

//============================================================================

void menu2 () {

	cout << "\n\t  Enter Customer Account Number: ";
	//cin >> accountIn;

}

//============================================================================

void display(void) {

cout << "\n\t-----------------------------------------------";
cout << "\n\n\t-----------------------------------------------";

}  // display

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

	// rkt: Prints this line:
	cout << " set bills record function..." << endl;

	bills[0].setInfo("101", 500, 1500, 1000);

	bills[1].setInfo("202", 400, 1100, 2300);

	bills[2].setInfo("303", 300, 2200, 800);

};  // end: setBillRecords 


/**/
