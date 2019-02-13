//header file for class billType
#ifndef H_BillType
#define H_BillType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

//definitions for class billType
class billType
{
public:    
	//function that prints bill information
	void printBill() const;
	
	//function that sets billing information
    void setInfo(string id = "", double phCharges = 0, double rRent = 0,
                 double docFee = 0);
	
	//function that sets bill ID
    void setID(string id);

    //function that gets bill ID
	string getID();

	//function that sets pharmacy charges
    void setPharmacyCharges(double charges = 0);

	//function that gets pharmacy charges
    double getPharmacyCharges();

	//function that updates pharmacy charges with new charge
    void updatePharmacyCharges(double charges = 0);

	//function that sets room rent
    void setRoomRent(double charges = 0);

	//function that gets room rent
    double getRoomRent();

	//function that updates room rent with new charge
    void updateRoomRent(double charges = 0);

	//function tnat sets doctor fee
    void setDoctorFee(double charges = 0);

	//function that gets doctor fee
    double getDoctorFee();

	//function that updates doctor fee with new charge
    void updateDoctorFee(double charges = 0);

	//function that calculates total billing amount
    double billingAmount();

	//constructor for class billType
    billType(string id = "", double phCharges = 0, double rRent = 0, double docFee = 0);

 private:
    string ID;				//variable for storing ID number
    double pharmacyCharges;	//variable for storing pharmacy charges
    double roomRent;		//variable for storing room rent amount
    double doctorFee;		//variable for storing doctor fee
};

#endif
