#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;


int maxSubArray(vector <int> ans){

    int maxN = INT_MIN;
    int sum = 0;
    for(int i = 0 ; i < ans.size() ; i++){
            sum += ans[i];
            maxN = max(sum , maxN);
            if(sum < 0) sum = 0;
    }

    return sum;
}

int main(){
    
}