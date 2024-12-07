//example

#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
struct School
{
    char manager[30];
    int area;
    int NumberofStudents;
};
//to save space
void printschool(School* x)
{
    cout<<x->manager<<endl;
    cout<<x->area<<endl;
    cout<<x->NumberofStudents<<endl;
}
int main()
{
  School s;
  strcpy(s.manager,"Ahmed");
  cout<<s.manager<<endl;
  s.area=1000;
  s.NumberofStudents=4000;
  cout<<s.area<<endl;
  cout<<s.NumberofStudents<<endl;
  printschool(&s);  

  School s2;
  strcpy(s2.manager,"Huyam");
  //for(int i=0;i<strlen(s2.manager);i++)
  cout<<s2.manager;
  cout<<endl;
  cout<<sizeof(s)<<endl;
  cout<<sizeof(s2)<<endl;
  return 0;
}


//struct of struct 
struct School
{
    char manager[30];
    int area;
    int NumberofStudents;
};

struct City
{
    int population;
    School* s;
//School s;
};

void printschool(School* x)
{
    cout<<x->manager<<endl;
    cout<<x->area<<endl;
    cout<<x->NumberofStudents<<endl;
}
int main()
{
  School s={"Ahmed",1000,2000};
  City c;
  c.s=s;
  c.population=10;
  cout<<c.population<<endl;
  cout<<c.s.manager<<endl;
  
  //printschool(&s);
  
  cout<<sizeof(s)<<endl;
 
  return 0;
}


//if an member of type struct within a struct is a pointer
int main()
{
  School s={"Ahmed",1000,2000};
  City c;
  c.s=&s;
  c.population=10;
  cout<<c.population<<endl;
  cout<<c.s->manager<<endl;
  
  //printschool(&s);
  
  cout<<sizeof(s)<<endl;
 
  return 0;
}
//if instance of a struct is a pointer
int main()
{
  School s={"Ahmed",1000,2000};
  City v={10,&s};
  City *c=&v;
  
  
  cout<<c->population<<endl;
  cout<<c->s->manager<<endl;
  
  //printschool(&s);
  
  cout<<sizeof(s)<<endl;
 
  return 0;
}


//STRUCTS OF STRUCTS 
struct City
{
    int population;
    struct School
    {
        char manager[30];
        int area;
        int NumberofStudents;
    };
    School s;
};

//error function:void printschool(School* x)
//{
   // cout<<x->manager<<endl;
    //cout<<x->area<<endl;
    //cout<<x->NumberofStudents<<endl;
//}
int main()
{
  //error:School s={"Ahmed",1000,2000};
  City v={10,{"Gina",4000,5}};
  City *c=&v;
  
  
  cout<<c->population<<endl;
  cout<<c->s.manager<<endl;
  
  cout<<v.population<<endl;
  cout<<v.s.manager<<endl;
  
  //error:printschool(&s);
 
  return 0;
}



struct City
{
    int population;
    struct //School
    {
        char manager[30];
        int area;
        int NumberofStudents;
    }//error: ;
    primaryschool{"AHMED",10000,50};
    //School s;
};
int main()
{
  City c;
  cout<<c.primaryschool.manager<<endl;}


//5 movies in a store each with a title,lead star,price . Print the title with the highest price

struct Store
{
    struct MOVIE
    {
        char title[30];
        char lead[30];
        int price;
    };
    MOVIE moviesarray[5];
};

int main()
{
    Store s;

    for(int i=1;i<=5;i++)
    {
        cin.getline(s.moviesarray[i].title,30);
        cin.getline(s.moviesarray[i].lead,30);
        cin>>s.moviesarray[i].price;

        cin.ignore();
    }
    
    int j=0;
    for(int i=1;i<=5;i++)
    {
        int max=s.moviesarray[i].price;
        
        if(s.moviesarray[i+1].price>s.moviesarray[i].price)
        {
            max=s.moviesarray[i+1].price;
            j=i+1;
        }
        
        else
        continue;
    }
    
    cout<<"max price is\t"<<s.moviesarray[j].price<<"\twith title: "<<s.moviesarray[j].title<<"\tleading:"<<s.moviesarray[j].lead<<endl;
    return 0;
}

//a store with 5 automobiles each automobile Manufacturer Year Price
//Call your structure “Auto”. Create an array to store the information of all the cars. The program then does the following:
//Enter the data for all automobiles.
//Print a list of all cars manufactured in a certain year (which dealer enters).

struct Dealer
{
    struct Auto
    {
        char Manufacturer[30];
        int YearManufactured;
        float Price;
    };
    Auto carsarray[5];
};

int main()
{
    Dealer a;
    for(int i=1;i<=5;i++)
    {
        cin.getline(a.carsarray[i].Manufacturer,30);
        cin>>a.carsarray[i].YearManufactured;
        cin>>a.carsarray[i].Price;
        
        cin.ignore();
    }
    cout<<"Enter the required year of manufacture:\t"<<endl;
    int Required;
    cin>>Required;
    
    for(int i=1;i<=5;i++)
    {
        if(a.carsarray[i].YearManufactured==Required)
        cout<<a.carsarray[i].Manufacturer<<" "<<a.carsarray[i].YearManufactured<<" "<<a.carsarray[i].Price<<endl;
            
        else
        continue;
    }
    
    return 0;
}

//student record the fields: ID, Name, five subject scores (sc1, sc2, sc3, sc4, sc5), the average score and the grade letter.
//Compute the average and grade letter for each student according to the following rule:
//Grade ‘A’ for average >= 90
//Grade ‘B’ for average >= 80 and less than 90
//Grade ‘C’ for average >= 70 and less than 80
//Grade ‘D’ for average >= 60 and less than 70
//Grade ‘F’ for average less than 60
//Print the contents for each student structure.
//Display all the records sorted alphabetically according to the students’ names.
struct Student
{
    int ID;
    char Name[30];
    float sc1;
    float sc2;
    float sc3;
    float sc4;
    float sc5;
    double averagescore;
    char gradeletter;
};

double AVERAGE(float total)
{
    return total/5;
}
int main()
{
    Student records[5];
    for(int i=1;i<=5;i++)
    {
        cin>>records[i].ID;
        cin.getline(records[i].Name,30);
        cin>>records[i].sc1;
        cin>>records[i].sc2;
        cin>>records[i].sc3;
        cin>>records[i].sc4;
        cin>>records[i].sc5;
        cin.ignore();
        
        int total=records[i].sc1+records[i].sc2+records[i].sc3+records[i].sc4+records[i].sc5;
        records[i].averagescore=AVERAGE(total);
        
        if(records[i].averagescore>=90)
         records[i].gradeletter='A';
        
        else if(records[i].averagescore>=80 &&  records[i].averagescore<90)
         records[i].gradeletter='B';
         
        else if( records[i].averagescore>=70 &&  records[i].averagescore<80)
         records[i].gradeletter='C';
         
        else if( records[i].averagescore>=60 &&  records[i].averagescore<70)
         records[i].gradeletter='D';
        
        else
        records[i].gradeletter='F';
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(strcmp(records[j].Name,records[j+1].Name)==1)
            {
                Student temp=students[j];
		students[j]=students[j+1];
		students[j+1]=temp;
            }
        }
    }
        
     for(int i=1;i<=5;i++)
        cout<<records[i].Name<<" "<<records[i].ID<<" "<<records[i].averagescore<<" "<<records[i].gradeletter<<endl;
        
    return 0;
}  

