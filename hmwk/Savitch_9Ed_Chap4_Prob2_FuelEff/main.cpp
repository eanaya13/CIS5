/* 
 * File:   
 * Author: Esther Anaya
 * Created on: july 14 2022 
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
   float liter1, glln1, mile1, mpg1, liter2, glln2, mile2, mpg2;
   
   string choice, choice1, choice2;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    choice1='y';
    
    choice2='n';
    
    //Display the outputs
   do
    {
       
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mile1;
        glln1=liter1*0.264179;
        mpg1=mile1/glln1;
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<endl<<endl;

        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mile2;
        glln2=liter2*0.264179;
        mpg2=mile2/glln2;
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<endl<<endl;
        
        if (mpg1>mpg2) {
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
        }else{
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
        }
        
        cout<<"Again:"<<endl<<endl;
        cin>>choice;
        while (choice==choice1)
        {
            cout<<"Car 1"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl;
            cin>>liter1;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>mile1;
            glln1=liter1*0.264179;
            mpg1=mile1/glln1;
            cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<endl<<endl;

           cout<<"Car 2"<<endl;
           cout<<"Enter number of liters of gasoline:"<<endl;
           cin>>liter2;
           cout<<"Enter number of miles traveled:"<<endl;
           cin>>mile2;
           glln2=liter2*0.264179;
           mpg2=mile2/glln2;
           cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<endl<<endl;
           
           if (mpg1>mpg2)
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
           else 
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
            
           cout<<"Again:"<<endl;
           cin>>choice;
           if (choice==choice2)break;
        }
    }
    while (choice==choice1);
    //Exit stage right or left!
    return 0;
}