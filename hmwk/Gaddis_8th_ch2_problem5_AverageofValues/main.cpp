
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 22, 2022, 9:54 PM
 * Purpose: Average Values
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
    short v1,v2,v3,v4,v5,sum;
    float avg;
    
    //initialize variables
    v1=28;
    v2=32;
    v3=37;
    v4=24;
    v5=33;
    
    //Map inputs to outputs-> The Process
    sum= v1+v2+v3+v4+v5;
    avg= sum/5;
    
    //Display Results
    cout<<"Given values 28,32,37,24, and 33, " <<endl;
    cout<<"sum:"<<"28+32+37+24+33="<<sum<<endl;
    cout<<"average:"<<"154/5"<<"="<<avg<<endl;
    
    //Exit stage right
  
    return 0;
}

