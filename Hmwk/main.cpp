
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 26, 2022, 9:54 PM
 * Purpose: Predict sales
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float estcst, //east coast sales percentage
          cmpny, //company total sale in millions of dollars
          result;
    
  
    //initialize variables
    estcst=0.58;
    cmpny=8.60;
    
    //Map inputs to outputs-> The Process
    result= estcst*cmpny;
    
    //Display Results
    cout<<"If the comany made $8.6 million in sales, and the East Coast Sales division generated 58% of total sales, "<<endl;
    cout<<"then the east coast division generated $"<<result<<" million dollars in sales."<<endl;
    
    //Exit stage right
  
    return 0;
}

