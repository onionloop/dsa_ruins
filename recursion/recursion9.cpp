// Swapping using recrusion

#include <iostream>
using namespace std;

void func(int arr[] , int l , int r){

    if (l >= r) return;

    swap(arr[l], arr[r]);

    func(arr , l+1, r-1);



}


int main(){
    
    int n;
    cout << "Enter the size of the array: ";
    cin >>  n;


    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    func(arr, 0 , n -1);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }


}