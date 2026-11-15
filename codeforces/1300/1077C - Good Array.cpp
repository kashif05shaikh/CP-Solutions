#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> counts(1e6 + 1, 0);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counts[a[i]]++;
        sum += a[i];
    }

    vector<int> answers;

    for (int i = 0; i < n; i++) {
        int newSum = sum - a[i];
        counts[a[i]]--;

        if (newSum % 2 == 0 && (newSum / 2) <= 1e6 && counts[newSum / 2] > 0) {
            answers.push_back(i + 1);
        }

        counts[a[i]]++;
    }

    cout << answers.size() << endl;

    for (int i : answers) cout << i << " ";
    cout << endl;
}