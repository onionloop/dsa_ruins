#include <iostream>
using namespace std;

/*variable method
#include <iostream>
using namespace std;

int main(){

    int first = 0;
    int second = 1;
    int next;
    int n;
    cin >> n;

    if (n <= 0) return 0;

    cout << first << " ";

    if (n == 1) return 0;

    cout << second << " ";

    
    

    for(int i = 2 ; i < n ; i++){
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
        
        
        }





}
*/ 



int main(){

    int n;
    cin >> n;

    if (n <= 0) return 0;

    int arr[n];

    
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2 ; i < n ; i++){
        arr[i] = arr[i-1] + arr[i-2];

    }
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

}