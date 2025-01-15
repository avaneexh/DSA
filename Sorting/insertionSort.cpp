#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j>0; j--){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {14, 9, 15, 12, 6, 8, 0};

    int n = 7;

    insertionSort(arr, n);

    for(auto it : arr )
       cout<<it << " ";

    return 0;
}