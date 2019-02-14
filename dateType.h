//header file for class dateType
#ifndef dateType_H
#define dateType_H
   
class dateType
{
public:
    void setDate(int month, int day, int year);
      //Function to set the date of dateType
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters.
      //Postcondition: dMonth = month; dDay = day;
      //               dYear = year

    int getDay() const;
      //Function to return the day of dateType
      //Postcondition: The value of dDay is returned.

    int getMonth() const;
      //Function to return the month of dateType
      //Postcondition: The value of dMonth is returned.

    int getYear() const;
      //Function to return the year of dateType
      //Postcondition: The value of dYear is returned.

    void printDate() const;
      //Function to output the date of dateType

    dateType(int month = 1, int day = 1, int year = 1900);
      //Constructor to set the date of dateType
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters.
      //Postcondition: dMonth = month; dDay = day; dYear = year;
      //               If no values are specified, the default 
      //               values are used to initialize the member
      //               variables.

private:
    int dMonth; //variable to store the month of dateType
    int dDay;   //variable to store the day of dateType
    int dYear;  //variable to store the year of dateType
};

#endif
