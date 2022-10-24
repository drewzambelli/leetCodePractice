class Solution {
public:
    int romanToInt(string s){
        vector<int> num;
        int sum = 0; 
        for (int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'M':
                    num.push_back(1000);
                    break;
                case 'D':
                   num.push_back(500);
                    break;
                case 'C':
                    num.push_back(100);
                    break;
                case 'L':
                    num.push_back(50);
                    break;
                case 'X':
                    num.push_back(10);
                    break;
                case 'V':
                    num.push_back(5);
                    break;
                case 'I':
                    num.push_back(1);
                    break;
            }
        }
        
        for (int i = 0; i < num.size(); i++){
            if(num[i] < num[i+1]){
                sum -= num[i];
            } else {
                sum += num[i];
            }
        }
    return sum;
    }
};
