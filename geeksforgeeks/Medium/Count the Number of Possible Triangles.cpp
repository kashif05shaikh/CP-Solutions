
class Solution {
public:
    int countTriangles(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int cnt = 0;

        for (int k = 2; k < n; k++) {
            int i = 0;
            int j = k - 1;

            while (i < j) {
                if (arr[i] + arr[j] > arr[k]) {
                    cnt += j - i;
                    j--;
                } else {
                    i++;
                }
            }
        }

        return cnt;
    }
};