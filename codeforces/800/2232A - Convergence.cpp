#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int l = 0;
        int r = n - 1;
        int ans = 0;

        while (l < r && a[l] != a[r]) {
            l++;
            r--;
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}