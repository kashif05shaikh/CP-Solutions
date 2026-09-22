#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long l = 1, r = 1e9;

        while (l <= r) {
            long long w = (l + r) / 2;
            long long sum = 0;

            for (long long x : a) {
                long long side = x + 2 * w;
                sum += side * side;

                if (sum > c)
                    break;
            }

            if (sum == c) {
                cout << w << '\n';
                break;
            }
            else if (sum < c) {
                l = w + 1;
            }
            else {
                r = w - 1;
            }
        }
    }

    return 0;
}