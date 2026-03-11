#include <iostream>
using namespace std;


int missinN(vector <int> &v, int n){
    int xor1 = 0;

    for(int i =0 ; i < n-1 ; i++){
        xor1 ^= v[i];
        xor1 ^= (i+1);
    }

    xor1 ^= n;

    return xor1;
}

int main(){

    int n; cin >> n;

    
    vector <int> v(n);

    for(int i = 0 ; i < n-1 ; i++){
        cin >> v[i];
    }

    cout << missinN(v, n) << endl;

    return 0;
}   