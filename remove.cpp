// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place
//  such that each unique element appears only once. The relative order of the elements should be kept the same.

// Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int target = nums[0];
        
        for (int i = 0; i < nums.size(); i++){
            if(target == nums[i]){
                nums.erase(nums.begin()+i);
                target = nums[i+1];
            }
        }
        return nums.size();
    }
};
