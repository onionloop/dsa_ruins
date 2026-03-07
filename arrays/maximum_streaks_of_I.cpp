#include <iostream>
#include <vector>
using namespace std;

int maxC(vector <int> &v, int n){

    int count = 0;

    int maxS = 0;

    for(int i =0 ; i < n ; i++){

        if(v[i] == 1){
            count++;
            maxS = max(count , maxS);
                }

        else count = 0;

    }

    return maxS;
}

int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }

    cout << maxC(v, n) << endl;

    return 0;
}