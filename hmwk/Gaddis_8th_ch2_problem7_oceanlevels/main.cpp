
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 22, 2022, 9:54 PM
 * Purpose:ocean levels
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
    short op2,op3,op4,result1,result2;
    float op1, result3;
    
    //initialize variables
    op1=1.5;
    op2=5;
    op3=7;
    op4=10;
    
    //Map inputs to outputs-> The Process
    result1=(op1*op2)-op1;
    result2=(op1*op3)-op1;
    result3=(op1*op4)-op1;
            
    //Display Results
    cout<<"Assuming the ocean's level rises about 1.5 millimeters per year,"<<endl;
    cout<<"In five years the ocean level will be "<<result1<<" millimeters higher"<<endl;
    cout<<"In seven years the ocean level will be "<<result2<<" millimeters higher"<<endl;
    cout<<"In ten years the ocean level will be "<<result3<<" millimeters higher"<<endl;
    
    //Exit stage right
  
    return 0;
}

