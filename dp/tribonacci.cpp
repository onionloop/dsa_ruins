#include <iostream>
#include <vector>
using namespace std;

int tribo(int n){

    if(n <= 2) return n == 0 ? 0: 1;

    vector<int> v(n);

    v[0] = 0;
    v[1] = 1;
    v[2] = 1;
    
    for(int i =3 ; i < n ; i++){
        v[i] = v[n - 1] + v[n - 2] + v[n -3];
    }

}