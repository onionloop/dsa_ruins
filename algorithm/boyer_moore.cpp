#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &v){

    int candidate = 0;
    int count = 0;

    for(int num : v){

        if(count == 0)
            candidate = num;

        if(num == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int result = majorityElement(v);

    cout << "Majority Element: " << result << endl;

    return 0;
}