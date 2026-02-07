// Pushes Maximum Element to the last
#include <iostream>
#include <vector>
using namespace std;


void bubble_sort(vector <int> &v, int n){
    
    for(int i = 0 ; i < n ; i++){
        int swapO = 0;
        for(int j = 0 ; j < n - i - 1; j++ ){
            if (v[j] > v[j+1]){
                swap(v[j] , v[j + 1]);
                swapO = 1;
            }
        }
    
    if (swapO == 0) break;
}

    for(int i =0 ; i < n ; i++){
        cout << v[i] << " ";
    }

}

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }

    bubble_sort(v, n);
}
