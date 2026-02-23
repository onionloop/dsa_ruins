#include <iostream>
#include <vector>
using namespace std;

vector <int> conc(vector <int> &v){

    vector <int> ans = v;

    ans.insert(ans.end(), v.begin() , v.end());

    // Insert = (WHERE , FROM , TO)
    // Getline = (cin , varibale_name) - to read the string in one go
    

    return ans;
}

int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i =0 ; i < n ; i++) cin >> v[i];

    vector <int> ans = conc(v);

    for(int i : ans) cout << i << " ";

    return 0;


   
}
