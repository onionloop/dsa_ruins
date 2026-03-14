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

    string ans = "";
    for (int j = i - 1; j >= 0 ; j--){
        ans += to_lower(binary[j]);
    }

    return ans;

}

int main(){

    int i ;
    cin >> i;

    cout << decToBinary(i) << endl;

    return 0;
}