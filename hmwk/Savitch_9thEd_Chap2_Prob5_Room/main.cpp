/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on January 2, 2019, 12:36 PM
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
    int maxcap = 0;
    int nmbppl = 0;
    
    
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxcap >> nmbppl;
    
    //Map inputs -> outputs
    
    
    //Display the outputs
if (nmbppl > maxcap)
{
    cout << "Meeting cannot be held." << endl;
    cout << "Reduce number of people by " << (nmbppl-maxcap) << " to avoid fire violation.";
    
}

else if (nmbppl<= maxcap) 
{
    cout << "Meeting can be held." <<endl;
    cout << "Increase number of poeple by " << ( maxcap - nmbppl ) << " will be allowed without violation.";
}

    //Exit stage right or left!
    return 0;
}
