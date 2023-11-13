#include<iostream>
using namespace std;

int climbStairs(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}

void findMax(int arr[], int n, int i, int& maxi) {
    if(i >= n) {
        return;
    }
    if(arr[i] > maxi) {
        maxi = arr[i];
    }
    findMax(arr, n, i + 1, maxi);
}

void sequence(int arr[], int n) {
    if(n == 0) {
        return;
    }
    sequence(arr, n - 1);
    cout << arr[n - 1] << " "; // Fixed index to correctly print the sequence
}

bool checkKey(string& str, int i, int& n, char& key) {
    if(i >= n) {
        return false;
    }
    if(str[i] == key) {
        return true;
    }
    return checkKey(str, i + 1, n, key);
}

int main() {
    int ans = climbStairs(3);
    cout << ans << endl;

    int arr[] = {10, 20, 3, 4, 4};
    sequence(arr, 5);
    cout << endl;

    int maxi = INT_MIN;
    findMax(arr, 5, 0, maxi);
    cout << "Max element: " << maxi << endl;

    string str = "lovebabbar";
    int n = str.length();
    char key = 'r';
    int i = 0;
    bool answer = checkKey(str, i, n, key);
    
    if(answer) {
        cout << "Key '" << key << "' found in the string." << endl;
    } else {
        cout << "Key '" << key << "' not found in the string." << endl;
    }

    return 0;
}
