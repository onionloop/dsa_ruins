#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int findMNum(vector <int> &v, int n){

    unordered_map<int,int> mp;

    for(int i =0 ; i< n ; i++){
        mp[v[i]]++;
    }

    for(int i = 1; i <= n ; i++){
        if(mp[i] == 0) return n;
    }

    return -1;
}


int main(){

    int n;
    cin >> n;

    vector <int> v(n-1);

    for(int i= 0 ; i < n-1 ; i++){
        cin >> v[i];
    }

    cout << findMNum(v, n) << endl;

    
    return 0;
}