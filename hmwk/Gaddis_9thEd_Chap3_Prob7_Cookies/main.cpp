/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 7, 12:36 PM
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
    int cookies, calories;
    
    //Initialize or input i.e. set variable values
    cout << "Calorie Counter"<<endl;
    cout << "How many cookies did you eat?"<< endl;
    cin>>cookies;
    
    //Map inputs -> outputs
    calories = cookies*75;
    
    
    //Display the outputs
cout << "You consumed " << calories << " calories.";

    //Exit stage right or left!
    return 0;
}