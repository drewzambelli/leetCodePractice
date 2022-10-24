#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i<nums.size(); i++) {
            for(int j = 0; j<nums.size();j++){
                if((nums[i] + nums[j] == target) && (i != j)){
                    cout << nums[i] << " + " << nums[j] << " = " << target << endl;
                    return {i, j};
                
                }
            }
        }
        
        return result;
}


int main () {

    vector<int> myVec = {5, 12, 4, 6};
    int a = 18;

    twoSum(myVec, a);

    return 0;
}