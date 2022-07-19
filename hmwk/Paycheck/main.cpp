/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 7, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <iomanip> //Format the Output
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float payRate, //Payrate in $'s /our
          hrsWrkd, //Hours worked
          payChck; //Paycheck in $'s
          
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map inputs -> outputs
    payChck=payRate*hrsWrkd;
    payChck+=hrsWrkd>40?payRate*(hrsWrkd-40):0;
    
    //Display the outputs
cout<<fixed<<setprecision(2)<<showpoint;
cout<<"Paycheck = $"<<setw(7)<<payChck;

    //Exit stage right or left!
    return 0;
}