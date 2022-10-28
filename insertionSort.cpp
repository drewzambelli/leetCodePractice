class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        for (int i = 1; i < nums.size(); i++) {
            
            int j = i-1;
            
            while(j>=0 && nums[j+1] < nums[j]) {
                int temp;
                temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
                j--;
                
            }
        }
        return nums;
    }
};