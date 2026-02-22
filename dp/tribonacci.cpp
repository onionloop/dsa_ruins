#include <iostream>
#include <vector>
using namespace std;

int tribo(int n){

    if(n <= 2) return n == 0 ? 0: 1;

    int a = 0;
    int b = 1;
    int c = 1;

}


int main(){

    int n;
    cin >> n;

    cout << tribo(n) << endl;

    return 0;
}