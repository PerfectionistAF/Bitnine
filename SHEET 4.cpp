//A SMALL FACTORS
#include  <bits/stdc++.h>
//#include <iostream>
using namespace std;

int factorisenumber(int n)
{
	int i = 2;

	while (i < n)
	{
		if (n % i == 0 || n % (++i) == 0)
		{
			n = n / i;
		}
	}
	return n;
}

int main()
{
	int d = 100;

	int h = factorisenumber(d);
	int y;
	while ((h != 2 )|| (h != 3))
	{
		y=d++;
		h = factorisenumber(y);
	}

	cout << y << endl;
	return 0;

}

//B BOOKS
#include  <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
	//enter array size n
	//enter number of minutes t

	long long n;
	long long t;
	cin >> n >> t;
	
	//enter array of times needed for each book
	int books[10000];

	for (int i = 0; i < n; i++)
	{
		cin >> books[i];
	}

	int count = 0;
	//Check if n is already found in array
	//for (int i = 0; i < n; i++)
	//{
		//if (books[i] == t)
			//count = 1;
	//}
	//Find sum of times that equal n
	int sum = 0;
	int j = 0;

	while (books[j] >0)
	{
		if (books[j] < t)
		{
			sum += books[j];
			if(sum<=t)
			count++;
		}
		j++;
	}

	cout << count << endl;
	return 0;
}
//C WORMS
#include  <bits/stdc++.h>
using namespace std;

int main()
{
	//enter n piles
	int n;
	cin >> n;
	//array of worms in each pile
	int a[10^5] = { 0 };
	//enter number of worms in each pile
	int i = 0;
	while (i < n)
	{
		cin >> a[i];
		i++;
	}
	//enter m
	int m;
	cin >> m;
	int required[10^5];
	int k = 0;
	while (k < m)
	{
		cin >> required[k];
		k++;
	}
	int j = 1;
	int total = 0;
	//start from j then end at total in each i 
	for (int i = 0; i < n; i++)
	{
		total += a[i];
		for (j; j <= total; j++)
		{
			for (k; k < m; k++)
			{
				if (j == required[k])
					cout << i + 1 << endl;
			}
		}
	}
	return 0;
}

//D PRIME MATRIX
#include  <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return 0;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int matrix1[500][500];
    //enter data in matrix

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    int countrows[500] = { 0 };
    int countcols[500] = { 0 };
    //check if prime if not +1

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            while (isPrime(matrix1[i][j]) == 0)
            {
                matrix1[i][j]++;
                countrows[i]++;
            }
        }
    }
    sort(countrows, countrows + x);

    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < y; i++)
        {
            while (isPrime(matrix1[j][i]) == 0)
            {
                matrix1[j][i]++;
                countcols[j]++;
            }

        }
    }
    sort(countcols, countcols + y);

    if (countrows[0] > countcols[0])
        cout << countcols[0];

    else
        cout << countrows[0];

    return 0;
}

//E 
//F
//G Sagheer and Nubian Market 
//H Magic Powder 1
#include  <bits/stdc++.h>
using namespace std;

int main()
{
	//enter number of grams of ingredients and magic powder
	int n;
	int k;

	cin >> n >> k;
	//recipe for cookies
	int recipe[1000] = { 0 };
	//grams needed
	int needed[1000] = { 0 };

	//enter data for both 
	for (int i = 0; i < n; i++)
	{
		cin >> recipe[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> needed[i];
	}
	//divide each index by the other to find number of cookies each can make 
	int cookies[1000];
	for (int i = 0; i < n; i++)
	{
		cookies[i] = needed[i] / recipe[i];
	}
	//sort number of cookies for all 
	sort(cookies, cookies + n);
	//when you add one to each element subtract 1 from k
	//when two or more elements are equal output that number 
	int j = 0;

	while (k >= 0)
	{
		cookies[j]++;
		k--;
		j++;
	}
	bool check = 0;
	for (int j = 0; j < n; j++)
	{
		for (int k = j + 1; k < n; k++)
		{
			if (cookies[j] == cookies[k])
			{
				cout << cookies[j];
				break;
			}
		}
	}

	return 0;
}

//I pair of topics
//J PRIME WORDS
#include  <bits/stdc++.h>
using namespace std;

int PRIME(int n)
{
	int divisor = 2;
	int count = 0;
	while (divisor < n)
	{
		if ((n % divisor) == 0)
			count++;
		divisor++;
	}

	if (count >= 1)
		return 0; //composite
	else
		return 1;//prime
}

int main()
{
	char word[20];
	cin.getline(word, 20);
	char alphabet[60]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int sum = 0;
	for (int i = 0; i < strlen(word); i++)
	{
		for (int j = 0; j < strlen(alphabet); j++)
		{
			if (word[i]==alphabet[j])
			{
				sum += (j+1);
			}
		}
	}

	if ((PRIME(sum)) == 1)
		cout << "It is a prime word"<<endl;
	else
		cout << "It is not a prime word" << endl;

		return 0;
}
//P PRIMES ON INTERVAL 
#include  <bits/stdc++.h>
using namespace std;

int PRIME(int n)
{
	int divisor = 2;
	int count = 0;
	while (divisor < n)
	{
		if ((n % divisor) == 0)
			count++;
		divisor++;
	}

	if (count >= 1)
		return 0; //composite
	else
		return 1;//prime
}

int main()
{
	int a;
	int b;
	int k;
	cin >> a >> b >> k;
	int l = (b - a) + 1;
	int x = a;
	int countofprime = 0;

	while (x <= (a + l) - 1)
	{
		//if x is prime and the countofprime>=k then either
		//countofprime ==k so output l
		//countofprime >k so output k+l
		//countofprime<k output -1
		if (PRIME(x) == 1)
		{
			countofprime++;

			if (countofprime == k)
				cout << l << endl;

			else if (countofprime > k)
				cout << k + l << endl;
		}
		x++;
	}
		return -1;
}
//Q EASY NUMBER CHALLENGE
//S DISTINCT PRIMES
#include  <bits/stdc++.h>
using namespace std;

int PRIME(int n)
{
	int divisor = 2;
	int count = 0;
	while (divisor < n)
	{
		if ((n % divisor) == 0)
			count++;
		divisor++;
	}

	if (count >= 1)
		return 0; //composite
	else
		return 1;//prime
}

int main()
{
	int T;//number of test cases
	int n; //index of number required
	cin >>T>> n;
	int factors[10] = { 0 };
	while (T != 0)
	{
		int i = 0;
		//check if n is composite
		if (PRIME(n) == 0)
		{
			//factorise
			int k = 2;
			for (k; k < n; ++k)
			{
				if (n % k == 0)
				{
					factors[i] = k;
				}
				i++;
				for (int index = 0; index < i; index++)
				{
					for (int j = index + 1; j <= i; j++)
					{
						if (factors[index] != factors[j])
							return n;
					}
				}
			}
			T--;
		}
		else
			n++;
	}

	return 0;
}
