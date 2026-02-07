#include <iostream>
#include <vector>
using namespace std;

void selection(vector <int> &v , int n){

    for(int i =0 ; i < n - 1 ; i++){
        int min = i;
        for(int j = i + 1 ; j < n ; j++){
            if(v[j] < v[min]) min = j;
        }
        swap(v[i], v[min]);
    }

    for(int i = 0 ; i < n ; i++){
        cout << v[i] << " ";
    }

}

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }

    selection(v, n);
}