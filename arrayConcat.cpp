#include <iostream>
#include <vector>

using namespace std;





int main () {

    vector<int> nums = {1, 2, 1};
    vector<int> ans;

    for (int i = 0; i< nums.size(); i++){
            ans.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++){
            ans.push_back(nums[i]);
        }

for (int i = 0; i < ans.size(); i++){
            cout << ans[i] << endl;   
        }

    return 0;
}