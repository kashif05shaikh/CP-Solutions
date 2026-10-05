class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>seen;
        seen.push(0);
        for(char c:s){
            if(c=='('){
                seen.push(0);
            }
            else 
            {
                int x=seen.top();
                seen.pop();
                int y;
                if(x==0) y=1;
                else{
                    y=2*x;
                }
                seen.top()+=y;
            }
        }
        return seen.top();
    }
};