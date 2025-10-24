#include <iostream>
#include <set>
#include<vector>
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

void findUnionUsingTwoPointer(int arr1[], int n, int arr2[], int m) {
    vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr2[j])
                unionArr.push_back(arr2[j]);
            j++;
        } else { 
            if (unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n) {
        if (unionArr.empty() || unionArr.back() != arr1[i])
            unionArr.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        if (unionArr.empty() || unionArr.back() != arr2[j])
            unionArr.push_back(arr2[j]);
        j++;
    }

    cout << "Union of arrays using two pointers: ";
    for (int num : unionArr) {
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
    findUnionUsingTwoPointer(arr1, n, arr2, m);

    return 0;
}
