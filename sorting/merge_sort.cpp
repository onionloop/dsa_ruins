#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

void merge(vector<int> &v , int low, int mid , int high){
        
    vector <int> temp;

    int left = low;
    int right = mid + 1;
     
    while(left <= mid && right <= high){
        if(v[right] >= v[left]){
            temp.push_back(v[left]);
            left++;
        }

        else (v[right] <= v[left]) {
            temp.push_back(v[right]);
            right++
        }

    }
}



void mergeS(vector <int> &v , int low , int high){

    int mid = (low + high) / 2;

    if(low >= high) return ;

    mergeS(v , low , mid);
    mergeS(v, mid+1 , high);

    merge(v , low, mid , high);
}