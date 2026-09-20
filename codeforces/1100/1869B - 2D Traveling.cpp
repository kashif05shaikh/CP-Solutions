#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll dist(ll x1, ll y1, ll x2, ll y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<ll> x(n + 1), y(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> x[i] >> y[i];
        }

        ll direct = dist(x[a], y[a], x[b], y[b]);

        if (k == 0) {
            cout << direct << '\n';
            continue;
        }

        ll da = LLONG_MAX;
        ll db = LLONG_MAX;

        for (int i = 1; i <= k; i++) {
            da = min(da, dist(x[a], y[a], x[i], y[i]));
            db = min(db, dist(x[b], y[b], x[i], y[i]));
        }

        cout << min(direct, da + db) << '\n';
    }

    return 0;
}