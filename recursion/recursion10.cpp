#include <iostream>
using namespace std;

void reverse(vector <int> &arr, int n , int i){

    n = arr.size();

    if(i > n/2) return ;

    swap(arr[i], arr[n - i - 1]);

    return reverse(arr, n , i+1);
}


int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "Before Swap\n";

    for(int i = 0 ; i < n ; i++){
        cout << arr[i];
    }

    reverse(arr, n , 0);

    cout << "\nAfter Swap\n";

    for(int i = 0 ; i < n ; i++){
        cout << arr[i];
    }

    return 0;
}