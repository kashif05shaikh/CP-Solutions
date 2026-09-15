#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;

    vector<ll> p(n), a(n, 0), ind;

    for (int i = 0; i < n; i++) {
        cin >> p[i];

        if (p[i] != i + 1)
            ind.push_back(i);
    }

    for (int i = 0; i < ind.size(); i++) {
        a[ind[i]] = p[ind[ind.size() - 1 - i]];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] && a[i] != i + 1) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}