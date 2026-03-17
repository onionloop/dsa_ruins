#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZ(vector <int> &v, int n){

    vector <int> temp;

    for(int i= 0 ; i < n ; i++){
        if (v[i] != 0) temp.push_back(v[i]);
    }

    int tz = temp.size();

    for(int i =0 ; i < tz ; i++){
        v[i] = temp[i];
    }

    for(int i = tz ; i < n ; i++){
        v[i] = 0;   
    }

}

int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i=0 ; i < n ; i++){
        cin >> v[i];
    }   

    moveZ(v , n );

    for(int i= 0 ; i < n ; i++){
        cout << v[i] << " ";
    }

    return 0;
}