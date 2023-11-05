#include <iostream>
#include <vector>
using namespace std;

int idleElement(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        if (start == end) {
            return arr[start];
        }
        int mid = start + (end - start) / 2;
        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) {
                start = mid + 2;
            } else {
                end = mid;
            }
        } else {
            if (arr[mid] == arr[mid - 1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1; // No idle element found
}

int main() {
    vector<int> arr{1, 1, 2, 3, 3, 4, 4};
    int answer = idleElement(arr);
    cout << "Index of idle elment is " << answer << endl;
    cout << "idle elment is " << arr[answer] << endl;

}
