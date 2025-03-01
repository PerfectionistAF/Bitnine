#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

//string ltrim(const string &);
//string rtrim(const string &);

int isPalindrome(const string & s){
    int start = 0;
    int end = s.size()-1;
    
    while (start < end) {
        
        if (s[start] != s[end]){
            cout<<"NO"<<" ";
            return false;
        }
        
        start++;
        end--;
    }
    cout<< "YES"<<" ";
    return true;    
}

int main()
{
    string s = "HelloWorld";
    int n = s.size();
    
    //cout<<"SIZE = "<<n<<endl;
    
    //check if mismatched string from both halves
    for (int i = 0; i < n/2; ++i){
        
        char left_letter = s[i];
        char right_letter = s[n-i-1];
        
        if(left_letter != right_letter){
            
            string left_index = s.substr(0, i) + s.substr(i + 1, n);
            string right_index = s.substr(0, n-i-1) + s.substr(n-i, n);
            
            cout<< "Comparing the two removed letters: " << s[i] << " and " << s[n-i-1] <<endl;
            cout<< "To check the left side index: "<< left_index <<endl;
            cout<< "To check the right side index: "<< right_index <<endl;
            cout<<endl;
            
            cout<<"Check if the left side is a palindrome: "<<isPalindrome(left_index)<<endl;
            cout<<"Check if the right side is a palindrome: "<<isPalindrome(right_index)<<endl;
            cout<<endl;
            
            if(isPalindrome(left_index)) return i;
            
            if(isPalindrome(right_index)) return n-i-1;
            
            return -1;  //cannot be a plaindrome   /////PLACED IN THIS LINE TO DECREASE RUNNING TIME, RUN FOR HALF THE TEST CASES
        }
        
        
    }
    
    return 0;//if no mismatched ends, already a palindrome
}



#include <bits/stdc++.h>
#include <string>
using namespace std;
/*
* Complete the 'palindromeIndex' function below.
*
* The function is expected to return an INTEGER.
* The function accepts STRING s as parameter.
*/

int palindromeIndex(string s) {
    int n = s.size();
    // Helper function to check if a string is a palindrome
    auto isPalindrome = [](const string & str) {
    int start = 0, end = str.size() - 1;
    while (start < end) {
        if (str[start] != str[end]) return false;
        start++;
        end--;
    }
        return true;
    };
    // Check for mismatches from both ends
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
    // Check if removing s[i] or s[n-i-1] makes it a palindrome
            string withoutLeft = s.substr(0, i) + s.substr(i + 1);
            string withoutRight = s.substr(0, n - i - 1) + s.substr(n - i);
            if (isPalindrome(withoutLeft)) return i;
            if (isPalindrome(withoutRight)) return n - i - 1;
    // If neither works, it's not possible to make it a palindrome
            return -1;
        }
    }
    // If no mismatches, the string is already a palindrome
        return -1;
    }
 /*int index = 0;
 string str_1 = "";
 string str_2 = "";
 for(int i = 0; i<s.size(); i++){
 str_1 = s.erase(s[index]);
 str_2 = string(str_1);
 string reversed_str_2 = str_2;
 reverse(reversed_str_2.begin(), reversed_str_2.end());
 if(str_1 == reversed_str_2){
 return index; 
 }
 else{
 index++;
 }
 }
return -1;}*/