#include <iostream>
using namespace std;

// ======================== GCD = GREATEST COMMON DIVISION ================================


int gcd(int a, int b){

    while(b != 0){
        int r = a % b;
        a = b;
        b = r;

    }

    return b;
}

int main(){
    
    int a , b;

    cin >> a >> b;

    cout << gcd(a , b) << endl;

    return 0;
}






