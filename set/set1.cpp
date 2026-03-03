#include <iostream>
#include <set>
using namespace std;

void unionOSet(int arr1[],int n , int arr2[], int k){
    
    set <int> s3;

    for(int i =0 ; i < n ; i++){
        s3.insert(arr1[i]);
    }

    for(int i= 0 ; i < k; i++){
        s3.insert(arr2[i]);
    }

}


int main(){

    int n; cin >> n;
    int arr[n];

    for(int i= 0  ; i < n ; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int arr1[k];

    for(int i =0 ; i < n ; i++){
        cin >> arr1[i];
    }

    unionOSet(arr, n , arr1, k);

    
}