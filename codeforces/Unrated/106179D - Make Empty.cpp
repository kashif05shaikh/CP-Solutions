#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tstcses;
    cin >> tstcses;

    while (tstcses--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int &x : p) cin >> x;

        int m = n / 2;

        int mxLeft = *max_element(p.begin(), p.begin() + m);
        int mnLeft = *min_element(p.begin(), p.begin() + m);
        int mxRight = *max_element(p.begin() + m, p.end());
        int mnRight = *min_element(p.begin() + m, p.end());

        if (mxLeft < mnRight || mnLeft > mxRight) {
            cout << 1 << '\n';
            cout << n;
            for (int x : p) cout << ' ' << x;
            cout << '\n';
            continue;
        }

        vector<int> op1, op2;

        for (int i = 0; i < m; i++) {
            if (p[i] <= m) op1.push_back(p[i]);
            else op2.push_back(p[i]);
        }

        for (int i = m; i < n; i++) {
            if (p[i] > m) op1.push_back(p[i]);
            else op2.push_back(p[i]);
        }

        cout << 2 << '\n';

        cout << op1.size();
        for (int x : op1) cout << ' ' << x;
        cout << '\n';

        cout << op2.size();
        for (int x : op2) cout << ' ' << x;
        cout << '\n';
    }

    return 0;
}
