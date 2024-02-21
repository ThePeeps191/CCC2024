#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double t[3][3];
    cin >> n;
    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) cin >> t[i][j];
    }
    int ans = 0;
    if (t[0][0] == t[0][1] == t[1][0] == t[1][1]) ans = 4;
    else if ((t[0][0] + t[0][1]) / 2 == t[1][0] && t[1][0] == t[1][1]) ans = 3;
    else if ((t[0][0] + t[0][1]) / 2 == t[1][0] && t[1][0] == t[1][1]) ans = 3;
    else if ((t[0][0] + t[1][0]) / 2 == t[0][1] && t[0][1] == t[1][1]) ans = 3;
    else if ((t[1][1] + t[0][1]) / 2 == t[0][0] && t[0][0] == t[1][0]) ans = 3;
    else if ((t[1][1] + t[1][0]) / 2 == t[0][0] && t[0][0] == t[0][1]) ans = 3;
    else if ((t[0][0] + t[0][1]) / 2 == (t[1][0] + t[1][1] / 2)) ans = 2;
    else if ((t[0][0] + t[1][0]) / 2 == (t[0][1] + t[1][1] / 2)) ans = 2;
    else if ((t[0][0] + t[1][0] + t[0][1]) / 3 == t[1][1]) ans = 2;
    else if ((t[0][1] + t[1][0] + t[1][1]) / 3 == t[0][0]) ans = 2;
    else if ((t[0][0] + t[1][0] + t[1][1]) / 3 == t[0][1]) ans = 2;
    else if ((t[1][1] + t[0][0] + t[0][1]) / 3 == t[1][0]) ans = 2;
    else ans = 1;
    cout << ans << endl;
}
