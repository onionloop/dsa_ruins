#include <iostream>
#include <string>
using namespace std;

string decTobinary(int n){

    int binary[32];

    int i = 0;

    int ans = 0;
    while (n > 0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    string s = "";
    for (int j = i - 1; j >= 0 ; j--){
        s += to_string(binary[j]);
    }

    return s;

}

int main(){

    int i ;
    cin >> i;

    cout << decTobinary(i) << endl;

    return 0;
}