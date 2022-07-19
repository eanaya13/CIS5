/* 
 * File:   main.cpp
 * Author: Esther ANaya
 * Created on July 7, 2022, 12:36 PM
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
   int replace, minins;
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>replace;
    
    //Map inputs -> outputs
    minins= replace*0.8;
    //Display the outputs
cout<<"You need $"<<minins<<" of insurance.";


    //Exit stage right or left!
    return 0;
}
