#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    //take each int(s[i]) + k
    //cout<<char(64)<<endl;
    //cout<<int('A')<<endl;  //if <65 keep as is
    //cout<<int('Z')<<endl;  //if >=65 && <90, encrypt
    //cout<<int('a')<<endl;  //if >90 && <97, keep as is 
    //cout<<int('z')<<endl;  //if greater than 122, get 65 + k - 1
    /*string ciphered = "";
    for(int i = 0; i<s.length(); i++){
        if(int(s[i]) < 65 || ((int(s[i]) > 90) && (int(s[i]) < 97))){
            ciphered[i] = s[i];   
        }
        
        ciphered[i] = int(s[i]) + k;
        
        if(ciphered[i] > 122){
            ciphered[i] = 65 + k - 1;
        }
        
        ciphered[i] = char(ciphered[i]);
    }
    return ciphered;*/
    string ciphered = "";
    k = k % 26; // To handle large shifts, reduce `k` to within 0-25.

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'Z') { // Uppercase letters
            ciphered += char((c - 'A' + k) % 26 + 'A');
        } 
        else if (c >= 'a' && c <= 'z') { // Lowercase letters
            ciphered += char((c - 'a' + k) % 26 + 'a');
        } 
        else { // Non-alphabetic characters
            ciphered += c;   //concat
        }
    }
    return ciphered;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
