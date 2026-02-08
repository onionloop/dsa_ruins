#include <iostream>
using namespace std;


/*
void reverseA(vector <int> &v , int l , int r){

    swap(v[l],  v[r]);

    while(l < r){
    
        l++;
        r--;
    }

    return;

}

int main(){

    int n; cin >> n;

    vector <int> arr(n);

    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }





    reverseA(arr , 0 , n-1);



     for(int i =0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

}

*/


int main(){
    int n;
    cin >> n;

    vector <int > arr(n);

    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }

    int largest = 0;
    int second_largest = 0;
    for(int i =0 ; i < n ; i++){

        if(arr[i] > largest ){ 
        second_largest = largest;
        largest = arr[i];

        }
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        } 
    }

    cout << second_largest << " ";


    return 0;
}