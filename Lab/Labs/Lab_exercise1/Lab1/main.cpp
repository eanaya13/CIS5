
/* 
 * File:   main.cpp
 * Author: Esther
 * Created on June 28, 2022, 6:33 PM
 * Purpose: Gas Station Cost
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
    float tnksz,//size of tank in gallons
          mpg,//gas milage
          mls1, //miles to gas station 1
          mls2, //miles to gas station 2
          dstttl1, //total distance back and fourth in miles to gas station 1
          dstttl2, //total distance back and fourth in miles to gas station 2
          ttlmlg1, //total cost $ with mileage to gas station 1
          prcprglln1, //$ price per gallon when adding in mileage to station 1
          ttlmlg2, //total cost $ with mileage to gas station 2
          prcprglln2;//$ price per gallon when adding in mileage to station 2
            
    float glnfl,//gallons required to fill up
          gg, //gas gage % full
          rglrgs1, //regular gas $/ Gallon gas station 1
          rglrgs2,//regular gas $/gallon gas station 2
          cstfll1,//cost to fill up at gas station 1
          cstfll2, //cost to fill up at gas station 2
          csttfrm1, //cost to drive distance to and from gas station 1 in $
          csttfrm2;//cost to drive distance to and from gas station 2 in $
    
    //initialize variables
    gg = 0.75,
    tnksz= 22,
    mpg=17,
    mls1=10,
    mls2=20,
    rglrgs1=4.25,
    rglrgs2=4.09,
    dstttl1=20,
    dstttl2=40,
    csttfrm1=5,
    csttfrm2= 9.6235294;
            
    //Map inputs to outputs-> The Process
    glnfl = tnksz-(gg*tnksz),
    cstfll1=rglrgs1*glnfl,
    cstfll2=rglrgs2*glnfl,
    ttlmlg1= cstfll1+csttfrm1,
    prcprglln1= ttlmlg1/glnfl,
    ttlmlg2= cstfll2+csttfrm2,
    prcprglln2= ttlmlg2/glnfl;
            
    //Display Results
    cout<<"Your particular vehicle needs "<<glnfl<<" gallons to fill up."<<" It has a tank size of "<<tnksz<<"."<<endl;
    cout<<"It has "<<mpg<<" miles per gallon."<<endl;
    cout<<"    Gas station 1: "<<endl;
    cout<<"-"<<mls1<<" miles away \n"<<"-costs $"<<rglrgs1<<" per gallon \n"<<"-costs $"<<cstfll1<<" to fill up"<<endl;
    cout<<"-"<<dstttl1<<" mile round trip \n"<<"-costs $5 for the round trip "<<endl;
    cout<<"-costs $"<<ttlmlg1<<" with mileage "<<endl;
    cout<<"-price per gallon with mileage is $"<<prcprglln1<<endl;
    cout<<"    Gas station 2: "<<endl;
    cout<<"-"<<mls2<<" miles away \n"<<"-costs $"<<rglrgs2<<" per gallon \n"<<"-costs $"<<cstfll2<<" to fill up"<<endl;
    cout<<"-"<<dstttl2<<" mile round trip \n"<<"-costs $"<<csttfrm2<<" for round trip."<<endl;
    cout<<"-costs $"<<rglrgs2<<" per gallon \n"<<"-costs $"<<cstfll2<<" to fill up"<<endl;
    cout<<"-costs $"<<ttlmlg2<<" with mileage "<<endl;
    cout<<"-price per gallon with mileage is $"<<prcprglln2<<endl;
   
            
    //Exit stage right
  
    return 0;
}

