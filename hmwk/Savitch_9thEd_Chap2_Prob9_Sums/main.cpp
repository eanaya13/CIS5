/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on July 6, 2019, 12:36 PM
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
    
    //Declare Variables
    int numb=0, possum=0, negsum=0, total, count=0, poscnt=0, negcnt=0;
    
    
    //Initialize or input i.e. set variable values
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    for (int i=0; i<10; i++)
    {
        cin>>numb;
        if (numb>=0)
        {
            possum+=numb;
            poscnt++;
        }
        else
        {
            negsum+=numb;
            negcnt++;
        }
    }
    
    
    
    //Map inputs -> outputs
    
    total=possum+negsum;
    
    //Display the outputs
cout<<fixed;
cout<<"Negative sum =" <<setw(4)<<negsum<<endl;
cout<<"Positive sum ="<<setw(4)<<possum<<endl;
cout<<"Total sum    ="<<setw(4)<<total;


    //Exit stage right or left!
    return 0;
}