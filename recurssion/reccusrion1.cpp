#include <iostream>
using namespace std;

void func(string name,  int i ,int  n){

    if (i > n) return;

    cout << name << endl;
    func(name , i+1 ,n);

}


int main(){

    string name = "XYZ";
    int n;
    cin >> n;

    func(name, 1 , n);
    
}