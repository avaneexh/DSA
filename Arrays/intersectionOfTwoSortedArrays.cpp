#include <iostream>
#include <vector>

using namespace std;



int main() {
    int arr1[] = {1, 2, 2, 3, 3, 4, 5, 6};
    int arr2[] = {2, 3, 3, 4, 5, 6, 6  };
    vector<int> ans;

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);


    int i = 0;
    int j = 0;

    while (i < m && j < n){
        if(arr1[i] < arr2[j]){
            i++;
        }else if (arr2[j] < arr1[i]){
            j++;
        }else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for (int it : ans){
        cout<< it << " ";
    }

    return 0;
}
