/* 
 * File:   main.cpp
 * Author:Esther Anaya
 * Created on July 7 2022, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float Pi = 3.14159265359f;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angld, anglr, sinang, cosang, tanang, a,b,c;
    
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin>>angld;
    
    //Map inputs -> outputs
    sinang = Pi*angld/180;
    cosang = Pi*angld/180;
    tanang = Pi*angld/180;
    a = sin(sinang);
    b = cos(cosang);
    c = tan(tanang);
    
    
    //Display the outputs
    cout << "sin(45) = " << setprecision(4) << fixed << setw(1) << a << endl;
    cout << "cos(45) = " << setprecision(4) << fixed << setw(1) << b << endl;
    cout << "tan(45) = " << setprecision(4) << fixed << setw(1) << c;

    //Exit stage right or left!
    return 0;
}