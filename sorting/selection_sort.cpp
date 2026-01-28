#include <iostream>
using namespace std;


void selection(vector <int> &arr , int n){

    for(int i = 0 ; i < n ; i++){
        int min = i;
        for(int j = i+1; j < n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    for (int i =0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int n; cin >> n;
    vector <int> a[i];
    for(int i =0 ; i < n ; i++){
        cin >> a[i];
    }


    selection(a , n);
}
