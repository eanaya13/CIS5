
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 27, 2022, 7:23 PM
 * Purpose: Annual pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
   unsigned short payAmount, payPeriods, annualPay;
    
    //initialize variables
    payAmount= 2200.0;
    payPeriods= 26;
    
    //Map inputs to outputs-> The Process
    annualPay= payAmount*payPeriods;
    
    //Display Results
    cout<<"total annual pay= "<<annualPay<<endl;
    
    //Exit stage right
  
    return 0;
}

