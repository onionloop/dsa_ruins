    #include <iostream>
    #include <vector>
    #include <unordered_map>
    #include <climits>
    using namespace std;

    int main(){

        int n;
        cin >> n;

        vector <int> arr(n);

        for(int i =0 ;  i < n ; i++){
            cin >> arr[i];
        }

        unordered_map <int , int> count;

        for(int i = 0 ; i < n ; i ++){
            count[arr[i]]++;
        }


        int minFreq = INT_MAX;
        int element;

        for(auto ans : count){
            
            
            if (minFreq > ans.second){
                minFreq = ans.second;
                element = ans.first;    
            

            }
        }

        cout << "Min Appeared Element is : " << element << " " <<  "With the frequency of " << minFreq << endl;
    }