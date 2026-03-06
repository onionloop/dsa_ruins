
#include <iostream>
using namespace std;


// ======================== GCD = GREATEST COMMON DIVISION ================================

int gcd(int a, int b){

    while(b != 0){
        int r = a % b;
        a = b;
        b = r;

    }

    return a;
}

int lcm(int x , int y){

    return (x*y)/gcd(x,y);
}

/*

============================= WITHOUT GCD =============================

int lcm(int a, int b){

    int l = max(a , b);
    int s = min(a, b);

    for(int i = l; i <= a * b; l++){
        if(i % s == 0) return i;
    }

}

*/

int main(){
    
    int a , b;

    cin >> a >> b;

    cout << lcm(a , b) << endl;

    return 0;
}
