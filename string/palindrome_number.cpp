#include <iostream>
#include <string>

using namespace std;

bool palN(int n){

    string s = to_string(n);

    string newStr = s;

    reverse(newStr.begin(), newStr.end());

    return newStr == s;
}

int main(){

    int s;

    cin >> s;

    cout << palN(s) << endl;

    return 0;
}