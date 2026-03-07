#include <iostream>
using namespace std;


int missinN(vector <int> &v){
    int xor1 = 0;

    for(int i =0 ; i < v.size() - 1 ; i++){
        xor1 ^= v[i];
        xor1 ^= (i+1);
    }

    return xor1;
}

int main(){

    int n; cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    cout << missinN(v) << endl;

    return 0;
}