/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
    string package;
    float time;
    float price;
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill" <<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package;
    
    //Map inputs -> outputs
    if ((package=="A")||(package=="B")||(package=="C")) {
        cin>>time;
    //time
    if (time<=744) {
        //pckge a 
    if (package =="A") {
    if (time>10) {
        price = 9.95 + (time-10)*2;
    }else {
        price= 9.95;
    }
    //B 
    }else if (package=="B") {
       if (time>20) {
           price = 14.95 + (time-20)*1;
       } else {
           price=14.95;
    }
    //price
    }else {
        price=19.95;
    }
    }else {
        cout<<"Invalid number of hours!";
    }
    } else {
        cout<<"Invalid package!";
    }
    //Display the outputs
cout<<"Bill = $ "<<price;
    //Exit stage right or left!
    return 0;
}
