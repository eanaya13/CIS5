/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 7 2022, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float tempf, clcs;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
   
    
    //Display the outputs
   cout<<"Temperature Converter"<<endl;
   cout<< "Input Degrees Fahrenheit"<<endl;
   cin>>tempf;
   clcs=5*(tempf-32)/9;
   
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);

   cout<<tempf<<" Degrees Fahrenheit = "<<clcs<<" Degrees Centigrade";
   
    //Exit stage right or left!
    return 0;
}