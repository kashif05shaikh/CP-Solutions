#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while(q--) {
        int n;
        cin >> n;

        vector<int> freq(n + 1, 0);

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int ans = freq[0];

        for(int i = 1; i <= n; i++) {
            freq[i] = min(freq[i], freq[i - 1] - 1);

            if(freq[i] <= 0)
                break;

            ans += freq[i];
        }

        cout << ans << '\n';
    }
}