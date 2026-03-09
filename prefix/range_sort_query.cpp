#include <iostream>
#include <vector>
using namespace std;

class NumArray{

private:
    vector <int> prefix;



public:

    NumArray(vector <int> &v){
        int cur = 0;

        for(int num : v){
            cur += num;
            prefix.push_back(cur);
        }
    }

    int sumArray(int left , int right){
        int leftSum = left > 0 ? prefix[left - 1] : 0;
        int rightSum = prefix[right];

        return rightSum - leftSum;
    }


};

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    NumArray obj(v);

    int left, right;
    cout << "Enter left and right index: ";
    cin >> left >> right;

    cout << "Sum = " << obj.sumArray(left, right) << endl;

    return 0;
}