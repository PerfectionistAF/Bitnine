#include <bits/stdc++.h>
using namespace std;

/*int JAN=31;
int FEBN=28;
int FEBL=29;
int APR=30;
*/
struct DATE
{
    int day;
    int dayofmonths1[13]={31,28,31,30,31,30,31,31,30,31,30,31}; //compare indices
    int month;
    int year;
};

int main()
{
    //enter strings then atoi then initialise parts of struct 
    cout<<"Enter start date as dd/mm/yyyy:"<<endl;
    string d1[10];
    //force user to enter date string separated by 1 space
    for(int i=0;i<10;i++)
    {
        if(i==2 || i==5)
        d1[i]=' ';
        
        else
        cin>>d1[i];
    }

    string a1=d1[0]+d1[1];              //concatenate first 2 elements(day) then repeat for month and for year 
    string a2=d1[3]+d1[4];
    string a3=d1[6]+d1[7]+d1[8]+d1[9];
        
    DATE dateone;

    dateone.day=stoi(a1);
    dateone.month=stoi(a2);
    dateone.year=stoi(a3);

    cout<<"Enter end date as dd/mm/yyyy:"<<endl;
    string d2[10];
    //force user to enter date string separated by 1 space
     for(int ia=0;ia<10;ia++)
    {
        if(ia==2 || ia==5)
        d2[ia]=' ';
        
        else
        cin>>d2[ia];
    }
    string b1=d2[0]+d2[1];              //concatenate first 2 elements(day) then repeat for month and for year 
    string b2=d2[3]+d2[4];
    string b3=d2[6]+d2[7]+d2[8]+d2[9];
    
    DATE datetwo;
    
    datetwo.day=stoi(b1);
    datetwo.month=stoi(b2);
    datetwo.year=stoi(b3);
    //365 day years
    //years abs(subtraction of both)
    //months (two numbers abs(subtract) -1 ) since month isnt over yet 
    //days (max days of present month(if both are 31/30 days-difference)) else (if one is 31 then add 1 to max subtracted)
    int diffinyears=00;
    int diffinmonths=00;
    if(!(dateone.year%4==0 || datetwo.year%4==0)  ||                //normal year 
    ((dateone.year%4==0 || datetwo.year%4==0) &&                    //leap year with either leap date month passed or leap date day passed
        (((dateone.month>datetwo.month) ||(dateone.month<datetwo.month)) ||((dateone.day>=datetwo.day) ||(dateone.day<=datetwo.day)))))
    {
        diffinyears=abs(datetwo.year-dateone.year);
        //if the day has passed in the normal year 
         if((dateone.month>=datetwo.month ||datetwo.month>=dateone.month) &&(dateone.day>=datetwo.day || datetwo.day>=dateone.day))
         diffinmonths=abs(datetwo.month-dateone.month);
        
        else
        diffinmonths=(abs(datetwo.month-dateone.month)) -1;
    }
    
    else //leap years with leap date not passed
    {
        diffinyears=(abs(datetwo.year-dateone.year)) -1;
        diffinmonths=12-(abs(datetwo.month-dateone.month)) -1;
    }
    
    int diffindays=0;
     //index of months == index in array then apply condition to elements
        if(dateone.dayofmonths1[dateone.month]==datetwo.dayofmonths1[datetwo.month])//same number of days
        diffindays=dateone.dayofmonths1[dateone.month]-(abs(datetwo.day-dateone.day));
    
        else if(dateone.dayofmonths1[dateone.month]>datetwo.dayofmonths1[datetwo.month]
                || dateone.dayofmonths1[dateone.month]<datetwo.dayofmonths1[datetwo.month])
        diffindays=31-(abs(datetwo.day-dateone.day))+1;
    
        cout<<diffinyears<<"years"<<endl;
        
        if(diffinmonths<0) diffinmonths=0;
        
        cout<<diffinmonths<<"months"<<endl;
        cout<<diffindays+1<<"days including present day"<<endl;
}

