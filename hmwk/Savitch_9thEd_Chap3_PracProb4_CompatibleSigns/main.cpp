/* 
 * File:   main.cpp
 * Author: Esther Anaya
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  sign compatibility 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string s1,s2,e1,e2;
    
    //Initialize or input i.e. set variable values
  cin>>s1>>s2;
  
    //Map inputs -> outputs
    if(s1=="Aries"||s1=="Leo"||s1=="Sagittarius")e1="Fire";
    else if(s1=="Taurus"||s1=="Virgo"||s1=="Capricorn")e1="Earth";
    else if(s1=="Gemini"||s1=="Libra"||s1=="Aquarius")e1="Air";
    else if (s1=="Cancer"||s1=="Scorpio"||s1=="Pisces")e1="Water";
    
    if(s2=="Aries"||s2=="Leo"||s2=="Sagittarius")e2="Fire";
    else if(s2=="Taurus"||s2=="Virgo"||s2=="Capricorn")e2="Earth";
    else if(s2=="Gemini"||s2=="Libra"||s2=="Aquarius")e2="Air";
    else if(s2=="Cancer"||s2=="Scorpio"||s2=="Pisces")e2="Water";
    
    
    //Display the outputs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    if(e1==e2)cout<<s1<<" and "<<s2<<" are compatible "<<e1<<" signs.";
    else cout<<s1<<" and "<<s2<<" are not compatible signs.";

    //Exit stage right or left!
    return 0;
}
