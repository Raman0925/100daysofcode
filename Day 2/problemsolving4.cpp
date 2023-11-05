#include <iostream>
#include <iomanip>
using namespace std;

double squareRoot(double n, double epsilon = 1e-6) {
    double start = 0.0;
    double end = n;
    double mid;
    
    while ((end - start) > epsilon) {
        mid = (start + end) / 2;
        if (mid * mid > n) {
            end = mid;
        } else {
            start = mid;
        }
    }

    return mid;
}

int main() {
    double n;
    cout << "Enter a decimal number: " << endl;
    cin >> n;

    double ans = squareRoot(n);
    cout << fixed << setprecision(6); // Set precision for output
    cout << "Square root of " << n << " is " << ans << endl;

    return 0;
}
