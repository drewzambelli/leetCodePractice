class Solution {
public:
    bool isValid(string s) {
    stack<char> myStack;
        
        if(s[0] == ']' || s[0] == '}' || s[0] == ')'){
            return false;
        }
        
        myStack.push(s[0]);
        for(int i = 1; i < s.length(); i++){
            if(myStack.empty()){
                myStack.push(s[i]);
            } else if (s[i] == ')' && myStack.top() == '('){
                myStack.pop();
            } else if (s[i] == ']' && myStack.top() == '['){
                myStack.pop();
            } else if (s[i] == '}' && myStack.top() == '{'){
                myStack.pop();
            } else if(s[i] == '(' || s[i] =='[' || s[i] =='{') {
                myStack.push(s[i]);
            } else {
                return false;
            }
        }
        
        if(myStack.empty()){
            return true;
        } else {
            return false;
        }
        
    return true;
    }
};