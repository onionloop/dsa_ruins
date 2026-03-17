#include <iostream>
using namespace std;

int largestPrimeF(int n){

    int largest = 0;

    for(int i =0 ; i*i <= n ; i++){
        
        while(n % i == 0){
            
            largest = i;
            n /= i;
        }

        if (n > 1) largest = n;
    }

    return largest;
}

int main(){

    int n;
    cin >> n;

    cout << largestPrimeF(n) << endl;

    return 0;
}