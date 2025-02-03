#include <iostream>
#include <set>
using namespace std;

void findUnion(int arr1[], int n, int arr2[], int m) {
    set<int> unionSet;

    // Insert elements of arr1 into the set
    for (int i = 0; i < n; i++) {
        unionSet.insert(arr1[i]);
    }

    // Insert elements of arr2 into the set
    for (int i = 0; i < m; i++) {
        unionSet.insert(arr2[i]);
    }

    // Display the union
    cout << "Union of arrays: ";
    for (int num : unionSet) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, n, arr2, m);

    return 0;
}
