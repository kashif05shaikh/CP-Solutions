#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt1 = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 1)
                cnt1++;
        }

        if (cnt1 >= (n + 1) / 2)
            cout << "Bessie\n";
        else
            cout << "Elsie\n";
    }

    return 0;
}