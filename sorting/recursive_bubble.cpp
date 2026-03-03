#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubble(vector <int> &v, int n){

    if (n == 1) return ;

    int didSwap = 0;


    for(int i = 0 ; i < n - 1; i++){
        if(v[i] > v[i+1]) {
            swap(v[i], v[i+1]);
            didSwap = 1;
        }
    }

    if (didSwap = 0) return;

    bubble(v, n - 1);
}

int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    bubble(v, n);

    return 0;
}