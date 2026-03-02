#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rotateK(vector <int> &v, int k){
    int n = v.size();
    k = k % n;

    reverse(v.begin(), v.end());
    reverse(v.begin() , v.begin() + k);
    reverse(v.begin() +k , v.end() );
}