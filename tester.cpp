#include <iostream>
#include <vector>
#include <climits>
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
/*

int main(){
    int n;
    cin >> n;

    if(n < 2){
        cout << "No second largest exist";
        return 0;
    }

    vector <int > arr(n);

    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;
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

*/

/*
bool sorted(vector <int> &v , int n){
    for(int i = 0 ; i < n ; i++){
        int min = i;

        for(int j = i+ 1 ; j < n ; j++ ){
            if(v[j] > v[i]) return true;
        }

    }
    return false;
}



int main(){

    int n = 3;
   // cin >> n;

    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    cout << sorted(v , n);

}


bool sorted(vector <int> &v , int n){

    for(int i =0 ; i < n ; i++){
        if (v[i] > v[i+1]) return false;
    }

    return true;

}


int main(){
    int n = 3;

    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    cout << sorted(v , n );

}

*/

void moveZeros(vector <int> &v , int n){
    int j = 0;

    for(int i = 0 ; i < n ; i++){
        if(v[i] != 0){
            v[j++] = v[i];
        }
    }

    while( j < n){
        v[j++] = 0;
    }


    for(int i =0 ; i < n ; i++){
        cout << v[i] << " " ;
    }
}


int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i= 0 ; i < n ; i++){
        cin >> v[i];
    }

    
    moveZeros(v , n);

    return 0;
}