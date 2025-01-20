#include<iostream>

using namespace std;

void removeDuplicate(int arr[], int n){

    int j = 0;
    for(int i = 0; i<n; i++){
        if(arr[j] != arr[i]  ){
            arr[j+1] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout<< arr[i]<< " ";
    }
    
}

int main(){

    int arr[] = {1,2,2,3,4,4,5,5,7,7,8,8,9,9};

    removeDuplicate(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
    
}

