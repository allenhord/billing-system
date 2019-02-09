#include <iostream>
#include "patientType.h"

using namespace std;

int main()
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

	
	patientType newPatient("123456", "Keith", "Richards",
		18, 12, 1943, "Robert", "Freymann", "General Practioner",
		1, 1, 2019, 2, 1, 2019);

	newPatient.print();

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
	if (userinput)
	return 0;
}
