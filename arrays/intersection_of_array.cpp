#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector <int> interSection(vector <int> &v1, vector <int> &v2){

    int n1 = v1.size();
    int n2 = v2.size();

    vector <int> visiN(n2, 0);
    
    vector <int> ans;


    for(int i =0 ; i < n1 ;i++){

        for(int j = 0 ; j< n2 ; j++){
            
            if(v1[i] == v2[j] && visiN[j] == 0){
                ans.push_back(v1[i]);
                visiN[j] = 1;
                break;
            }
            
            if (v2[j] > v1[i]) break;
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