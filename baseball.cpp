#include <iostream>
#include <vector>
#include <ctype.h>

using namespace std;


int main (){
        vector<string> operations = {"5","2","C","D","+"};

        vector<int> myVec;
        
        for (int i = 0; i<operations.size(); i++){
            if(operations[i] == "C"){
                myVec.pop_back();
            } else if(operations[i] == "D") {
                myVec.push_back(2*myVec.back());
            } else if(operations[i] == "+") {
                myVec.push_back(myVec.back() + myVec[myVec.size()-2]);
            } else {
                myVec.push_back(stoi(operations[i]));
            }
                
                
        }
        int result = 0;
        for (int i = 0; i<myVec.size(); i++){
            result += myVec[i];
        }

        cout << result << endl;
    return 0;
}