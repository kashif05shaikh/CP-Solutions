class Solution {
public:
    int clumsy(int n) {
        stack<int> st;
        st.push(n);

        int cnt = 1;
        n--;

        while (n >= 1) {
            if (cnt % 4 == 1) {
                int x = st.top();
                st.pop();
                st.push(x * n);
            }
            else if (cnt % 4 == 2) {
                int x = st.top();
                st.pop();
                st.push(x / n);
            }
            else if (cnt % 4 == 3) {
                st.push(n);
            }
            else {
                st.push(-n);
            }

            cnt++;
            n--;
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};