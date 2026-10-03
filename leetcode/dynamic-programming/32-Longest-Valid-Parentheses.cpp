class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        stack<int>idx;
        stack<char>st;
        idx.push(-1);
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push('(');
                idx.push(i);
            }
            else{
                if(!st.empty()){
                    st.pop();
                    idx.pop();
                    ans=max(ans,i-idx.top());
                }
                else{
                    while(idx.size()>1) idx.pop();
                    idx.pop();
                    idx.push(i);
                }
            }
        }
        return ans;
    }
};