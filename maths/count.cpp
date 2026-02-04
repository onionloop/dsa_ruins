#include <iostream>
using namespace std;

int count(int n){

    int freq = 0;

    while (n > 0){
        freq ++;
        n /= 10;
    }

    return freq;
}


int main(){

    int n; cin >> n;

    cout << count(n) << endl;
}