/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 5th, 2022, 11:25 AM
 * Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random Number
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
float const Liter=0.264172;

float mglln(float ml, int lt)
{
    return ml/(Liter*lt);
}

const float Percent=100;

const float PERCENT=100;

float infrate(float cp, float pp) //cp=current price, pp= past price
{
    return ((cp-pp)/pp)*PERCENT;
}


float max(float nmb1, float nmb2);
float max(float nmb1, float nmb2, float nmb3);

//Function Prototypes
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();
void prblm8();
void prblm9();
void prblm10();

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Repeat the process
    do{
    
        //Initialize Variables
         cout<<"Which Problem would you like to run"<<endl;
         cout<<"Type 0 for Problem 1 Sum"<<endl;
        cout<<"Type 1 for Problem 2 Pay in Pennies"<<endl;
        cout<<"Type 2 for Problem 3 Min Max"<<endl;
        cout<<"Type 3 for Problem 4 Rectangle"<<endl;
        cout<<"Type 4 for Problem 5 Pattern"<<endl;
        cout<<"Type 5 for Problem 6 Miles per Gallon"<<endl;
        cout<<"Type 6 for Problem 7 Fuel Efficiency"<<endl;
        cout<<"Type 7 for Problem 8 Inflation"<<endl;
        cout<<"Type 8 for Problem 9 Estimated Cost"<<endl;
        cout<<"Type 9 for Problem 10 2 or 3 Max"<<endl;
        cin>>choice;

        //Map the Inputs to the Outputs
        switch(choice){
            case '0':prblm1();break;
            case '1':prblm2();break;
            case '2':prblm3();break;
            case '3':prblm4();break;
            case '4':prblm5();break;
            case '5':prblm6();break;
            case '6':prblm7();break;
            case '7':prblm8();break;
            case '8':prblm9();break;
            case '9':prblm10();break;
        }
    }while(choice>='0'&&choice<='9');

    //Exit the code
    return 0;
}

void prblm1(){
     //Declare Variables
                 int value;
                 int sum=0;
    
                 //Initialize or input i.e. set variable values
                 
                 //Map inputs -> outputs
                  do {
                    cin>>value;
                      }
                 while (value<0);
    
                for (int count=1; count<=value; count++)
                    {
                 sum +=count;
                      }
    
                //Display the outputs
                cout<<"Sum = "<<sum;
}

void prblm2(){
    //Declare Variables
                 int nmb, days;
                 double pay, ttl;
    
                //Initialize or input i.e. set variable values
                 cin>>days;
                 nmb=1;
                 ttl=0;
                 pay=0.01;
    
                //Map inputs -> outputs
                 while (days<1)
                 {
                     cout<<"Number of days worked must be at least 1";
                 }
                 while (nmb<=days)
                    {
                      ttl=ttl+pay;
                      pay=pay*2;
                      nmb++;
                     }
                //Display the outputs
                cout<<"Pay = $"<<fixed<<setprecision(2)<<ttl1; 
}

void prblm3(){
    //Declare Variables
                 int max=0,
                     nmb=0,
                     min=10000000;
        
                 //Initialize or input i.e. set variable values
    
                 //Map inputs -> outputs
               while (nmb != -99)
                  {
                     cin>>nmb;
                         if (nmb==-99)break;
                         if (nmb>max)
                             max=nmb;
                         if (nmb<min)
                              min=nmb;
                 }
             //Display the outputs
            cout<<"Smallest number in the series is "<<min<<endl;
            cout<<"Largest  number in the series is "<<max;

}

void prblm4(){
    //Set the random number seed
                 int a;
                 char b;
    
                 //Display the outputs
                 cin>>a; 
                 cin>>b;
                  for (int i=0;i<=a-1;i++) {
                  for (int j=0;j<=a-1;j++){
                     cout<<b;
                    }
                 if (i<a-1)cout<<endl;
}
}
    

void prblm5(){
     //Declare Variables
             int a;
             //Initialize or input i.e. set variable values
    
             //Map inputs -> outputs
    
              //Display the outputs
            cin>>a;
            for (int i=1;i<=a;i++) {
    
            for(int j=1;j<=i;j++){
                 cout<<"+";
                 }
                cout<<endl<<endl;
                }

        for (int i=1;i<=a;i++){ 
            for(int j=1;j<=a+1-i;j++) {
                cout<<"+";
                }
             if (i<a) cout<<endl<<endl;
                 }
}

void prblm6(){
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
}
    
    void prblm7(){
        //Declare Variables
   float liter1, glln1, mile1, mpg1, liter2, glln2, mile2, mpg2;
   
   string choice, choice1, choice2;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    choice1='y';
    
    choice2='n';
    
    //Display the outputs
   do
    {
       
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mile1;
        glln1=liter1*0.264179;
        mpg1=mile1/glln1;
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<endl<<endl;

        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mile2;
        glln2=liter2*0.264179;
        mpg2=mile2/glln2;
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<endl<<endl;
        
        if (mpg1>mpg2) {
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
        }else{
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
        }
        
        cout<<"Again:"<<endl<<endl;
        cin>>choice;
        while (choice==choice1)
        {
            cout<<"Car 1"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl;
            cin>>liter1;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>mile1;
            glln1=liter1*0.264179;
            mpg1=mile1/glln1;
             cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg1<<endl<<endl;

           cout<<"Car 2"<<endl;
           cout<<"Enter number of liters of gasoline:"<<endl;
           cin>>liter2;
           cout<<"Enter number of miles traveled:"<<endl;
           cin>>mile2;
           glln2=liter2*0.264179;
           mpg2=mile2/glln2;
             cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg2<<endl<<endl;
           
           if (mpg1>mpg2)
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
           else 
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
            
           cout<<"Again:"<<endl;
           cin>>choice;
           if (choice==choice2)break;
        }
    }
    while (choice==choice1);
    }
    
    void prblm8(){
        
      //Declare Variables
                float cp, pp;
                char repeat;
                 //Initialize or input i.e. set variable values
   
                 //Map inputs -> outputs
                 repeat='y';
        
                 //Display the outputs
                    do {
                        cout<<fixed<<setprecision(2);
                        cout<<"Enter current price:"<<endl;
                        cin>>cp;
                        cout<<"Enter year-ago price:"<<endl;
                        cin>>pp;
                        cout<<"Inflation rate: "<<infrate(cp, pp)<<"%"<<endl<<endl;
                        cout<<"Again:"<<endl;
                        cin>>repeat;
                        if (repeat=='n')
                             break;
                            cout<<endl;
                       } while (repeat=='y'||repeat=='Y');
    }
    void prblm9(){
        //Declare Variables
                char choice;
                float pp, //previous price
                      cp, //current price
                      rate,
                      yearone,
                      yeartwo;
    
                 //Display the outputs
                     do {
                          cout<<fixed<<setprecision(2);
                          cout<<"Enter current price:"<<endl;
                          cin>>cp;
                          cout<<"Enter year-ago price:"<<endl;
                          cin>>pp;

                         rate=((cp-pp)/pp)*Percent;

                         cout<<"Inflation rate: "<<rate<<"%"<<endl;
                         cout<<endl;

                         yearone=(((rate/100)*cp)+cp);
                         cout<<"Price in one year: $"<<yearone<<endl;

                        yeartwo=(((rate/100)*yearone)+yearone);
                        cout<<"Price in two year: $"<<yeartwo<<endl;
                        cout<<endl;

                        cout<<"Again:";
                        cout<<endl;
                        cin>>choice;
                        if (choice=='n')
                        break;
                        cout<<endl;
                        }while (choice=='y'||choice=='Y');
    }
    
    void prblm10(){
         //Declare Variables
                 float nmb1, nmb2, nmb3;
    
                 //Initialize or input i.e. set variable values
                cin>>nmb1>>nmb2>>nmb3;
    
                //Map inputs -> outputs
                 cout<<"Enter first number:"<<endl<<endl;
                 cout<<"Enter Second number:"<<endl<<endl;
                 cout<<"Enter third number:"<<endl<<endl;
        
                 //max 2 numbers
                
                cout<<"Largest number from two parameter function:"<<endl;
                if (nmb1>nmb2)
                 {
                cout<<nmb1;
                cout<<endl;
               }
            else 
             {
                cout<<nmb2;
                cout<<endl;
             }
    
                 //max 3 num
        cout<<endl;
        cout<<"Largest number from three parameter function:"<<endl;
        if (nmb1>nmb2 and nmb1>nmb3)
        {
            cout<<nmb1<<endl;
        }
        else if (nmb2>nmb1 and nmb2>nmb3)
        {
            cout<<nmb2<<endl;
        }
        else if (nmb3>nmb1 and nmb3>nmb2)
        {
            cout<<nmb3<<endl;
        }
    
    }
    