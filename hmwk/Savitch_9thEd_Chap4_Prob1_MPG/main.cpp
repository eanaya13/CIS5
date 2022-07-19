/* 
 * File:   
 * Author: Esther Anaya
 * Created on July 14 2022 4:00 pm 
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
float const Liter=0.264172;

float mglln(float ml, int lt)
{
    return ml/(Liter*lt);
}


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int lt;

   float ml;
    
    float mpg;
    
    char repeat;
    
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    repeat='y';
    
    //Display the outputs
    while (repeat=='y') {
       
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cin>>lt;
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>ml;
        cout<<fixed<<setprecision(2);
        cout<<"miles per gallon:"<<endl;
        cout<<mglln(ml, lt)<<endl;
        
        mpg=ml/(lt*Liter);
        
        cout<<"Again:"<<endl;
        cin>>repeat;
        
        if (repeat=='y')
        cout<<endl;
    
    }

    //Exit stage right or left!
    return 0;
}