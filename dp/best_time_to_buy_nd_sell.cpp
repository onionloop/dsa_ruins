#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector <int> &v){

    int n = v.size();
    int mini = v[0];
    int maxP = 0;

    for(int i =0 ; i < n ; i++){
        int cost = v[i] - mini;
        maxP = max(cost , maxP);
        mini = min(v[i] , mini);
    }

    return maxP;
}

int main(){

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i =0 ; i < n ; i++){
        cin >> v[i];

    }

    cout << maxProfit(v) << endl;

    return 0;
}