#include <bits/stdc++.h>
using namespace std;

string numberToColumn(int n) {
    string result = "";
    
    while (n > 0) {
        n--;  // convert to 0-based
        int rem = n % 26;
        result += char('A' + rem);
        n /= 26;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << numberToColumn(n);
    return 0;
}
