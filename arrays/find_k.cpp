#include <iostream>
#include <vector>
using namespace std;

bool find_k(vector <int> &v , int n , int target){

        int left = 0;
        int right = n -1 ;

    
    
}



int main(){
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }


    find_k(v , n , target);

    return 0;
}