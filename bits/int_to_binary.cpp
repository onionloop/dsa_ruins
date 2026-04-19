#include <iostream>
#include <string>
using namespace std;


int decToBinary(int n){


    
    int rem = 1;
    int ans = 0;
    while(n > 0){
        int last = n % 2;
        ans = ans + last*rem;
        n /= 2;
        rem *= 10;
    }

    return ans;


}

int main(){


    cout << decToBinary(12) << '\n';

}