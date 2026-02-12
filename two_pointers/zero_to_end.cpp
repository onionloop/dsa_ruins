#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector <int> &v , int n){
    
    int j = 0;


    for(int i =0 ; i < n ; i++){
        if(v[i] != 0) v[j++] = v[i];
    }


    while(j < n){
        v[j++] = 0;
    }

    
}


int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];

    }

    moveZeros(v , n);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

}