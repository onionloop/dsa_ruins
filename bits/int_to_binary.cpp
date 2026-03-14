#include <iostream>
using namespace std;

string decTobinary(int n){

    int binary[32];

    int i = 0;

    int ans = 0;
    while (n > 0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }


    for (int j = i - 1; j >= 0 ; j--){
        
    }
}