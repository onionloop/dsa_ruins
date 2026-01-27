#include <iostream>
#include <vector>
using namespace std;


void selection(vector <int> &a , int n){

    for(int i  = 0 ; i < n -1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if( a[j] < a[min]){
                min = j;
            }
        }
        swap(a[i], a[min]); 
    }
    

    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    
}

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0 ; i  < n ; i++){
        cin >> arr[i];
    }

    selection(arr, n);
}