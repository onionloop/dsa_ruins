#include <iostream>
#include <vector>
using namespace std;

void removeDup(vector <int> &v , int n){
    
    int j = 0;

    for(int i = 0 ; i < n ; i ++){
        if(v[i] != v[j]){
            j++;
            v[j] = v[i];
        }
    }

    for(int i =0 ; i < n ; i++){
        cout << v[i] << " ";
    }
}

int main(){

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i =0 ; i < n ; i++){
        cin >> n;
    }

    removeDup(v , n);
}