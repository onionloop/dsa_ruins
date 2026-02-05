#include <iostream>
using namespace std;


int isPrime(int A) {
	int upperLimit = (int)(sqrt(A));
	int i;
	for (i = 2; i < upperLimit; i++) {
		if (i <  A && A % i == 0) return 1;
	}
	return 0;
}


int main(){

    int a;
    cin >> a;

    cout << isPrime(a);
}