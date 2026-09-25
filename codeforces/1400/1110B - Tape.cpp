#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> gap;

    for(int i = 0; i < n - 1; i++)
        gap.push_back(b[i + 1] - b[i] - 1);

    sort(gap.begin(), gap.end());

    int ans = n;

    for(int i = 0; i < n - k; i++)
        ans += gap[i];

    cout << ans << endl;
}