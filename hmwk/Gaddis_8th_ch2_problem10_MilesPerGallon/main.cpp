
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 27, 2022, 9:54 PM
 * Purpose: Miles Per Gallon
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
    short gllns, //gallons
            mls, //miles
            MPG; //miles per gallon
    
    //initialize variables
    gllns= 15;
    mls=375;
 
    //Map inputs to outputs-> The Process
    MPG= mls/gllns;
    
    //Display Results
    cout<<"If a car holds 15 gallons of gasoline and can travel 375 miles before refueling, "<<endl;
    cout<<"then the miles per gallon is "<<MPG<<endl;
    
    //Exit stage right
  
    return 0;
}

