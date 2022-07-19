
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 27, 2022, 6:33 PM
 * Purpose: Restaurant Bill
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
    float mlchrg, //meal charge amount
          tx, //tax
          tp, //tip
          csttx, //cost with tax
          cstttl; //cost total with tax and tip
    
    //initialize variables
    mlchrg=88.67;
    tx=.0675;
    tp=.2;
    //Map inputs to outputs-> The Process
    csttx= (mlchrg*tx)+ mlchrg;
    cstttl= (csttx*tp)+ csttx;
    
    
    //Display Results
    cout<<"meal cost: $88.67"<<endl;
    cout<<"tax amount: 6.75%"<<endl;
    cout<<"tip amount: 20%"<<endl;
    cout<<"total bill: "<<cstttl<<endl;

    
    //Exit stage right
  
    return 0;
}

