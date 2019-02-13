//header file for class patientType  
#ifndef H_patientType
#define H_patientType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

//definitions for derived class patientType
class patientType: public personType
{
public:
    //function to print patient name, DOB, physician, admission date, discharge date
    void print() const;
    
    //function to set patient info
    void setInfo(string id = "", string fName = "", string lName = "",
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);
    
    //function to set patient ID
    void setID(string id);
    //function to return ID
    string getID();
    
    //function to set DOB
    void setBirthDate(int bDay = 1, int bMth = 1, int bYear = 1900);
    //function to return birth day
    int getBirthDay();
    //function to return birth month
    int getBirthMonth();
    //function to return birth year
    int getBirthYear();
    
    //function to set doctor name
    void setDoctorName(string fName = "", string lName = "");
    //function to set doctor speciality
    void setDoctorSpl(string spl = "");
    //function to return doctor first name
    string getDoctorFName();
    //function to return doctor last name
    string getDoctorLName();
    //function to return doctor speciality
    string getDoctorSpl();
    
    //function to set admission date
    void setAdmDate(int admDay = 1, int admMth = 1, int admYear = 1900);
    //function to return admission day
    int getAdmDay();
    //function to return admission month
    int getAdmMonth();
    //function to return admission year
    int getAdmYear();

    //function to set discharge date
    void setDisDate(int disDay = 1, int disMth = 1, int disYear = 1900);
    //function to return discharge day
    int getDisDay();
    //function to return discharge month
    int getDisMonth();
    //function to return discharge year
    int getDisYear();
    
    //constructor for class patientType with default values
    patientType(string id = "", string fName = "", string lName = "",
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);
   

 private:
    string ID;                    //variable to store patient ID
    dateType dateOfBirth;         //store patient DOB as dateType
    doctorType attendingPhysician;//store patient doctor as doctorType
    dateType admitDate;           //store patient admission date as dateType
    dateType dischargeDate;       //store patient discharge date as dateType
};

#endif
