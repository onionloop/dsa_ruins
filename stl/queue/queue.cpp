#include <iostream>
#include <queue>
using namespace std;


int main(){

    queue <int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    q.emplace(20);


    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;

}