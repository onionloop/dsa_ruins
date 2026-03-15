#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxSubArray(vector <int> &v){

    int sum =0;
    int maxN = INT_MIN;
    int n = v.size();

    for(int i =0 ; i < n ;i++){
        sum += v[i];
        maxN = max(sum, maxN);

        if(sum < 0) sum = 0;
        
    }

    return maxN;
}

int main(){

    int n; cin>> n;

    vector <int> v(n);

    for(int i =0 ; i< n ; i++){
        cin >> v[i];
    }

    cout << maxSubArray(v);

    return 0;
}