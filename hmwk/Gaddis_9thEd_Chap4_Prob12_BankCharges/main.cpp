/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
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
    float startB, //starting balance
    feemont, //monthly Fee
    newblnc, //New balance
    chkfee, //check chkfee
    lowbal; //Low balance fee
    
    int check; //number of checks
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>startB;
    cin>>check;
    feemont=10;
    {
        if (check<20)
        chkfee=0.10*check;
        else if (check>=20&&check<40)
        chkfee=0.08*check;
        else if (check>=40&&check<60)
        chkfee=0.06*check;
        else chkfee=0.04*check;
    }
    {
        if (startB<400)
        lowbal=15;
        else lowbal=0;
    }
    newblnc=startB-chkfee-feemont-lowbal;
    
    //Display the outputs
cout<<fixed<<setprecision(2);
cout<<"Monthly Bank Fees"<<endl;
cout<<"Input Current Bank Balance and Number of Checks"<<endl;
cout<<"Balance     $"<<setw(9)<<right<<startB<<endl;
cout<<"Check Fee   $"<<setw(9)<<right<<chkfee<<endl;
cout<<"Monthly Fee $"<<setw(9)<<right<<feemont<<endl;
cout<<"Low Balance $"<<setw(9)<<right<<lowbal<<endl;
cout<<"New Balance $"<<setw(9)<<right<<newblnc;

    //Exit stage right or left!
    return 0;
}
