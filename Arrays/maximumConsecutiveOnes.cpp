#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n) {
    int maxCount = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;  // Increase current streak
            maxCount = max(maxCount, count);  // Update max streak
        } else {
            count = 0;  // Reset streak
        }
    }

    return maxCount;
}

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Consecutive Ones: " << findMaxConsecutiveOnes(arr, n) << endl;

    return 0;
}
