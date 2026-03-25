#include <iostream>
#include <string>
using namespace std;

string decToBinary(int n){

    string ans = "";
    while(n > 0){
        int rem = n % 2;
        ans = to_string(rem) + ans;
        n /= 2;
    }

    return ans;
}




int main(){


    cout << decToBinary(12) << '\n';

}