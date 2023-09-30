//have only one space using same string
//"" using diff string
//have one space between chars
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200];
    int i = 0, j, chk;
    cout << "Enter the String: ";
    cin.getline(str,200);
    while (str[i] != '\0')
    {
        chk = 0;
        if (str[i] == ' ')
        {
            for (j = i; str[j - 1] != '\0'; j++)
                str[j] = str[j + 1];
            chk = 1;
        }
        if (chk == 0)
            i++;
    }
    cout << "\nString without Spaces: " << str;
    cout << endl;
    return 0;
//print first letter of each word

int main()
{
	char s[100] = "This is me";

	cout << s[0]<<" ";

	for (int i = 0; i < strlen(s); i++)
	{
		if(s[i] == ' ')
		{
			cout<<s[i+1]<<" ";
		}

	}
	return 0;
}

//capitalise the word

void TOUPPER(char x)
{
	
		if (x >= 'A' && x <= 'Z')
		cout << x;
		else if (x == ' ')
		cout << x;
		else
			cout <<char( x - ('a' - 'A'));
	
}
int main()
{
	char s[100];
	cin.getline(s,100);
	
	for (int i = 0; i < strlen(s); i++)
	{
			TOUPPER(s[i]);
	}
	

	return 0;
}
//reverse string
void PrintRev(char x[])
{
	if (strlen(x)>1)
	PrintRev(&x[1]);
 cout<<x[0];
}
//count number of vowels and find sum of each vowel
#include <iostream>
using namespace std;

void TOUPPER(char x[],int size)
{
	for (int i = 0; i<size; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = (char)(x[i]- ('a' - 'A')) ;
	}
 }

int main()
{
	cout << "Enter sentence:";
	char str[100];
	cin.getline(str, 100);

	cout << "Make capitalised:" << endl;
	TOUPPER(str,strlen(str));
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
	}
	cout << endl;
	int vowels[5] = { 0 };

	//vowels[0]= count of a , vowels[1]=count of e...etc
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'A')
			vowels[0]++;

		else if (str[i] == 'E')
			vowels[1]++;

		else if (str[i] == 'I')
			vowels[2]++;

		else if (str[i] == 'O')
			vowels[3]++;

		else if (str[i] == 'U')
			vowels[4]++;

		else
			continue;
	}
	cout << "Frequency of A:" << vowels[0]<<endl;
	cout << "Frequency of E:" << vowels[1] << endl;
	cout << "Frequency of I:" << vowels[2] << endl;
	cout << "Frequency of O:" << vowels[3] << endl;
	cout << "Frequency of U:" << vowels[4] << endl;
	return 0;
}
//count number of words
#include <iostream>
using namespace std;

int main()
{
	char s[100];
	cout << "Enter sentence to count number of words separated by 1 space :" << endl;
	cin.getline(s, 100);
	int count = 1;

	if (s[0] == ' ')
		count--;
	for (int i = 0; s[i]!='\0'; i++)
	{
		if (s[i] == ' ')
			count++;
	}

	cout << "The number of words is :" << count << endl;

	return 0;
}
//count number of words regardless of space using strtok

int WORDCOUNT (char* text)
{
    int count=0;
    char*tokens;
    tokens=strtok(text," ");
    
    while(tokens!=null)
    {
        tokens=strtok(0," ");
        count++;
    }
    
    return count;
}

//concatenation
int main()
{
	char s[100];
	cin.getline(s,100);
	
	char s2[100]="BOAAAAAAAAAgggggggggg";

	strcat_s(s2, s);

	for (int i = 0; i < strlen(s2); i++)
		cout << s2[i];
	

	return 0;
}


//count number of substrings 
int main()
{
	char s[100];
	cin.getline(s,100);
	
	char s2[100]="BOA";
	int count = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if ((strncmp(&s[i], s2,strlen(s2))) == 0)
			count++;
	}

		cout << count;
	

	return 0;
}
//method 2 of find substring (go over every char and compare)
#include <iostream>
#include <cstring>
using namespace std;

void LOWER(char text)
{
    while(text >='A' && text <='Z')
        text=text+('a'-'A');
    
}
//count number of substrings
int main()
{
    char para[]="C is a general purpose computer programming language developed in 1972" 
                " by Dennis Ritchie at the Bell Telephone Laboratories for use with"
                " the UNIX operating system. Although C was designed for implementing "
                " system software, it is also widely used for developing portable "
                " application software. C is one of the most popular programming languages." 
                " It is widely used on many different software platforms, and there are "
                " few computer architectures for which a C compiler does not exist. "
                " C has greatly influenced many other popular programming languages, "
                " most notably C++, which originally began as an extension to C.";
                
    //char required[]="programming";
    int count=0;
    for(int i=0;i<strlen(para);i++)
    {
        LOWER(para[i]);
    }
    
    //compare
    for(int i=0;i<strlen(para)-10;i++)
    {
        if(para[i+0]=='p'&&para[i+1]=='r'&&para[i+2]=='o'&&para[i+3]=='g'&&para[i+4]=='r'&&para[i+5]=='a'&&para[i+6]=='m'&&para[i+7]=='m'
            &&para[i+8]=='i'&&para[i+9]=='n'&&para[i+10]=='g')
            count++;  
    }
    cout<<count<<endl;
    return 0;
//method 3 of find substring (compare to required)
int main()
{
    char para[]="C is a general purpose computer programming language developed in 1972" 
                " by Dennis Ritchie at the Bell Telephone Laboratories for use with"
                " the UNIX operating system. Although C was designed for implementing "
                " system software, it is also widely used for developing portable "
                " application software. C is one of the most popular programming languages." 
                " It is widely used on many different software platforms, and there are "
                " few computer architectures for which a C compiler does not exist. "
                " C has greatly influenced many other popular programming languages, "
                " most notably C++, which originally began as an extension to C.";
                
    char required[]="programming";
    int count=0;
    for(int i=0;i<strlen(para);i++)
    {
        LOWER(para[i]);
    }
    
    //compare
    for(int i=0;i<strlen(para)-10;i++)
    {
       if(para[i+0]=='p'&&para[i+1]=='r'&&para[i+2]=='o'&&para[i+3]=='g'&&para[i+4]=='r'&&para[i+5]=='a'&&para[i+6]=='m'&&para[i+7]=='m'
            &&para[i+8]=='i'&&para[i+9]=='n'&&para[i+10]=='g')
            {
                            
                 for(int j=0;j<strlen(required);j++)
                    {
                        if(para[i+j]==required[j])
                            ;
            
                        else
                        break;
                    }
        
                    count++;
            }    
    }
    cout<<count<<endl;
    return 0;
}
//method 4 of find substring (divide into tokens then compare each token)
    //compare tokens
    char* tokens;
    int i=0;
    tokens=strtok(para," .,?!");
    while(tokens!=NULL)
    {
        if(strcmp(tokens, required)==0)
        count++;
        tokens=strtok(0," .,?!");
    }

//method 5 use bool
    char required[]="programming";
    bool found=1;
    int count=0;
    for(int i=0;i<strlen(para);i++)
    {
        LOWER(para[i]);
    }
    
    //compare
    for(int i=0;i<strlen(para)-10;i++)
    {
                 for(int j=0;j<strlen(required);j++)
                    {
                        if(!(para[i+j]==required[j]))
                        {
                            found=0;
                            break;
                        }
                    }
                    if(found==1)
                    count++; 
    }
    cout<<count<<endl;
    return 0;
} 
//frequency of alphabets
“C is a general purpose computer programming language developed in 1972 
by Dennis Ritchie at the Bell Telephone Laboratories for use with
the UNIX operating system. Although C was designed for implementing 
system software, it is also widely used for developing portable 
application software. C is one of the most popular programming languages. 
It is widely used on many different software platforms, and there are 
few computer architectures for which a C compiler does not exist. 
C has greatly influenced many other popular programming languages, 
most notably C++, which originally began as an extension to C.”

    char required[]="abcdefghijklmnopqrstuvwxyz";
    int count[26]={0};
    for(int i=0;i<strlen(para);i++)
    {
        LOWER(para[i]);
    }
    for(int i=0;i<strlen(para);i++)
    {
        for(int j=0;j<strlen(required);j++)
        {
            if(para[i]==required[j])
            count[j]++;
            
            else
            continue;
        }
    }
    
    for(int i=0;i<strlen(required);i++)
    {
        cout<<"FREQ OF:"<<required[i]<<" "<<"is"<<" "<<count[i]<<endl;
    }
    return 0;
}

//implementation
a. void myStrCpy(char des[], const char src[]); //copies the contents of the src
//to the des.


b. int myStrLen(const char str[]); //return the length of a string without
//counting the null terminator.


c. int myStrCmp(const char str1[],const char str2[]);//compares str1 with str2
//and returns 0 if str1 == str2, returns -1 if str1 < str2 and returns 1 if
//str1 > str2


d. int atoi(const char str[]);//returns the integer value of a string
//for example "123" ->123

int myatoi(char s[])
{
   int x=0;
   //int z=0;
   int startindex;
   int size=strlen(s);
   
   if(s[0]=='-')
   {
      // z=1;
       startindex=1;
        
        for(int i=startindex;i<size;i++)
            x=x*10 +s[i]-'0';
            
        return -1*x;
   }
   
   for(int i=startindex;i<size;i++)
       x+=(s[size-1-i]-'0')*pow(10,i);
       
   return x;  
}

int main()
{
    char x[100]="-123";
    cout<<myatoi(x)<<endl;
    char f[100]="478";
    cout<<myatoi(f)<<endl;
    
    return 0;
}

e. float atof(const char str[]);//returns the float value of a string
//for example "12.3" ->12.3
float myatof(char s[])
{
    //find index of deciaml point 
    int DOTINDEX=-1;
    float INTEGERpart=0;
    float FRACTIONpart=0;
    
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            DOTINDEX=i;
            break;
        }
    }
    
    if(DOTINDEX==-1)
    return atoi(s);
    
    //integer part of float 
    for(int j=0;j<DOTINDEX;j++)
        INTEGERpart=INTEGERpart*10+(s[j]-'0');            //if int to string then add (char)(48)
        
    //fraction part of the float 
    for(int j=DOTINDEX+1;j<strlen(s);j++)
        FRACTIONpart+=(s[j]-'0')*pow(10,DOTINDEX-j);
        
    float result=INTEGERpart+FRACTIONpart;
    
    return result;
}
int main()
{
    char test1[100]="123.4789";
    float x=myatof(test1);
    cout<<x<<endl;
    char test2[100]="123.0000";
    cout<<myatof(test2)<<endl;
    
    return 0;
}


f.from int to char
  void MyIntToA(int x,char str[])
{
    int digits[10];
    int k=0;
    while(x!=0)
    {
        digits[k]=x%10;
        
        if(digits[k]<0)
        digits[k]=digits[k]*-1;
        
        x=x/10;
        k++;
    }
    for(int index=0;index<k;index++)
    {
        str[index]=(char)(digits[k-index-1])+'0';
            if(x<0)
            {
              char s2[100] ="-";
              strcat(s2,str);
        
             for(int indexnew=0;indexnew<strlen(s2);indexnew++)
                cout<<s2[indexnew];
            }
        
        else
        cout<<str[index];
    }
}
