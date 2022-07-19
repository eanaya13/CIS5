/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 14 2022, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int max=0,
        nmb=0,
        min=10000000;
        
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    while (nmb != -99)
    {
        cin>>nmb;
    if (nmb==-99)break;
    if (nmb>max)
        max=nmb;
    if (nmb<min)
        min=nmb;
    }
    //Display the outputs
cout<<"Smallest number in the series is "<<min<<endl;
cout<<"Largest  number in the series is "<<max;
    //Exit stage right or left!
    return 0;
}