#include <iostream>
using namespace std;

int fibo(int n){

    if( n <= 2) return n == 0 ? 0 : 1;

    int first = 0;
    int second = 1;

    for(int i =2 ; i < n ; i++){
        int next = first + second;
        first = second;
        second = next;
    }

    return second;

}

int main(){
    int x;
    cin >> x;

    cout << fibo(x);

    return 0;
}
