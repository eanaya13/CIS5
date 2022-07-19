/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 7 2022, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    float a,b,c,d,e,avrg,total;
    
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average." << endl;
    cin >> a >> b >> c >> d >> e;
    
    //Map inputs -> outputs
    
    
    //Display the outputs
total = a + b + c + d + e;
avrg = total/5;
cout << setprecision(1) << fixed;
cout << "The average = " << avrg;

    //Exit stage right or left!
    return 0;
}
