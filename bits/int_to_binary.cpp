#include <iostream>
#include <string>
using namespace std;

int decTobinary(int n){

    int binary = 0;
    int place = 1;
    
    while(n > 0){
        int rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }

    return binary;

}



int main(){

    int i ;
    cin >> i;

    cout << decTobinary(i) << endl;

    return 0;
}