
/*This program uses the C++ STL map to store and manage students’ marks based on their names. Each student’s name is used as a key and the total marks obtained by the student are stored as the value.

The program processes a number of queries. For type 1 queries, the marks are added to the existing marks of the student (if the student already exists) or a new entry is created if the student is not present. For type 2 queries, the student’s record is removed from the map. For type 3 queries, the program prints the total marks of the given student; if the student does not exist in the map, it prints 0.

The use of a map ensures efficient insertion, deletion, and searching of student records.*/



#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

    int q;
    cin >> q;

    map <string , int> m;

    while(q--){
        int type;
        cin >> type;

        if(type == 1){
            string name;
            int marks;
            cin >> name >> marks;
            m[name] += marks;
        }

        if(type == 2){
            string name;
            cin >> name;

            m.erase(name);
        }

        if(type == 3){
            string name;
            cin >> name;
            cout << m[name] << endl;
        }

    }
    return 0;
}