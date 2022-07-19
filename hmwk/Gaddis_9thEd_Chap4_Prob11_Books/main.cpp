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
    int nmbbks;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\n";
    cout<<"Input the number of books purchased this month.\n";
    cin>>nmbbks;
    cout<<"Books purchased =  "<<nmbbks<<endl;
    
    //Map inputs -> outputs
    if (nmbbks==0)
        cout<<"Points earned  = 0";
    else if (nmbbks==1)
        cout<<"Points earned  = 5";
    else if (nmbbks==2)
        cout<<"Points earned  = 15";
    else if (nmbbks==3)
        cout<<"Points earned  = 30";
    else if (nmbbks>=4)
        cout<<"Points earned   = 60";
    else
        cout<<"That's an invalid number of books";
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}