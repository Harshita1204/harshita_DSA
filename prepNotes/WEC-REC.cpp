#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, x, k;
        cin >> n >> x >> k;

        int a[100];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int count = 1;
        int ans = 0;

        for(int i = n - 1; i >= 0; i--) {

            ans++;

            if(i > 0 && a[i] != a[i - 1]) {
                count++;
            }

            if(count > k) {
                ans--;
                break;
            }
        }

        if(ans > x) {
            cout << x << endl;
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}