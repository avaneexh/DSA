#include<iostream>

using namespace std;

void linearSearch(int arr[], int n, int x){
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            cout << "Element found at index " << i << endl;
            return;
        }
    }

    cout<<"Element not found ";
    return;
}

int main(){
    int arr[] = {2,4,2,5,6,73,3};

    linearSearch(arr, sizeof(arr)/sizeof(arr[0]), 2);

    return 0;

}