#include <iostream>
#include <vector>
using namespace std;

int tribo(int n){

    if(n <= 2) return n == 0 ? 0: 1;

    vector<int> v(n);

    v[0] = 0;
    v[1] = 1;
    v[2] = 1;
    
    for(int i =3 ; i <= n ; i++){
        v[i] = v[i - 1] + v[i - 2] + v[i -3];
    }


    return v[n];

}


int main(){

    int n;
    cin >> n;

    cout << tribo(n) << endl;

    return 0;
}