#include<iostream>

using namespace std;

void isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {  
            cout << "The given array is not sorted." << endl;
            return;
        }
    }
    cout << "The given array is sorted." << endl;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,1};

    isSorted(arr , sizeof(arr)/sizeof(arr[0]) );

    return 0;
}