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

    map<int , int> count;

    for(int i =0 ; i < n ; i++){
        count[arr[i]]++;
    }

    int duplicate = -1;

    for(auto ans : count){
        if (ans.second > 1){
            duplicate = ans.first;
            break;
        }
        
    }

    if (duplicate == -1) cout << "No Duplicates found";
    else cout << duplicate;
    
    return 0;

}