/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 19, 2022, 10:40 AM
 * Purpose:  Rock-Paper-Scissors
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time to set the seed
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Random Seed 
   srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char p1,p2;
    
    //Initialize Variables
cout<<"Rock Paper Scissors Game"<<endl;
cout<<"Input Player 1 and Player 2 Choices"<<endl;
cin>>p1>>p2;
   
    
 //
 if (p1==p2)

   cout<<"Nobody wins"<<endl;
 if ((p1=='P'&&p2=='p') || (p1=='p'&&p2=='P'))
   cout<<"Nobody wins";
 if((p1=='S'&&p2=='s')||(p1=='S'&&p2=='s'))
   cout<<"Nobody wins";
 if ((p1=='R'&&p2=='r')||(p1=='R'&&p2=='r'))
   
 if((p1=='P'||p1=='p')&&(p2=='R'||p2=='r'))
   cout<<"Paper covers rock.";
 if ((p1=='R'||p1=='r')&&(p2=='P'||p2=='p'))
   cout<<"Paper covers rock.";
   
 if((p1=='R'||p1=='r')&&(p2=='S'||p2=='s'))
   cout<<"Rock breaks scissors.";
 if((p1=='S'||p1=='s')&&(p2=='R'||p2=='r'))
   cout<<"Rock breaks scissors.";
   
 if((p1=='P'||p1=='p')&&(p2=='S'||p2=='s'))
    cout<<"Scissors cuts paper.";
    if((p1=='S'||p1=='s')&&(p2=='P'||p2=='p'))
    cout<<"Scissors cuts paper.";
    

    //Exit the program
    return 0;
}