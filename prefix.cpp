#include <string>
#include <iostream>
#include <vector>
using namespace std;


int main () {
    

vector<string> strs ={"flowers", "flow", "flight"};

        string result;
        for (int i = 0; i<strs[0].size(); i++) {
            for (int j = 1; j<strs.size(); j++) {
            cout << "this is i: " << strs[0][i] << endl;
            cout << "this is j: " << strs[j] << endl;
            cout << "this is j and i: " << strs[j][i] << endl;
            cout << strs[0][i] << "  and  " << strs[j][i] << endl;
            } 
            result += strs[0][i];   
        }
    cout << result << endl;
    return 0;
}