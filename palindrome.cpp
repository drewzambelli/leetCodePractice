class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        string backwards = y;
        reverse(backwards.begin(), backwards.end());
        
        if(backwards == y) {
            return true;
        }

        return false;
    }
};