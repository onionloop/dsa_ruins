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

        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(v[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(v[right]);
        right++;
    }

    for(int i = low ; i <= high ; i++){
        v[i] = temp[i-low];
    }
}



void mergeS(vector <int> &v , int low , int high){

    int mid = (low + high) / 2;

    if(low >= high) return ;

    mergeS(v , low , mid);
    mergeS(v, mid+1 , high);

    merge(v , low, mid , high);
}