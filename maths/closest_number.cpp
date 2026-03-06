#include <iostream>
#include <cmath>
using namespace std;

int closestNumber(int n, int m) {
    
    // C++ truncates toward zero: -15/6 = -2 (not -3 like Python)
    int num = n / m;
    
    // n1 = floor candidate (multiple just below n)
    int n1 = num * m;
    
    // n2 = ceiling candidate
    // same sign → step up | diff sign → step down
    int n2 = (n * m > 0) ? (num + 1) * m : (num - 1) * m;

    // tie → pick max absolute value
    if (abs(n - n1) == abs(n - n2))
        return (abs(n1) > abs(n2)) ? n1 : n2;

    // return closer candidate
    return (abs(n - n1) < abs(n - n2)) ? n1 : n2;
}

int main() {
    cout << closestNumber(13, 4)  << endl;  // 12
    cout << closestNumber(-15, 6) << endl;  // -18
    cout << closestNumber(20, 7)  << endl;  // 21
    cout << closestNumber(-20, 3) << endl;  // -21
    return 0;
}