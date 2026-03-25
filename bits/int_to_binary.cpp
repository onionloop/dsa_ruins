#include <iostream>
#include <string>
using namespace std;

int decToBinary(int n){

    int ans = 1;
    int carry = 1;
    while(n > 0){
        int rem = n % 2;
        ans += rem * carry;
        n /= 10;
    }

    return ans;
}




int main(){


    cout << decToBinary(12) << '\n';

}