// Takes an element and places it in correct order


#include <iostream>
using namespace std;


void insertion(vector <int> & v , int n){

    for(int i =0 ; i < n ; i ++){
        int j = i;

        while(j > 0 && v[j-1] > v[j]){
            swap(v[j-1], v[j]);
            j--;
        }
    }

    for(int i =0 ;i < n ; i ++){
        cout << v[i] << " ";
    }
   
}


int main(){
    
    int n;
    cin >> n;
    
    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    insertion(v , n);

}