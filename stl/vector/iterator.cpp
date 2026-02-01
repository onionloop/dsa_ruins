#include <iostream>
#include <vector>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector <int> vec(n);


    for(int i =0 ; i < n; i++){
        cin >> vec[i];
    }


    for(vector <int>:: reverse_iterator it = vec.rbegin() ; it != vec.rend() ; ++it ){
        cout << *it << " ";
    }
}