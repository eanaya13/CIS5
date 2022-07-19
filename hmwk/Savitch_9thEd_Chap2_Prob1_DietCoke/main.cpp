/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 6, 12:36 PM
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
    int wght, coke;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wght;
    
    
    //Map inputs -> outputs
    coke = ((wght*453.592)*(.14285714285)/.35);
    
    
    //Display the outputs
cout << "The maximum number of soda pop cans" << endl;
cout << "which can be consumed is "<< coke << " cans";


    //Exit stage right or left!
    return 0;
}