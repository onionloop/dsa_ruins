#include <iostream>
using namespace std;

bool palindrome(string s,  int i){

    int n = s.length();
    if(i >= n/2) return true;

    if(s[i] != s[n - i -1]) return false;

    return palindrome(s, i+1);



}

    


int main(){

    string s;
    cin >> s;

    cout << palindrome(s , 0);

    
}