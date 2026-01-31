#include <iostream>
#include <stack>
using namespace std;

int main(){


    stack <int> s;
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.top() << endl;

    stack <int > copy = s; // to keep the original stack safe!

    while (!copy.empty()){
        cout << copy.top() << " ";
        copy.pop();
    }
}