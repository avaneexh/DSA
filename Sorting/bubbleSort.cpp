 #include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){
  for(int i=n-1; i>=0; i--){
    for(int j=0; j<=i-1; j++){
        if(arr[j] > arr[j+1] ){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;

        }
    }
  }

}

int main(){
    
    int arr[] = {13, 46, 24, 52, 20, 9};

    bubbleSort(arr, 6); 
    
    for(auto it : arr)
     cout<< it<<" ";
    return 0;

}