#include <iostream>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k %n;

        if(k == 0 ) return ;

        vector <int> temp;

        for(int i = n - k; i < n ; i++ ){
            temp.push_back(nums[i]);
        }

        for(int i =n-k-1 ; i >= 0 ; i--){
            nums[i+k] = nums[i];
        }

        int j =0 ;
        for(int i = 0 ; i < k ; i++){
            nums[i] = temp[j];
            j++;
        }

    }

int main(){
    int k;
    cin >> k;

    int n; cin >> n;
    vector <int> v(n);



    for(int i= 0 ; i < n; i++ ){
        cin >> v[i];
    }

    rotate(v, k);

    for(int i = 0 ; i< n ; i++){
        cout << v[i] << " ";

    }

    return 0;
}