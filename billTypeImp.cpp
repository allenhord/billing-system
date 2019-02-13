//implementation file for billTypeImp
   
#include <iostream> 
#include <string>
#include "billType.h"

using namespace std;

void billType::printBill() const
{

// RKT: Not printed....
cout << " printbill " << endl;

	cout << "Patient ID: " << ID <<
		"\nPharmacy charges: $" << pharmacyCharges <<
		"\nRoom rent: $" << roomRent <<
		"\nDoctor fee: $" << doctorFee << endl;
}

void billType::setInfo(string id, double phCharges, double rRent,
	double docFee)
{
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;

	// RKT: not printed.
	cout << " ID : " << ID << " roomRent : " << roomRent << endl;

};

void billType::setID(string id)
{
	ID = id;
}

string billType::getID()
{
	return ID;
}

void billType::setPharmacyCharges(double charges)
{
	pharmacyCharges = charges;
}
double billType::getPharmacyCharges()
{
	return pharmacyCharges;
}

void billType::updatePharmacyCharges(double charges)
{
	pharmacyCharges = pharmacyCharges + charges;
}

void billType::setRoomRent(double charges)
{
		roomRent = charges;
}

double billType::getRoomRent()
{
	return roomRent;
}

void billType::updateRoomRent(double charges)
{
	roomRent=roomRent+charges;
}

void billType::setDoctorFee(double charges)
{
	doctorFee=charges;
}

double billType::getDoctorFee()
{
	return doctorFee;
}

void billType::updateDoctorFee(double charges)
{
	doctorFee = doctorFee + charges;
}

double billType::billingAmount()
{
	return pharmacyCharges + roomRent + doctorFee;
}

billType::billType(string id, double phCharges, double rRent, double docFee)
{
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;
};
