#include <iostream>

using namespace std;

int factorial(int n , int factorial){

    for(int i = 1 ; i <= n ; i++ ){
        factorial *= i;
    }

    return factorial;
}


int main(){


    int n;
    cin >> n;

    cout << factorial(n , 1) << endl;

    return 0;
}