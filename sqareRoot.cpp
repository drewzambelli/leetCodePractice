class Solution {
public:
    int mySqrt(int x) {
        
    if (x == 0) {
        return 0;
    }
        
    for(double i = 0; i <= x; i++) {
        if(i*i == x) {
            return i;
        } else if (i*i > x) {
            return i-1;
        } 
    }
        
        
    return -1;
    }
    };