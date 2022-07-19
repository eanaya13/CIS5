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
const float Percent=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;
    float pp, //previous price
          cp, //current price
          rate,
          yearone,
          yeartwo;
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    
    //Display the outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;
        cin>>cp;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pp;

        rate=((cp-pp)/pp)*Percent;

        cout<<"Inflation rate: "<<rate<<"%"<<endl;
        cout<<endl;

        yearone=(((rate/100)*cp)+cp);
        cout<<"Price in one year: $"<<yearone<<endl;

        yeartwo=(((rate/100)*yearone)+yearone);
        cout<<"Price in two year: $"<<yeartwo<<endl;
        cout<<endl;

        cout<<"Again:";
        cout<<endl;
        cin>>choice;
        if (choice=='n')
         break;
        cout<<endl;
        }while (choice=='y'||choice=='Y');

    //Exit stage right or left!
    return 0;
}