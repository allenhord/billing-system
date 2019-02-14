//implementation file for billTypeImp
   
#include <iostream> 
#include <string>
#include "billType.h"

using namespace std;

//function that prints bill information
void billType::printBill() const
{

// RKT: Not printed....
cout << " printbill " << endl;

	cout << "Patient ID: " << ID <<
		"\nPharmacy charges: $" << pharmacyCharges <<
		"\nRoom rent: $" << roomRent <<
		"\nDoctor fee: $" << doctorFee << endl;
}

//function that sets billing information
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

//function that sets bill ID
void billType::setID(string id)
{
	ID = id;
}

//function that gets bill ID
string billType::getID()
{
	return ID;
}

//function that sets pharmacy charges
void billType::setPharmacyCharges(double charges)
{
	pharmacyCharges = charges;
}

//function that gets pharmacy charges
double billType::getPharmacyCharges()
{
	return pharmacyCharges;
}

//function that updates pharmacy charges with new charge
void billType::updatePharmacyCharges(double charges)
{
	pharmacyCharges = pharmacyCharges + charges;
}

//function that sets room rent
void billType::setRoomRent(double charges)
{
		roomRent = charges;
}

//function that gets room rent
double billType::getRoomRent()
{
	return roomRent;
}

//function that updates room rent with new charge
void billType::updateRoomRent(double charges)
{
	roomRent=roomRent+charges;
}

//function tnat sets doctor fee
void billType::setDoctorFee(double charges)
{
	doctorFee=charges;
}

//function that gets doctor fee
double billType::getDoctorFee()
{
	return doctorFee;
}

//function that updates doctor fee with new charge
void billType::updateDoctorFee(double charges)
{
	doctorFee = doctorFee + charges;
}

//function that calculates total billing amount
double billType::billingAmount()
{
	return pharmacyCharges + roomRent + doctorFee;
}

//constructor for class billType
billType::billType(string id, double phCharges, double rRent, double docFee)
{
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;
};
