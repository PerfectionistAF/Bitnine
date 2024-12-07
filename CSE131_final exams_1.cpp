#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
//FALL2020
//Write a C++ program to list the words and counts the occurrences of each word in an input 
//text. The words are separated by space, comma or dots.
//use a strtok for word count
//repeated characters
int main()
{
    char str[50];
    cin.getline(str,50);


    for(int i=0;i<strlen(str);i++)
    {
        while(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+('a'-'A');
        }
        cout<<str[i];
    }
    cout<<endl;
    //int COUNT=WORDCOUNT (str);
    //cout<<"number of words is "<<COUNT<<endl;

    //find same characters and its count
    int repeated=0;
    for(int i=0;i<strlen(str)-1;i++)
    {
            if(str[i]==' ')
            break;

        for(int j=i+1;j<strlen(str);j++)
        { 

            if(str[i]==str[j])
            repeated++;
        }

    }
    
    cout<<"characters repeated:"<<repeated<<"times"<<endl;        
    return 0;
}
int WORDCOUNT (char* text)
{
    int count=0;
    char*tokens;
    tokens=strtok(text," ");
    
    while(tokens!=NULL)
    {
        tokens=strtok(0," ");
        count++;
    }
    
    return count;
}   
int main()
{
    const int words=10;
    const int letters=10;
    char str[words][letters]={{'T','h','i','s','\0'},{'i','s','\0'},{'T','h','i','s','\0'}};
    
    cout<<endl;
    //int COUNT=WORDCOUNT (str);
    //cout<<"number of words is "<<COUNT<<endl;

    //find same words and its count
    int repeated=0;
    for(int i=0;i<words;i++)
    {
            //if(str[i]==' ')
            //break;

        for(int j=0;j<strlen(str[i]);j++)
        { 

            if(str[i]==str[j])
            repeated++;
        }

    }
    
    cout<<"words repeated:"<<repeated<<"times"<<endl;        
    return 0;
}

//Write a program in C to return only the unique rows from a given binary matrix. 
const int ROW=4;
const int COL=5;
void findUniqueRows(int M[ROW][COL])
{
    //Traverse through the matrix
    for(int i=0; i<ROW; i++)
    {
        bool flag=0;
         
        //check if there is similar column
        //is already printed, i.e if i and
        //jth column match.
        for(int j=0; j<i; j++)
        {
            flag=1;
             
            for(int k=0; k<=COL; k++)
            if(M[i][k]!=M[j][k])
                flag=0;
             
            if(flag==1)
            break;
        }
         
        //if no row is similar
        if(flag==0)
        {
            //print the row
            for(int j=0; j<COL; j++)
                cout<<M[i][j]<<" ";
            cout<<endl;
        }
    }
}
 
// Driver Code
int main()
{
    int M[ROW][COL] = {{0, 1, 0, 0, 1},
                       {1, 0, 1, 1, 0},
                       {0, 1, 0, 0, 1},
                       {1, 0, 1, 0, 0}};
 
    findUniqueRows(M);
 
    return 0;
}
                
//HALISTONE SEQ	

int Hailstone(int n)
{
	//static int count=1;
	if (n == 1)
	{
		count++;
		cout<<count;
		return 1;

	}
	
	if (n % 2 == 0)
	{
		n = n / 2;
		count++;
	}
	else
	{
		n = (n * 3) + 1;
		count++;
	}
	cout << n << "    " ;
	return Hailstone(n);
	
}

int main()
{
	int y = 13;
	//int count = 1;
	int hail_array[100];
	cout << y << "    "<<endl;
	while (Hailstone(y) != 1)
	{
		int hail_array[] = { Hailstone(y) };
	}
	cout << endl;
	//const int length =( sizeof(hail_array) / sizeof(hail_array[0]));
	//cout << "The length of the sequence is: " << length << endl;
	return 0;
}
//FALL2018
//FALL2016
//SPRING2020
//SPRING2019
#include <iostream>
#include <cstring>
using namespace std;

int My_Find_Replace(char *s)
{
    //find first index to be replaced then second index to be replaced
    //then remove them 
    //find the index of / and the index of *
    int b=0;
    int indices[5];
    for(int index=0;index<strlen(s);index++)
    {
        if(s[index]=='/' || s[index]=='*')
        {
            indices[b]=index;
            b++;
        }
    }
    //cout<<indices[0]<<endl;
    //cout<<b<<endl;
    //eliminate characters between 2 middle indices
    for(int jindex=indices[(b-1)/2]+1;jindex<=indices[((b-1)/2)+1]-1;jindex++)
    {
        s[jindex]=' ';
    }
    for(int k=0;k<strlen(s);k++)
    cout<<s[k];
    
    cout<<endl;
    return 1;
}
int main()
{
    char str[100]="Welcome home /*Mom and Dad*/ play with me.";
    cout<<My_Find_Replace(str);
    
    cout<<endl;             
}
//SPRING2017

//SPRING 2016
char s[5]="123";
int x=0;

//from string to int
cout<<"STRING  TO  INT:";
for(int i=0;i<strlen(s);i++)
x=x*10+s[i]-(char)(48);


//cout<<12-'0'<<endl;
cout<<x;
cout<<endl;

//from int to string
cout<<"INT TO STRING:";
void MyIntToA(int x, char str[])
{
    bool negative = false;
    int digits[10];
    int k = 0;
    if (x < 0) {
        negative = true;
    }
    while (x != 0)
    {
        digits[k] = x % 10;

        if (digits[k] < 0)
            digits[k] = digits[k] * -1;

        x = x / 10;
        k++;
    }
    if (negative == true) {
        cout << "-";
    }
    for (int index = 0; index < k; index++)
    {
        str[index] = (char)(digits[k - index - 1]) + '0';
        if (x < 0)
        {
            char s2[100] = "-";
            strcat_s(s2, str);

            for (int indexnew = 0; indexnew < strlen(s2); indexnew++)
                cout << s2[indexnew];
        }

        else
            cout << str[index];
    }
}
int main()
{
    //method 1 with function
    int num = -1787;
    char test1[100];
    MyIntToA(num, test1);
    cout << endl;

    int num2 = 147;
    char test2[100];
    MyIntToA(num2, test2);
    cout << endl;

    //method 2 without function
    cout << "INT TO STRING:";
    char y[5];
    int d[3] = { 1,2,3 };

    for (int j = 0; j < 3; j++)
    {
        y[j] = (char)(d[j]) + (char)(48);
        cout << y[j];
    }
}

//count divisions of ints
int main()
{
    int counter[10]={0};
    int finalcount[10]={0};
    srand(time(0));
    for(int i=0;i<10;i++)
    {
        float x=(rand()%10)/10.0;
        counter[x*10]=2;
        finalcount[x*10]+=finalcount[x*10];
    }
    
    for(int j=0;j<10;j++)
    cout<<finalcount[j]<<endl;
}


#include <bits/stdc++.h>
using namespace std;
//10K real nos completely random 0-1 sorted into divisions find frequency of highest division
const int size=10;
int main()
{
    float x[size]={0};
    int count[10]={0};
    
    int maxfreq=0;
    int indexmax=-1;
    
    srand(time(0));
    
    for(int i=0;i<size;i++)
    {
        x[i]=(rand()%RAND_MAX)/(RAND_MAX*1.0);
        
                if(x[i]>0 && x[i]<=0.1)
        count[0]++;
                else if(x[i]>0.1 && x[i]<=0.2)
        count[1]++;
                else if(x[i]>0.2 && x[i]<=0.3)
        count[2]++;
                else if(x[i]>0.3 && x[i]<=0.4)
        count[3]++;
                else if(x[i]>0.4 && x[i]<=0.5)
        count[4]++;
                else if(x[i]>0.5 && x[i]<=0.6)
        count[5]++;
                else if(x[i]>0.6 && x[i]<=0.7)
        count[6]++;
                else if(x[i]>0.7 && x[i]<=0.8)
        count[7]++;
                else if(x[i]>0.8 && x[i]<=0.9)
        count[8]++;
                else if(x[i]>0.9 && x[i]<=1.0)
        count[9]++;
    }
    int m=0;
    while(m<size)
    {
        cout<<x[m]<<"\t";
        m++;
    }
    cout<<endl;
    //find greatest count and its index
    for(int j=0;j<size;j++)
    {
        if(count[j]>maxfreq)
        {
            maxfreq=count[j];
            indexmax=j;
        }
    }
    cout<<"Max freq is "<<maxfreq<<"  and its index is\t"<<indexmax<<endl;
}
  
//count random letters 
const int size=10;
int main()
{
    char x[size]={0};
    int count[26]={0};
    
    int maxfreq=0;
    int indexmax=-1;
    
    srand(time(0));
    
    for(int i=0;i<size;i++)
    {
        int r=rand()%26;
        x[i]=(char)('a'+r);
        cout<<x[i]<<"\t";
        count[r]++;
        
    }
    cout<<endl;
    //find greatest count and its index
    for(int j=0;j<26;j++)
        if(count[j]>maxfreq)
        {
            indexmax=j;
            maxfreq=count[j];
        }
    cout<<"Max freq is "<<(char)('a'+indexmax)<<"  and its index is\t"<<indexmax<<endl;
}
      
