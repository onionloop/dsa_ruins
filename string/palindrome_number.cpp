#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isPalindrome(int n) {
        // code here.
        
        int newN = n;
        int ans = 0;
        while(newN > 0){
            
            int last = newN % 10;
            
            ans = ans * 10 + last;
            
            newN /= 10;
            
        }
        
        
        return ans == n;
        
        }


/*

============================ USING STL ============================

bool palN(int n){

    string s = to_string(n);

    string newStr = s;

    reverse(newStr.begin(), newStr.end());

    return newStr == s;
}
*/

int main(){

    int s;

    cin >> s;

    cout << isPalindrome(s) << endl;

    return 0;
}