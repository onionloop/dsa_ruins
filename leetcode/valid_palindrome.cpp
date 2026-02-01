#include <iostream>

using namespace std;


bool palindrome(string s){

    string newStr = "";

    for(char c : s){
        if(isalnum(c)){
            newStr += tolower(c);
        }
    }


    return newStr == string(newStr.rbegin() ,  newStr.rend());
}


int main(){

    string s;
    getline(cin , s);


    if(palindrome(s)) cout << "Palindrome";

    else cout << "Not Palindrome";
}