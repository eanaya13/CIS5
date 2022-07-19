
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 22, 2022, 9:54 PM
 * Purpose: sales tax
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
    float sst, //state sales tax
          cst,//county sales tax
          result;
    short prchs; //purchase cost
    
    //initialize variables
    sst=.04;
    cst=.02;
    prchs= 96;
    //Map inputs to outputs-> The Process
    result= (sst*prchs)+(cst*prchs)+prchs;
    
    //Display Results
    cout<<"If you have a $95 purchase with 4% state sales tax and 2% county sales tax,"<<endl;
    cout<<"then your total after taxes would be calculated by:"<<endl;
    cout<<sst<<"*"<<prchs<<"+"<<cst<<"*"<<prchs<<"+"<<prchs<<"="<<result<<endl;
    cout<<"therefore your total after state and county sales tax is $"<<result<<endl;
    
    //Exit stage right
  
    return 0;
}

