#include <iostream>
#include <vector>
using namespace std;

vector <int> conc(vector <int> &v){

    vector <int> ans = v;

    ans.insert(ans.end(), v.begin() , v.end());

    // Inser = (WHERE , FROM , TO)

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
