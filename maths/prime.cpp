#include <iostream>
using namespace std;


bool isPrime(int A) {

	if(A <= 1) return false;

	int upperLimit = sqrt(A);
	
	for (int i  = 2; i <= upperLimit; i++) {
		if (A % i == 0) return false;
	}
	return true;
}


int main(){

    int a;
    cin >> a;

    cout << isPrime(a);
}