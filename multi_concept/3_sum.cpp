// LC 15 - THIS PROBLEM IS AN MIXTURE OF SORTING + TWO POINTER FOR OPTIMAL APPROACH

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> Tsum(vector <int> &v){

    sort(v.begin(), end());

    vector <int> ans;

    for(int i =0 ; i < v.size() ; i++){

        if(i > 0  && v[i] == v[i-1]) continue;

    }

    int left = 0;
    int right = v.size() - 1;

    while(left < right){

        int sum = v[i] + v[left] + v[right];

        if(sum ==0 ){ 
            
        ans.push_back({v[i], v[left], v[right]});

        left++;
        right--;

        while(left < right && v[i] == v[i+1]) left++;
        while(left < right && v[i] == v[i - 1]) right--;
    }

        else if(sum < 0) left++;

        else right ++;
    }

}

