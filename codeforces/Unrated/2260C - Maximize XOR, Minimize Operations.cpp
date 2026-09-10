#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long s = x + y;
        long long a = 0;

        for (int i = 28; i >= 0; i--) {
            if ((s & (1LL << i)) && a + (1LL << i) <= x) {
                a += (1LL << i);
            }
        }

        cout << s << " " << x - a << '\n';
    }
}