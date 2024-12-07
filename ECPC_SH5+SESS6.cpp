//MOD MULTIPLICATION
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b;
const int mod=1e9+7;

int main()
{
    cin>>a>>b;
    
    cout<<((a%mod)*(b%mod))*mod<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod=7+1e9;

ll power (int base , int exp)
{
    if(exp==0) return 1;
    
    ll res=(base%mod*power(base,exp-1))%mod;
    return res;
}

int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
//A
/*
#include<bits/stdc++.h>
using namespace std;

int calc(map<int, int>& mp, int mx)
{
    int i, j;
    for (i = mx; i; i--) {
        int count = 0;
        for (j = i; j <= mx; j += i) {
            count += mp[j];
            if (count > 1) {
                return i;
            }
        }
    }
    return -1;
}

void solve()
{
	int n, a, i, mx = 0;
    cin >> n;
    map<int, int> mp;
    for (i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
        mx = max(mx, a);
    }
    cout << calc(mp, mx) << '\n';
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}
*/

//C
/*
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//enter two numbers such that difference between them is odd (YES, if not NO solution)
//test from r to l (first loop) of numbers,not repeated again once found(freqarray) into l-r+1/2 pairs such that gcd between them(second loop) is one
/*
input :
1   8 
output:
YES
2 7
4 1
3 8
6 5
*/
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
    int r,l;
    cin>>r>>l;
 
    if(((l-r+1)/2)%2 ==0)
    {
        cout<<"YES"<<endl;
        //traverse through loop
        //freqarray of gcd 1's if min then output 
        /////////////////////int freq[(l-r+1)/2]={0};
        for(int i=r;i<=l;i++)
        {
            for(int j=r+1;j<=l;j++)
            {
                if(GCD(i,j)==1)
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
    }
 
    else
    cout<<"NO"<<endl;
 
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

//{
#define cel(n,k) ((n-1)/k+1)
#define sets(a) memset(a, -1, sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define max(a,b) ((a)>(b)? (a):(b))
#define min(a,b) ((a)<(b)? (a):(b))
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define INF 10000007

typedef long l;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
//}

ll ls, r;

main(){
    cin>>ls>>r;

    cout<<"YES"<<endl;

    while(ls<r){
        cout<<ls<<" "<<ls+1<<endl;
        ls+=2;
    }
}
//D
#include<bits/stdc++.h>
using namespace std;
int primefactor(int n)
{
    int i,c=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            c++;
        }
    }
    if(n!=1)
        c++;
        
    return c;
}
int main()
{
    int a,c,i,n,r=0,t=0;
    cin>>a;
    for(i=2; i<=a; i++)
    {
        r=primefactor(i);
        if(r==2)
            t++;
    }
    cout<<t<<endl;
}

//E
#include<bits/stdc++.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
 
int pairs(int a) {
	return (a-1)*a / 2;
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin >> n;
	string s[100];
	int freq[26] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		int index = s[i][0] - 'a';
		freq[index]++;	
	}
	sort(freq, freq + 26, greater<int>());
	int k;
	int x = 0;
	for (int i = 0; i < 26; i++) {
		if(freq[i] == 1 || freq[i] == 0) break;
		if (freq[i] % 2 == 0) k = pairs(freq[i] / 2) * 2;
		else k = pairs(freq[i] - (freq[i] / 2)) + pairs(freq[i] / 2);
		x += k;
	}
	cout << x;
}
//F
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//enter the tested PRIME NUMBER and initialise counter  
//then while loop such that TESTED NUMBER !=0
//if (TESTEDNUMBER ^PRIMENUMBER -1 )-1 % PRIMENUMBER ==0 then counter++
//cout counter 
int main()
{
    int p;
    cin>>p;
    int x=1;
    int counter=0;
    int power2=0;
    while(x>=1 && x<p)
    {
        int power=pow(x,p-1);
 
        if((power-1)%p==0)
        {
            for(int i=1;i<p-1;i++)
            {
            power2=pow(x,i);
            if((power2-1 )%p!=0)
            counter++;
            }
        x++;
        }
    }
 
    cout<<counter<<endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//enter the tested PRIME NUMBER and initialise counter  
//then while loop such that TESTED NUMBER !=0
//if (TESTEDNUMBER ^PRIMENUMBER -1 )-1 % PRIMENUMBER ==0 then counter++
//cout counter 
int main()
{
    ll p;
    cin>>p;
    ll x=1;
    ll counter=0;
    ll power2=0;
    while(x>=1 && x<p)
    {
        ll power=pow(x,p-1);
 
        if((power-1)%p==0)
        {
            for(int i=1;i<p-1;i++)
            {
            power2=pow(x,i);
            if((power2-1 )%p!=0)
            counter++;
            }
        x++;
        }
    }
 
    cout<<counter<<endl;
    return 0;
}

int main()
{
    ll p;
    cin>>p;
    ll n = p - 1;
    ll count = n;
    for (ll x = 2; x * x <= n; ++x)
    {
        if (n % x == 0)
        {
            do
            {
                n /= x;
            } while (n % x == 0);
            count = count / x * (x - 1);
        }
    }
    if (n != 1)
    {
        count = count / n * (n - 1);
    }
    cout<<count<<endl;
    return 0;
}
//G
#include <vector>

#include <list>

#include <map>

#include <set>

#include <deque>

#include <queue>

#include <stack>

#include <bitset>

#include <algorithm>

#include <functional>

#include <numeric>

#include <utility>

#include <sstream>

#include <iostream>

#include <iomanip>

#include <cstdio>

#include <cmath>

#include <cstdlib>

#include <cctype>

#include <string>

#include <cstring>

#include <cstdio>

#include <cmath>

#include <cstdlib>

#include <ctime>

using namespace std;



typedef unsigned int uint;

typedef long long int64;

typedef unsigned long long uint64;



#define FOI(i, A, B) for(i=A; i<=B; i++)

#define FOD(i, A, B) for(i=A; i>=B; i--)

#define REP(i, N) for(i=1; i<=N; i++)



int64 G[3]; 

void Ext_gcd(int64 a,int64 b) { 

    if(b == 0){ 

        G[0] = a; G[1] = 1; G[2] = 0;

        return; 

    } 

    Ext_gcd(b,a%b); 

    int64 x = G[1]; 

    G[0] = G[0]; G[1] = G[2]; G[2] = (x - ((a/b)*G[2])); 

}



int main(){

    int64 A, B;

    while(cin>>A>>B){

                     Ext_gcd(A, B);

                     cout<<G[1]<<" "<<G[2]<<" "<<G[0]<<endl;

    }

    return 0;

}
//I
#include <bitsc++/std.h>
using namespace std;
typedef long long ll;
//GCD using EUCLIEAD METHOD: GCD OF 6 AND 4 IS EQUAL TO GCD OF 6 AND 6-4 WHILE GCD OF 6 and 1 =1 AND GCD OF 6 AND 0= 6 

ll GCD(ll a, ll b)
{
	if (b == 1)
		return 1;
	else if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

//input no of test cases
//the first line of input G and L
//the GCD of both numbers should be G and the LCM should be L 
//else -1
int main()
{
    ll T;
    cin>>T;
    ll G;
    ll L;
    cin>>G;
    cin>>L;
    while(T>0 && T<=100)
    {
        if((GCD(G,L) ==G )&& ((G*L)/GCD(G, L)))
        cout<<GCD(G,L)<<" "<<(G*L)/GCD(G, L)<<endl;
        
        else
        cout<<"-1"<<endl;
        T--;
        cin>>G;
        cin>>L;
    }
   //cout<<"LCM of "<< a <<" and "<< b <<" is "<< (a*b)/gcd(a, b);
   return 0;
}
//L
#include <bits/stdc++.h>
using namespace std;
//GCD using EUCLIEAD METHOD: GCD OF 6 AND 4 IS EQUAL TO GCD OF 6 AND 6-4 WHILE GCD OF 6 and 1 =1 AND GCD OF 6 AND 0= 6 
typedef long long ll;
int GCD(int a, int b)
{
	if (b == 1)
		return 1;
	else if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

//input no of test cases
//the first line of input G and L
//the GCD of both numbers should be G and the LCM should be L 
//else -1
int main()
{
    ll N;
    cin>>N;
    //enter elements of array
    ll Array[1000000];
    for(int i=0;i<N;i++)
    {
        cin>>Array[i];
    }
    //counter for pairwise coprime
    ll counter=0;
    ll r=Array[0];
    //pairwise
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(GCD(Array[i],Array[j]) ==1)
            counter++;
        }
    }
    //setwise
        for(int i=0;i<N;i++)
        {
            r=GCD(r,Array[i]);
        }

    if(counter==(N*((N-1)/2)))
    cout<<"pairwise coprime"<<endl;
    
    else if(r==1)
    cout<<"setwise coprime"<<endl;   
        
    else
    cout<<"neither"<<endl;
        
     //BUILT IN GCD FUNCTION: cout<<__gcd(10, 15)-__gcd(6,15) ;
   return 0;
}
//O
#include <bits/stdc++.h>
using namespace std;
//GCD using EUCLIEAD METHOD: GCD OF 6 AND 4 IS EQUAL TO GCD OF 6 AND 6-4 WHILE GCD OF 6 and 1 =1 AND GCD OF 6 AND 0= 6 
typedef long long ll;
//input no of test cases t
//then input each number n
//if gcd(n, sum of digits of n)>1 then output n else n++ then repeat 
int main()
{
	ll t;
	ll n;
	ll digits=0;
	ll sum=0;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		for(ll i=n;;i++) 
		{
			digits=i;
			sum=0;
			while(digits)
			{
			    sum+=digits%10;
			    digits/=10;
			}
			
			if(__gcd(i,sum)>1) 
			{
			    cout<<i<<'\n';
			    break;
			}
		}
	}
     //BUILT IN GCD FUNCTION: cout<<__gcd(10, 15)-__gcd(6,15) ;
   return 0;
}
//P
