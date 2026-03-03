#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void insertion(vector <int> &v,  int n){

    if (n == 1) return;

    insertion(v, n-1);

    int j = n - 1;

    while(j > 0 && v[j] < v[j-1]){
        swap(v[j], v[j-1]);
        j--;
    }


}


int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    insertion(v, n);

    for(int i =0 ; i < n ; i++){
        cout << v[i] << " ";
    }

    return 0;
}