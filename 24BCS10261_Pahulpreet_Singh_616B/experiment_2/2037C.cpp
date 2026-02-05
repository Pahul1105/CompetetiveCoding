#include <iostream>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        if (n == 2 || n == 3) {
            cout << -1 << "\n"; 
            continue;
        }
        if (n == 4) {
            cout << "3 1 4 2\n"; 
            continue;
        }
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
