
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 998244353;

ll fact(int n) {
    ll ans = 1;

    for (int i = 1; i <= n; i++) {
        ans = (ans * i) % MOD;
    }

    return ans;
}

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int cnt = 0;
    int ans = 0;
    ll ways = 1;

    for (int i = 0; i < n; i++) {
        int j = i;

        while (j < n && s[j] == s[i]) {
            j++;
        }

        int len = j - i;

        ans += len - 1;
        ways = (ways * len) % MOD;

        i = j - 1;
    }

    ways = (ways * fact(ans)) % MOD;

    cout << ans << " " << ways << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
