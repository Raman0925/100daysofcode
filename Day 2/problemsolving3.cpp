//Squareroot of a number using Binary Search
#include <iostream>
using namespace std;

int squareRoot(int n) {
    int target = n;
    int start = 0, end = n;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid > target / mid) {
            end = mid - 1;
        } else if (mid * mid <= target) {
            ans = mid;
            start = mid + 1;
        } else {
            return mid;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int ans = squareRoot(n);
    cout << "Square root of " << n << " is " << ans << endl;

    return 0;
}
