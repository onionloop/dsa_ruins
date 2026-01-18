#include <iostream>
using namespace std;


int add(int n){

    return n*(n+1) /2;
}

int main(){

    int n;
    cin >> n;

    int result = add(n);

    cout << result << endl;
}