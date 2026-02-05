#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1) {
        cout << s << '\n';
        return;
    }
    vector<int> cnt(26);
    for (char ch : s) {
        cnt[ch - 'a']++;
    }
    char best = s[0];
    int bestCnt = cnt[best - 'a'];
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > bestCnt) {
            bestCnt = cnt[i];
            best = char('a' + i);
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] != best) {
            s[i] = best;
            break;
        }
    }
    cout << s << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
