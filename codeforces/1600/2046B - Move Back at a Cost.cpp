#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<int> kept, moved;
        int sufMin = INT_MAX;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] <= sufMin) {
                kept.push_back(a[i]);
                sufMin = a[i];
            } else {
                moved.push_back(a[i] + 1);
            }
        }
        reverse(kept.begin(), kept.end());

        int mn = moved.empty() ? INT_MAX : *min_element(moved.begin(), moved.end());

        vector<int> res;
        for (int x : kept) {
            if (x > mn) moved.push_back(x + 1);
            else res.push_back(x);
        }
        sort(moved.begin(), moved.end());
        for (int x : moved) res.push_back(x);

        for (int x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}