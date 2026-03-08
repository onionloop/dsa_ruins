#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;


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
    }

    int max = INT_MIN;
    int element = -1;

    
    for(auto &ans : count){
        if (ans.second > max) {
            max = ans.second ;
            element = ans.first;
    }

    
}
    cout << max << endl << element;
    return 0;

}