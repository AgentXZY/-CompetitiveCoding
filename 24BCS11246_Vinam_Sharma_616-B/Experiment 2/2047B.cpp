#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    if (n == 1) {
        cout << s << endl;
        return;
    }

    map<char, int> freq;
    for (char c : s) freq[c]++;

    char mn_char = s[0], mx_char = s[0];
    int mn_val = 1e9, mx_val = -1;

    for (auto const& [ch, count] : freq) {
        if (count >= mx_val) {
            mx_val = count;
            mx_char = ch;
        }
        if (count <= mn_val) {
            mn_val = count;
            mn_char = ch;
        }
    }

    if (mn_char == mx_char) {
        for (auto const& [ch, count] : freq) {
            if (ch != mx_char) { mn_char = ch; break; }
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == mn_char) {
            s[i] = mx_char;
            break;
        }
    }

    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}