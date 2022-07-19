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
    const float payinc = .076;
    const int mnth = 12;
    
    
    //Declare Variables
    float prvsal, retrpay, ansal, mnthsal;
    
    
    //Initialize or input i.e. set variable values
    cout << "Input previous annual salary." << endl;
    cin >> ansal;
    
    
    //Map inputs -> outputs
    prvsal = ansal + ansal*payinc;
    retrpay = (prvsal-ansal)/2;
    mnthsal = prvsal/ mnth;
    
    
    //Display the outputs
cout << fixed << setprecision(2);
cout <<"Retroactive pay    = $"<<setw(7) << retrpay << endl;
cout <<"New annual salary  = $"<< setw(3) << prvsal << endl;
cout <<"New monthly salary = $"<< setw(7) << mnthsal;


    //Exit stage right or left!
    return 0;
}