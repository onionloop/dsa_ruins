// Binary Search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int bin(vector <int> &v, int low , int high, int target){

    if (low > high) return -1;


    int mid = (low + high)/2;

    if (v[mid] == target) return mid;

    else if (v[mid] > target) return bin(v , low , mid - 1 , target);

    else  return bin(v , mid + 1 , high , target);
    

    return -1;

}




int main(){

    int n; cin >> n;
    vector <int> v(n);


    int target;
    cout << "Enter the target: ";
    cin >> target;

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << bin(v, 0 , v.size() - 1, target) << endl;
}