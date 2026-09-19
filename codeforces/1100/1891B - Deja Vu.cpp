#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int prev = 31;

        while (q--) {
            int x;
            cin >> x;

            if (x >= prev)
                continue;

            long long p = 1LL << x;
            long long add = 1LL << (x - 1);

            for (int i = 0; i < n; i++) {
                if (a[i] % p == 0) {
                    a[i] += add;
                }
            }

            prev = x;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}