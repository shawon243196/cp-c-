#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Convert a single character (0–9, A–Z) to its numeric value
int charToValue(char c) {
    if (isdigit(c)) return c - '0';
    return toupper(c) - 'A' + 10;
}

// Convert base-X string to decimal
long long baseXToDecimal(const string& n, int base) {
    long long result = 0;
    for (char c : n) {
        result = result * base + charToValue(c);
    }
    return result;
}

// Convert decimal number to base-X string
string decimalToBaseX(long long n, int base) {
    if (n == 0) return "0";
    string result;
    while (n > 0) {
        int rem = n % base;
        if (rem < 10) result += (rem + '0');
        else result += (rem - 10 + 'A');
        n /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int T, X;
    cin >> T;

    if (T == 1) {
        string N;
        cin >> N >> X;
        cout << baseXToDecimal(N, X) << "\n";
    } else if (T == 2) {
        long long N;
        cin >> N >> X;
        cout << decimalToBaseX(N, X) << "\n";
    }

    return 0;
}
