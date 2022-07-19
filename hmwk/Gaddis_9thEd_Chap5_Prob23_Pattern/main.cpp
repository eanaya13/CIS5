/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 14 2022 3:00 PM
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
    int a;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cin>>a;
for (int i=1;i<=a;i++) {
    
    for(int j=1;j<=i;j++){
        cout<<"+";
    }
    cout<<endl<<endl;
}

for (int i=1;i<=a;i++){ 
    for(int j=1;j<=a+1-i;j++) {
        cout<<"+";
    }
    if (i<a) cout<<endl<<endl;
    }

    //Exit stage right or left!
    return 0;
}