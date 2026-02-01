#include <iostream>
#include <vector>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector <int> v(n);


        for(int i = 0 ; i< n; i++){
            cin >> v[i];
        }

        if (n % 2 != 0 && n % 3 == 0){
            cout << v[n/2] << endl;
        }

        else if(n % 2 == 0 && n % 3 == 0){
            cout << v.front() << " " << v.back() << endl;

        }


        else cout << v.front() + v.back() << endl;
    }

    return 0;
}