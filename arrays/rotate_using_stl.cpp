#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rotateK(vector <int> &v, int k){
    int n = v.size();
    k = k % n;

    reverse(v.begin(), v.end());
    reverse(v.begin() , v.begin() + k);
    reverse(v.begin() +k , v.end());
}

int main(){

    int k ; cin >> k;
    int n; cin >> n;
    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    rotateK(v, k);

    for(int i =0 ; i < n ; i++){
        cout << v[i] << " ";
    }

    return 0;
}