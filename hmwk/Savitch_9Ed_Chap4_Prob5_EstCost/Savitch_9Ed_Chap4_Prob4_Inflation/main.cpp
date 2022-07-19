/* 
 * File:   
 * Author: 
 * Created on 
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

const float PERCENT=100;

float infrate(float cp, float pp) //cp=current price, pp= past price
{
    return ((cp-pp)/pp)*PERCENT;
}
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cp, pp;
    char repeat;
    //Initialize or input i.e. set variable values
   
    //Map inputs -> outputs
    repeat='y';
    
    //Display the outputs
do {
cout<<fixed<<setprecision(2);
cout<<"Enter current price:"<<endl;
cin>>cp;
cout<<"Enter year-ago price:"<<endl;
cin>>pp;
cout<<"Inflation rate: "<<infrate(cp, pp)<<"%"<<endl<<endl;
cout<<"Again:"<<endl;
cin>>repeat;
if (repeat=='n')
    break;
cout<<endl;
} while (repeat=='y'||repeat=='Y');

    //Exit stage right or left!
    return 0;
}
