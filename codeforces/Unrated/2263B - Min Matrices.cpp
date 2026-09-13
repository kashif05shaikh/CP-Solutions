#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int x = k - n + 1;

    if (x < 1 || x > n) {
        cout << -1 << '\n';
        return;
    }

    vector<vector<int>> a(n, vector<int>(n));

    a[0][0] = 1;
    int cur = 2;

    for (int i = 1; i < x; i++) {
        a[0][i] = cur++;
        a[i][0] = cur++;
    }

    for (int i = x; i < n; i++) {
        a[i][i] = cur++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                a[i][j] = cur++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}