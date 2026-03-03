#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> interSection(vector <int> &v1, vector <int> &v2){

    int n1 = v1.size();
    int n2 = v2.size();

    vector <int> ans;

    int i = 0 ;
    int j = 0;

    while(i < n1 && j < n2){

        if(v1[i] < v2[j]) 
            i++;

        else if(v2[j] < v1[i])
            j++;

        else{
            ans.push_back(v1[i]);
            i++;
            j++;
        }
    }


    return ans;


}


int main(){

    int n;
    cin >> n;
    vector <int> v1(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v1[i];
    }

    int n2;
    cin >> n2;
    vector <int> v2(n2);

    for(int i =0 ; i < n2; i++){
        cin >> v2[i];
    }

    vector<int> ans = interSection(v1, v2);

    for(int i =0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }

    return 0;
}