#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n < 5) {
        cout << -1 << endl;
        return;
    }

    // 1. Print all odd numbers except 5
    for (int i = 1; i <= n; i += 2) {
        if (i != 5) cout << i << " ";
    }

    // 2. The Bridge: 5 (odd) and 4 (even) sum to 9 (composite)
    cout << 5 << " " << 4 << " ";

    // 3. Print all even numbers except 4
    for (int i = 2; i <= n; i += 2) {
        if (i != 4) cout << i << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}