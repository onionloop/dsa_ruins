#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> unionoArray(vector <int> &v1, vector <int> &v2){

    int n1 = v1.size();
    int n2 = v2.size();

    int i = 0;
    int j = 0;

    vector <int> unionAns;

    while(i < n1 && j < n2){

        if(v1[i] < v2[j]){
            if(unionAns.empty() || unionAns.back() != v1[i]){
                unionAns.push_back(v1[i]);
            }
            i++;
        }

        else{
            if(unionAns.empty() || unionAns.back() != v2[j]){
                unionAns.push_back(v2[j]);
            }
            j++;
        }
    }

    while(i < n1){
        if(unionAns.empty() || unionAns.back() != v1[i]){
            unionAns.push_back(v1[i]);
        }
        i++;
        }

    while(j < n2){
        if(unionAns.empty() || unionAns.back() != v2[j]){
            unionAns.push_back(v2[j]);
        }
        j++;
        }


        
        

        return unionAns;
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

    vector<int> ans = unionoArray(v1, v2);

    for(int i =0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }

    return 0;
}