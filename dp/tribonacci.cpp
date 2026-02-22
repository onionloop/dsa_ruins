#include <iostream>
#include <vector>
using namespace std;

int tribo(int n){

    if(n <= 2) return n == 0 ? 0: 1;

    int a = 0;
    int b = 1;
    int c = 1;

    for(int i =0 ; i < n ;i++){
        int next = a + b + c;
        a = b;
        b = c;
        c = next;
    }
    
    return c;
}


int main(){

    int n;
    cin >> n;

    cout << tribo(n) << endl;

    return 0;
}