#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector <int> twoSum(vector <int> &v , int target){

    unordered_map <int , int> mp;

    for(int i =0 ; i < v.size() ; i++){
        int need = target - v[i];


        if(mp.count(need)){
            return {i, mp[need]};
        }

        mp[v[i]] = i; 
    }

    return {};

}

int main(){

    int n;
    cin >> n;

    int k;
    cout << "Enter the target: ";
    cin >> k;

    vector <int> v(n);

    for(int i = 0 ; i < v.size() ; i++){
        cin >> v[i];
    }

    vector <int> ans = twoSum(v, k);

    for(int i =0 ; i < ans.size() ; i++){
        if(ans.size() == 2)
            cout << ans[0] << " " << ans[1] << '\n';
        else
            cout << "No solution\n";
    }

    return 0;
}