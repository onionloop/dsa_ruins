#include <iostream>
using namespace std;

bool armstrong(int n){

    string s = to_string(n);

    int numbers = s.length();

    int output = 0;

    for(char c : s){

        int ans = c - '0';

        output += pow(ans , numbers);
    }

    return n == output;
}

int main(){

    int n;
    cin >> n;

    cout << armstrong(n) << "\n";

    return 0;
}