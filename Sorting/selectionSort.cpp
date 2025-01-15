#include<iostream>

using namespace std;

void selectionSort(int arr[], int n){
  
     int min=0;
      for(int i=0; i<n; i++){
        min=i;
        for(int j=i; j<n; j++){
            if (arr[j] < arr[min]) min=j;
        }
        swap(arr[i], arr[min]);
    }

}

int main(){

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;

    // for(int i=0; i<6; i++){
    //     min=i;
    //     for(int j=i; j<6; j++){
    //         if (arr[j] < arr[min]) min=j;
    //     }
    //     swap(arr[i], arr[min]); 
    // }

    selectionSort(arr, n);

    for(int i=0; i<n; i++ )
     cout << arr[i] << " ";

    return 0;
}