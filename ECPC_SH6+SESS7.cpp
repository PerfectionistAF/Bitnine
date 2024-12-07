#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod=7+1e9;

int main()
{
    string s;
    
    //cin>>s; (enter data) stops working when space enterred '\0' , getline(cin,s) to stop this problem(stops when enter is pressed)
    string test;
    getline(cin,test);
    
    s="acm"; //(initialise string)
    s+="foe"; //add to string
    
    s.push_back('$'); //add a char
    
    cout<<s<<endl;
    //to sort A.Z
    sort(s.begin(),s.end());
    //to sort Z.A
    sort (s.rbegin(),s.rend());
    for(int i=0;i<s.size();i++)
    cout<<s[i];
    
    cout<<endl;
    //to print longest string possible 
    cout<<s.max_size()<<endl;
    
    
    string b="abcdefghijklmnopqrstuvwxyz";
    b.resize(2);
    cout<<b<<endl;     //to print the first specific number of elements 
    
    cout<<b.size()<<endl; //finds size of string
    b.clear(); //clears string 
    cout<<b.size()<<endl;
    
    string a;
    a.assign("get ready"); //assigns in a string 
    cout<<a<<endl;
    a.pop_back();//elimiate last char
    cout<<a<<endl;
    
    
    int pos=a.find('k');//to find a character 
    if(pos==a.npos) cout<<"not found"<<endl;  //if not found pointer is at npos
    else cout<<"found"<<endl;
    
    
    swap(a[0],a[a.size()-1]); //swaps specific elements
    cout<<a<<endl;
    
    string temp=a.substr(2,4); //needs temp //to assign from indexx number 2 to index 4
    cout<<temp<<endl;
}
    


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod=7+1e9;

int main()
{
    int n=3;
    vector <int> arr; //int arr[]
    //no for loops of i allowed ie if no n declared/ enterred since they require size
    //to enter data
    //either pushback if there is no size or for loop with size
    //for(int i=0;i<n;i++)  cin>>arr[i];
    
    vector<int>arr2[2];
    //for(int i=0;i<n;i++) cin>>arr[i];
    //to better enter data
    while(n--)
    {
        int x;
        cin>>x;
        arr.push_back(x);
        //arr2.push_back(x);
    }
    
    //to add size (2) zeros
    //for(int i=0;i<arr2.size();i++) cout<<arr2[i]<<" ";
    
    //to ouput data 
    for(int i=0;i<arr.size();i++) cout<<arr[i];
    cout<<endl;
    //sort a to z
    sort(arr.begin(),arr.end());//,greater<int>());
     for(int i=0;i<arr.size();i++) cout<<arr[i];
     cout<<endl;
    //sort z to a
    sort(arr.rbegin(),arr.rend());
    
     for(int i=0;i<arr.size();i++) cout<<arr[i];
     cout<<endl;
     
     int q=3;
     vector<float>v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     
        // swap(v.push_back(1),v.size());
         
    for(int i=0;i<v.size();i++) cout<<v[i];
     
     cout<<v.size()<<endl;
     v.pop_back();
     cout<<v.size()<<endl;
     
     cout<<v.size()<<endl;
     v.resize(2);
     cout<<v.size()<<endl;
    
    //v.erase
    //v.front
    //v.back
    //v.clear 

    //v.emplace
     
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod=7+1e9;

int main()
{
  vector<pair<string,int>> vp;
  int n=3;
 
 //to enter data  
  while(n--)
  {
      string s;
      int x;
      cin>>s>>x;
      //vp.push_back(make_pair(s,x));
      vp.emplace_back(s,x);
  }
  //sort ascending
      sort(vp.begin(),vp.end());
      for(int i=0;i<vp.size();i++)
      cout<<vp[i].first<<" "<<vp[i].second<<endl;
      
  //sort descending
      //sort(vp.rbegin(),vp.rend());
}
    

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod=7+1e9;

int main()
{
   //stacks (last in first out) (on top)
   
   stack <int> st;
   
   //to input data 
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   
   //to out all data (no operators no begin or end no [])
   /*while(!st.empty())
   {
       //cout<<st.top()<<endl;
       //st.pop();
   }*/
   
   vector<int>v;
   //to sort
   while(!st.empty())
   {
       v.push_back(st.top());
       st.pop();
   }
   
   sort(v.begin(),v.end());
   
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<endl;
   
   /*to out last entered element 
   cout<<st.top()<<endl;
   st.pop();//remove last entered element
   //grab the second last
   cout<<st.top()<<endl;
   
   //st.empty ()
   //st.size()*/
}
    
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod=7+1e9;

int main()
{
  //queue first in first out (added from back but taken from front)
   queue<int> q;
   
   stack <int> st;
   
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   
   while(!q.empty())
   {
       cout<<q.front()<<" "<<q.back()<<endl;
       q.pop();
   }
   cout<<"*****************************************************************************************"<<endl;
   while(!st.empty())
   {
       cout<<st.top()<<endl;
       st.pop();
   }
   
}
    
