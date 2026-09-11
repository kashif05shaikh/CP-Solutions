#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        set<char> s;

        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
            s.insert(x[0] - 'a' + 'A');
        }

        vector<string> a(m);

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        vector<bool> done(m, false);
        int cnt = 0;

        while (true) {
            bool progress = false;

            for (int i = 0; i < m; i++) {
                if (done[i])
                    continue;

                bool ok = true;

                for (char c : a[i]) {
                    if (!s.count(c)) {
                        ok = false;
                        break;
                    }
                }

                if (ok) {
                    done[i] = true;
                    cnt++;
                    s.insert(a[i][0]);
                    progress = true;
                }
            }

            if (!progress)
                break;
        }

        if (cnt == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}