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
int menu2();
void clearScreen();
void display(void);
void setPatientRecords(patientType patients[]);
void setBillRecords(billType bills[]);

//===========================================================================

int main(int argc, char* argv[]) {

int	numberOfPatients = 3;		// Number of overall patients in system. 
patientType patients[numberOfPatients];	// Array of patientType class.
								// Limited by 'numberOfPatients' variable.
billType bills[numberOfPatients];	// Array of billType class.
								// Limited by 'numberOfPatients' variable.

//======================
bool	loop;
bool	notGood;
bool	exitProg;
//
bool	debug;
//=======================
char	categoryIn;

char	waitState;
//=======================
int		accountIn;
int		kwhIn;
int		displayUsed;
int		tempInt;
//==================
int		peakIn;
int		nonpeakIn;
int		peakUsed;
int		nonpeakUsed;
//==================
float	peakCost;
float	nonpeakCost;
float	tempFloat;
float	displayCost;
//=======================

int i;

//=======================
	char userinput;

	string uID;
	string ufName;
	string ulName;
	int ubDay;
	int ubMth;
	int ubYear;
	string udocFrName;
	string udocLaName;
	string udocSpl;
	int uadmDay;
	int uadmMth;
	int uadmYear;
	int udisChDay;
	int udisChMth;
	int udisChYear;
//=======================


//=======================
float	childAllowance;
//=======================

//===========================================================================

loop=true;
notGood=true;
exitProg=false;
debug=false;


// Set floating-point number format.
cout << fixed << setprecision(2);

// if (argc==1) debug=true;
// if (argc==2) environmentPtr=true;

// =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =  =

setPatientRecords(patients);
	// Loads patient list within Hospital by populating patient array.

setBillRecords(bills);
	// Loads expenses per patient within Hospital by populating bill array.

while ( loop ) {

	clearScreen();

//  //	display();


	cout << "=====================================" << endl;
	patients[0].print();
	cout << "=====================================" << endl;
	//patients[1].print();
	//cout << "=====================================" << endl;
	//patients[2].print();
	//cout << "=====================================" << endl;

	bills[1].printBill();
	cout << "=====================================" << endl;
	bills[2].printBill();
	cout << "=====================================" << endl;

	categoryIn=menu();

	// menu3();
 
	switch ( categoryIn ) {
		case 'i':
		case 'I':
			// menu2();

			cout << "\nChange patient data:\nID: ";
			cin >> uID;

			// some type of continue prompt.

			cin >> waitState;

			// clearScreen();



			//cout << "\n\n\t-----------------------------------------------";
			//cout << "\n\n\t Your Residential service for Account : "
			//	<< accountIn << endl;
			//cout << "\n\t   used [ " << displayUsed
			//	<< " ] KiloWatt Hours of electricity";
			//cout << "\n\n\t   for a cost of $" << displayCost << " is due.";
			//cout << "\n\n\t-----------------------------------------------";

			break;
		case 'p':
		case 'P':
			// menu2();

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

			//cout << "\n\n\t-----------------------------------------------";
			//cout << "\n\n\t Your Commercial service for Account : "
			//	<< accountIn << endl;
			//cout << "\n\t   used [ " << displayUsed
			//	<< " ] KiloWatt Hours of electricity";
			//cout << "\n\n\t   for a cost of $" << displayCost << " is due.";
			//cout << "\n\n\t-----------------------------------------------";

			break;
		case 'd':
		case 'D':

			cout << "Doctor first name: ";		cin >> udocFrName;
			cout << "Doctor last name: ";		cin >> udocLaName;
			cout << "Doctor speciality: ";		cin >> udocSpl;


			//cout << "\n\n\t-----------------------------------------------";
			//cout << "\n\n\t Your Industrial service for Account : "
			//	<< accountIn << endl;
			//cout << "\n\t   used [ " << displayUsed
			//	<< " ] KiloWatt Hours of electricity";
			//cout << "\n\n\t   for a cost of $" << displayCost << " is due.";
			//cout << "\n\n\t-----------------------------------------------";

			break;

		case 'a':
		case 'A':

			cout << "Admission day: ";			cin >> uadmDay;
			cout << "Admission month: ";		cin >> uadmMth;
			cout << "Admission year: ";			cin >> uadmYear;

			break;

		case 's':
		case 'S':

			cout << "Discharge day: ";			cin >> udisChDay;
			cout << "Discharge month: ";		cin >> udisChMth;
			cout << "Discharge year: ";			cin >> udisChYear;

			break;

		case 'r':
		case 'R':

			cout << " pRint current record?";

			break;
		case 'x':
		case 'X':
			// Leave loop and program.
			loop=false;
			exitProg=true;
			break;
		default:
			//cout << "\nInvalid Service Category selection : \'"
			//	<< categoryIn << "\'" << endl;
			break;

	}  // switch


//============================================================================

// use later	display();

//	cout << "\n\n\t ==================================" << endl;
//	cout << "\n\n\t     To exit, type an \'x\'.";
//	cout << "\n\n\t     Type any other key to continue." << endl;

//	cin >> categoryIn;

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

} // while

/**
	if ( environmentPtr ) {
		//  Why?  'cause its cool.
  		for (i=0 ; envp[i] ; i++) {
			cout << envp[i] << endl;
			// cout << endl;
		}
	}

**/

    return 0;

}  // main

//===========================================================================

void menu3()
{
	char userinput;

	string uID;
	string ufName;
	string ulName;
	int ubDay;
	int ubMth;
	int ubYear;
	string udocFrName;
	string udocLaName;
	string udocSpl;
	int uadmDay;
	int uadmMth;
	int uadmYear;
	int udisChDay;
	int udisChMth;
	int udisChYear;

// patientType patients[numberOfPatients];	// Array of patientType class.

	//newPatient.print();

//	cout << "=====================================" << endl;
//	patients[0].print();
//	cout << "=====================================" << endl;
//	patients[1].print();
//	cout << "=====================================" << endl;
//	patients[2].print();
//	cout << "=====================================" << endl;

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

}  // menu

//============================================================================

int menu2 () {

	cout << "\n\t  Enter Customer Account Number: ";
	//cin >> accountIn;

	//cout << "\n\t  Enter number of kilowatt-hours of electricity used : ";
	//cin >> kwhIn;

}

//============================================================================

void display(void) {

cout << "\n\t-----------------------------------------------";
//cout << "\n\n\t\t  Employee Number : " << empID;
//if ( isFemale ) { tempString="  Woman   ";
//} else { tempString="   Man    "; }
//cout << "\n\t\t   Gender : " << tempString;
//if ( isMarried ) { tempString=" Married  ";
//} else { tempString=" Single   "; }
//cout << "\n\t\t   Marital Status : " << tempString;
//cout << "\n\t\t   Years of Service : " << serviceYears;
//cout << "\n\t\t   Number of children : " << childCount;
// cout << "\n\t\t   Max child age      : " << maxChildAge;
//cout << "\n\t\t   Child allowance : " << (float)childAllowance;
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
  	patients[0].setInfo("0", "Keith", "Richards",
		18, 12, 1943, "Robert", "Freymann", "General Practioner",
		15, 1, 2019, 1, 2, 2019);

	patients[1].setInfo("1", "David", "Robinson",
		2, 4, 1949, "Ric", "Ocasek", "General Practioner",
		10, 1, 2019, 21, 1, 2019);

	patients[2].setInfo("2", "Bobby", "Elliott",
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

	bills[0].setInfo("0", 500, 1500, 1000);

	bills[1].setInfo("1", 400, 1100, 2300);

	bills[2].setInfo("2", 300, 2200, 800);

};  // end: setBillRecords 


/**/
