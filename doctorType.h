//header file for class doctorType 
#ifndef H_doctorType
#define H_doctorType

#include <string>
#include "personType.h"
 
using namespace std;

//definitions for class doctorType
class doctorType: public personType
{
public:
    //function to print doctor name and speciality
    void print() const;
    
    //function to set speciality
    void setSpeciality(string spl);
    
    //function to get speciality
    string getSpeciality();
    
    //constructor for doctorType with default parameters
    doctorType(string first = "", string last = "", string spl = "");

 private:
    //variable to store speciality
    string speciality; 
};

#endif
