#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector <int> &v, int n){

    int total = (n*(n+1))/2;

    int sum = 0;


    for(int i = 0 ; i < v.size() ; i++) sum += v[i];


    return total - sum;
}


int main(){


    int n;
    cin >> n;

    vector<int> v(n-1);

    for(int i = 0 ; i < n - 1; i++){
        cin >> v[i]; 
    }

    cout << missingNum(v, n) << endl;

    return 0;
}