#include <iostream>
using namespace std;
#include <vector>
#include <map>

int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    unordered_map<int , int> count;

    for(int i =0 ; i < n ; i++){
        count[arr[i]]++;

        if(count[arr[i]] > 1){
            cout << arr[i];
            return 0;
        }
    }

    cout << "No Duplicates found";
        
    return 0;

}