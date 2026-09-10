#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long d = y - x;
        long long ans = 0;

        long long cnt = min(k, max(0LL, d - x + 1));

        for (long long i = 0; i < cnt; i++) {
            ans += d % (x + i);
        }

        ans += (k - cnt) * d;

        cout << ans << '\n';
    }

    return 0;
}