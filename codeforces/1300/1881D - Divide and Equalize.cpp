
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        for (int p = 2; p * p <= x; p++) {
            while (x % p == 0) {
                mp[p]++;
                x /= p;
            }
        }

        if (x > 1) {
            mp[x]++;
        }
    }

    for (auto it : mp) {
        if (it.second % n != 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
