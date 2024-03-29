/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 14 2022, 12:36 PM
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
    int value;
    int sum=0;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cin>>value;
    }
    while (value<0);
    
    for (int count=1; count<=value; count++)
    {
        sum +=count;
    }
    
    //Display the outputs
cout<<"Sum = "<<sum;

    //Exit stage right or left!
    return 0;
}