// LC 15 - THIS PROBLEM IS AN MIXTURE OF SORTING + TWO POINTER FOR OPTIMAL APPROACH

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <vector<int>> Tsum(vector <int> &v){

    sort(v.begin(), v.end());

    vector <vector<int>> ans;

    for(int i =0 ; i < v.size() ; i++){

        if(i > 0  && v[i] == v[i-1]) continue;

    

    int left = i + 1;
    int right = v.size() - 1;

    while(left < right){

        int sum = v[i] + v[left] + v[right];

        if(sum ==0 ){ 
            
        ans.push_back({v[i], v[left], v[right]});

        left++;
        right--;

        while(left < right && v[i] == v[left+1]) left++;
        while(left < right && v[i] == v[right - 1]) right--;
    }

        else if(sum < 0) left++;

        else right--;
    }


}
    return ans;
}

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    
    vector<vector<int>> result = Tsum(nums);
    
    cout << "All unique triplets that sum to zero:\n";
    for(const auto &triplet : result){
        cout << "[";
        for(size_t i = 0; i < triplet.size(); i++){
            cout << triplet[i];
            if(i != triplet.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    
    return 0;
}

