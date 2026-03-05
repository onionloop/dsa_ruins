#include <iostream>
#include <vector>
using namespace std;


int findMNum(vector <int> &v, int n){


    for(int i = 1; i <= n ; i++){
        int found = 0;

        for(int j = 0 ; j < v.size() ; j++){
            if(v[j] == i){
                found = 1;
                break;
            }
        }
        if (found == 0) return i; 
    }

    return -1;

}

int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i= 0 ; i < n ; i++){
        cin >> v[i];
    }

    cout << findMNum(v, n) << endl;

    
    return 0;
}