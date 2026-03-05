#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



int findMNum(vector <int> &v, int n){

    unordered_map<int,int> mp;

    for(int i =0 ; i< n ; i++){
        mp[v[i]]++;
    }

    
}








int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i= 0 ; i < n ; i++){
        cin >> v[i];
    }

    cout << findMNum(v, n) << endl;

    
    return 0;
}