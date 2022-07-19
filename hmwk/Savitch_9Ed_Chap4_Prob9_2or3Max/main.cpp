/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float max(float nmb1, float nmb2);
float max(float nmb1, float nmb2, float nmb3);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float nmb1, nmb2, nmb3;
    
    //Initialize or input i.e. set variable values
    cin>>nmb1>>nmb2>>nmb3;
    
    //Map inputs -> outputs
    cout<<"Enter first number:"<<endl<<endl;
    cout<<"Enter Second number:"<<endl<<endl;
    cout<<"Enter third number:"<<endl<<endl;
   
   //max 2 numbers
{
    cout<<"Largest number from two parameter function:"<<endl;
    if (nmb1>nmb2)
    {
        cout<<nmb1;
        cout<<endl;
    }
    else 
    {
       cout<<nmb2;
       cout<<endl;
    }
}
    
    //max 3 numbers
    {
        cout<<endl;
        cout<<"Largest number from three parameter function:"<<endl;
        if (nmb1>nmb2 and nmb1>nmb3)
        {
            cout<<nmb1<<endl;
        }
        else if (nmb2>nmb1 and nmb2>nmb3)
        {
            cout<<nmb2<<endl;
        }
        else if (nmb3>nmb1 and nmb3>nmb2)
        {
            cout<<nmb3<<endl;
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}