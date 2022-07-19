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
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    string name1, name2, name3;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //map inputs->outputs
    if (name1<name2 && name1<name3)
    {
        cout<<name1<<endl;
        if (name2>name3)
        {
            cout<<name2<<endl<<name3;
        }
        else 
        {
            cout<<name3<<endl<<name2;
        }
    }
    else if (name2<name1 && name2<name3)
    {
        cout<<name2<<endl;
        if (name1<name3)
        {
            cout<<name1<<endl<<name3;
        }
        else 
        {
            cout<<name3<<endl<<name1;
        }
    }
    else if (name3<name1 && name3<name2)
    {
        cout<<name3<<endl;
        if (name1<name2)
        {
            cout<<name1<<endl<<name2;
        }
        else 
        {
            cout<<name2<<endl<<name1;
        }
    }
    //Exit stage right or left!
    return 0;
}