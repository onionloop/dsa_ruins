#include <iostream>
using namespace std;

int main(){



    long long n = 368000;
    long long result = 0;
    for(long long i  =0 ; i <= n ; i += 2){
        result += i * i;

    }
    cout << result << endl;

    return 0;
}