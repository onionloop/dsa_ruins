#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> & arr , int i , int n){

    
    if (i >= n/2) return;

    swap(arr[i] , arr[n - i - 1]);

    return reverse(arr, i+1 , n);

}


int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "Before Swap\n";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i];
    }

    reverse(arr, 0 , n);
    cout << endl;

    cout << "After Swap\n";

    for(int i = 0 ; i < n ; i++){
        cout << arr[i];
    }

    return 0;
}