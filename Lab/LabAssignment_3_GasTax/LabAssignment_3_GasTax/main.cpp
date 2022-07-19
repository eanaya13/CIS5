
/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on June 8, 2022, 2:16 PM
 * Purpose: Gas Taxes
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
  float cost, // cost in dollars per gallon
        profgas, //profit made from gas company in dollars
        gastax, //percent of gas tax
        costtax, //cost after taxes in dollars
        govtax; //amount govt made from taxes in dollars
    
    //initialize variables
   float saletx=0.08,
    txglln=0.39,
    fee=0.10,
    fedtax=0.184,   
    profoil= 0.065;    
       
   
   //     
   cout<<" Enter the amount it costs per gallon since the last time you put gas in your car."<<endl;
    cin>>cost;
       
    //Map inputs to outputs-> The Process
    govtax= cost*.08 + 0.39+.10+.065;
    costtax= cost+govtax;
    gastax= (govtax*100)/cost;
    profgas= costtax-cost+.184;
            
    
    //Display Results
  
    cout<<"Profit of Gas Company: $"<<profgas<<endl;
   
    cout<<"Taxes to government: $"<<govtax<<endl;
    
    cout<<"Tax for gas: "<<gastax<<"%"<<endl;
    //Exit stage right
  
    return 0;
}



