#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i =0 ;  i < n ; i++){
        cin >> arr[i];
    }

    unordered_map <int , int> count;

    for(int i = 0 ; i < n ; i ++){
        count[arr[i]]++;
    }


    int min = 0;
    int element;

    for(auto ans : count){
        
        
        if (min > ans.second){
            min = ans.second;

        }
    }

    cout << min << endl;
}