//CSE 131 :SHEET 7 
#include <iostream>
using namespace std;

//FACTORIAL=(5)(5-1)(5-2)(5-3)(5-4)(5-5) //stopping condition is factorial of 1 and 0 =1 //rest is factorial(5-1)
double FACT(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n* FACT(n - 1);
}
int main()
{
	int y ;
	cin >> y;
	cout << "===========================================================================================" << endl;
	
		int u = FACT(6); 
		cout << u << endl;
		cout << "==========================================================================================" << endl;
		return 0;

}

#include <iostream>
using namespace std;

//GCD using EUCLIEAD METHOD: GCD OF 6 AND 4 IS EQUAL TO GCD OF 6 AND 6-4 WHILE GCD OF 6 and 1 =1 AND GCD OF 6 AND 0= 6 

int GCD(int a, int b)
{
	if (b == 1)
		return 1;
	else if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}
int main()
{
	cout<<GCD(252, 105)<<endl;
	return 0;

}

#include <iostream>
using namespace std;

//GCD using EUCLIEAD METHOD: GCD OF 6 AND 4 IS EQUAL TO GCD OF 6 AND 6-4 WHILE GCD OF 6 and 1 =1 AND GCD OF 6 AND 0= 6 

int GCD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
int main()
{
	cout<<GCD(252, 105)<<endl;
	return 0;

}

#include <iostream>
#include <cstring>
using namespace std;

//print sentence in reverse order 
void SWAP(char s[], int size)
{
	for (int i = size-1; i >= 0; i--)
	{
		cout << s[i];
	}
}
int main()
{
	char s[9] = "I am Moh";
	
	
	SWAP(s, 9);

	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
//print sentence in reverse order 
void PrintRev(char x[])
{
 	if (strlen(x)>1)
	PrintRev(&x[1]);
  cout<<x[0];
}
void SWAP(char s[], int start, int end,int size)
{
	if (start == end)
		return;
	char temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	SWAP(s, start + 1, end - 1, size);        
}
int main()
{
	char s[9] = "I am Moh";
	
	
	SWAP(s, 0,8,9);
	for (int i = 0; i < 9; i++)
	{
		cout << s[i];
	}
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

//sequential search
bool SEQSEARCH(int a[], int start,int end, int target)
{
	if (start == end)
		return false;
	else if (a[start] == target)
		return true;
	else
		SEQSEARCH(a, start + 1,end, target);
}

int main()
{
	int array[6] = { 1,2,3,4,5,6 };
	cout<<SEQSEARCH(array, 0, 5, 1)<<endl;
	return 0;
}



//NO OF VOWELS in a string
bool isVowel(char s)
{
	//s = toupper(s);
	return(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U'
	|| s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');

}
int  VOWELCOUNT(char x[], int size)
{
	if (size == 1)
		return isVowel(x[size - 1]);
	else
		return isVowel(x[size - 1]) + VOWELCOUNT(x, size - 1);
}
int main()
{
	char m[100] = "This is    me ";
	cout << strlen(m) << endl;

	cout << VOWELCOUNT(m, strlen(m))<<endl;

	return 0;
}


//FIBONACCI 

int FIB(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return FIB(n - 1) + FIB(n - 2);
}

int main()
{
	int y = 7;
	cout << FIB(y) << endl;
}

#include <iostream>
#include <cstring>
using namespace std;

//POWER(x,y)

int POWER(int x, int y)
{
	//if y==0 return 1
	//if y==1 retrun x
	//else retrun x*power(x,y-1)

	if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return x * POWER(x, y - 1);
}
int main()
{
	cout << POWER(2, 3);
	return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

//check whether is prime

bool CheckPrime(int n, int i)
{
	if (n <= i)
		return (n == i);

	else if (n % i == 0)
		return 0;

	else
		return CheckPrime(n, i + 1);
}

int main()
{
	int y = 15;
	
	if (CheckPrime(y, 2) == 1)
		cout << "PRIME" << endl;

	else
		cout << "NOT PRIME" << endl;

	return 0;
}

