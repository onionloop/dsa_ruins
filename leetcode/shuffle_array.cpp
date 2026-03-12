#include <iostream>
#include <vector>
using namespace std;

vector <int> shuffle(vector <int> &v, int n){

    vector <int> ans;

    for(int i =0 ; i < n ; i++){
        ans.push_back(v[i]);
        ans.push_back(v[n + i]);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    vector <int> ans = shuffle(v, n);

    for(int x : ans) cout << x << " ";
}