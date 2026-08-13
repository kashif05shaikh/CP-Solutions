#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int p1 = 0, p2 = 0;
    int maxLead = 0;
    int winner = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p1 += a;
        p2 += b;
        int lead = abs(p1 - p2);
        if (lead > maxLead) {
            maxLead = lead;
            if (p1 > p2)
                winner = 1;
            else
                winner = 2;
        }
    }
    cout << winner << " " << maxLead << '\n';
    return 0;
}