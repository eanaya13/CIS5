/* 
 * File:   main.cpp
 * Author: Esther
 * Created on January 2, 2019, 12:36 PM
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
    
    //Declare Variables
    int nmb, days;
    double pay, ttl;
    
    //Initialize or input i.e. set variable values
    cin>>days;
    nmb=1;
    ttl=0;
    pay=0.01;
    
    //Map inputs -> outputs
    while (days<1)
    {
        cout<<"Number of days worked must be at least 1";
    }
    while (nmb<=days)
    {
        ttl=ttl+pay;
        pay=pay*2;
        nmb++;
    }
    
    //Display the outputs
cout<<"Pay = $"<<fixed<<setprecision(2)<<ttl;

    //Exit stage right or left!
    return 0;
}