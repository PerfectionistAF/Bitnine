#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int steps=0;

	//if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5)
		//steps = 1;

	//else 
	//{
	//subtract 5 until x is less than 5
	while (x >= 5)
	{
		x -= 5;
		steps++;
	}
	while (x >= 4)
	{
		x -= 4;
		steps++;
	}

	while (x >= 3)
	{
		x -= 3;
		steps++;
	}

	while (x >= 2)
	{
		x -= 2;
		steps++;
	}

	while (x >= 1)
	{
		x -= 1;
		steps++;
	}
	//subtract 4 until x <4

	//}
	cout << steps << endl;
	return 0;
}

#include <iostream>
using namespace std;

#include  <bits/stdc++.h>

int main()
{
	int n;
	string str;
	cin >> n;
	cin >> str;
	int removed = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (str[i] == str[i + 1])
		{
			removed++;
		}
	}
	cout << removed<<endl;

	return 0;
}
#include <iostream>
using namespace std;

int main() 
{
	int N;
	int Q;
	int N_arr[100000];
	int Q_arr[100000];
	cin >> N;

	for (int i = 0; i < N; i++) 
	{
		cin >> N_arr[i];
	}
	cin >> Q;
	
	int i[10000];
	int j[10000];
	for (int x = 0; x < Q; x++) 
	{
		cin >> i[x] >> j[x];
	}

	int out_arr[100000];
	for (int k = 0; k < Q; k++) 
	{
		out_arr[k] = 0;
		
		for (int a = i[k]; a <= j[k]; a++) 
		{
			out_arr[k] += N_arr[a];
		}
		cout << out_arr[k] << endl;
	}

	return 0;
}
#include <iostream>
#include <cstring>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;
	cin>>b;
	//square from a to b
	int newnum = 0;
	for (int i = 0; i < b; i++)
	{
		int rangesum = a + i;
		if (rangesum > b)
			break;
		else
		newnum += pow(rangesum, 2);
	}
	cout << newnum << endl;
	return 0;
}
#include <iostream>
#include <cstring>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	//first two array sizes then fill arrays
	int S;
	
	cin >> S;
	int array1[100] = { 0 };
	for (int index = 0; index < S; index++)
	{
		cin >> array1[index];
	}

	int Q;
	cin >> Q;
	int array2[100] = { 0 };
	for (int jindex = 0; jindex < Q; jindex++)
	{
		cin >> array2[jindex];
	}

	//compare two arrays
	for (int i = 0; i < S; i++)
	{
		int found = 0;
		for (int j = 0; j < Q; j++)
		{
			if (array1[i] == array2[j])
			{
				found = 1;
			}
		}
		if (found == 0)
			cout << array1[i]<<" ";
	}
	return 0;
}

#include <iostream>
#include <cstring>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	//enter no of questions or rows
	int n;
	cin >> n;
	const int cols = 3;
	int solution[1000][cols];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> solution[i][j];
		}
	}

	int count = 0;
	for (int index = 0; index < n; index++)
	{
		int sum = 0;//with every row sum of cols is reset
		for (int jindex = 0; jindex < cols; jindex++)
		{
			sum+= solution[index][jindex]; 
		}
		if (sum >= 2)
			count++;
	}
	cout << count << endl;
	return 0;
}
