
#include <bits/stdc++.h>
using namespace std;

int leapflag(int year)
{
    if(year%4==0 || year%100==0 || year%400==0)
    return 1;
    
    return 0;
}
int main()
{
  cout<<"Enter the start date as dd mm yyyy:"<<endl;
  char date1[10];
  //force user to leave one space between string
  for(int i=0;i<10;i++)
  {
      if(i==2||i==5)
      date1[i]=' ';
      
      else
      cin>>date1[i];
  }
   cout<<"Enter the end date dd mm yyyy"<<endl;
  char date2[10];
  //force user to leave one space between string
  for(int ai=0;ai<10;ai++)
  {
      if(ai==2||ai==5)
      date2[ai]=' ';
      
      else
      cin>>date2[ai];
  }
  
  int dd1=0;
  int mm1=0;
  int yy1=0;
  int dd2=0;
  int mm2=0;
  int yy2=0;
  //from string to int of date1 and date2
    for(int di=0;di<2;di++)
    {
        dd1=dd1*10+date1[di]-(char)(48);
        dd2=dd2*10+date2[di]-(char)(48);
    }//days
     for(int mi=3;mi<5;mi++)
    {
        mm1=mm1*10+date1[mi]-(char)(48);
        mm2=mm2*10+date2[mi]-(char)(48);
    }//months
     for(int yi=6;yi<10;yi++)
    {
        yy1=yy1*10+date1[yi]-(char)(48);
        yy2=yy2*10+date2[yi]-(char)(48);
    }//years
    int monthlydays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    //month diff if both are same num of days 
    
    int mdiff=0;
    int ddiff=0;
    int ydiff=0;
    int flag=0;
    if(leapflag(yy1)==0 && leapflag(yy2)==0)//normal year
    {
        if(dd1>=dd2 || dd2>=dd1)//day has passed
        mdiff=abs(mm1-mm2);
        
        else if((mm1>mm2 || mm2>mm1) && (abs(yy2-yy1)==1))//month diff in case of new year (add a flag) if the flag =1 then diff in years is 0
        {
            mdiff=abs(mm1-mm2);
            flag=1;
            ydiff=0;
        }        
        else            //day hasn't passed
        mdiff=abs(mm1-mm2)-1;
    }
        if(monthlydays[mm1]==monthlydays[mm2])//same number of days
        ddiff=monthlydays[mm1]-(abs(dd2-dd1));
    
        else if(monthlydays[mm1]>monthlydays[mm2]               //different number of days
                || monthlydays[mm1]<monthlydays[mm2])
        ddiff=31-(abs(dd2-dd1))+1;
        
    else if(leapflag(yy1)==1||leapflag(yy2)==1)            //leap year with date not passed
    {
        //if day has passed
        if(dd1>=dd2||dd2>=dd1)
        ddiff=ddiff+1;
        
        mdiff=12-(abs(mm1-mm2))-1;
        ydiff=(abs(yy1-yy2)) -1;
    }
        if(flag!=1)
        ydiff=abs(yy1-yy2);
        
        cout<<ydiff<<"years"<<endl;
        
        if(mdiff<0) mdiff=0;
        
        cout<<mdiff<<"months"<<endl;
        cout<<ddiff+1<<"days including present day"<<endl;
}
