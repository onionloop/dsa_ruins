#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

void merge(vector<int> &v , int low, int mid , int high){
    
}



void mergeS(vector <int> &v , int low , int high){

    int mid = (low + high) / 2;

    if(low >= high) return ;

    mergeS(v , low , mid);
    mergeS(v, mid+1 , high);

    merge(v , low, mid , high);
}