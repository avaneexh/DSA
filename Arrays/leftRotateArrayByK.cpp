#include<iostream>
#include<algorithm>

using namespace std;

void BruteLeftRotateByK(int arr[], int n, int k){
    k = k%n; 
    int temp[k];

    for(int i = 0; i<k; i++ ){
        temp[i] = arr[i]; 
    }



    for(int i = k; i<n; i++){
        arr[i-k] = arr[i];
    }
    
    for(int i = n-k; i<n; i++){
        arr[i] = temp[i - (n-k)];
    }

    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void OptimalLeftRotateArrayByK(int arr[], int n, int k){
    k = k%n; 
    reverse(arr, arr+k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);

    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int arr1[] = {1,2,3,4,5,6,7};

  // Array pass by reference hota hai, isliye ek function ke changes dusre function ko affect kar sakte hain.  
  // Alag-alag arrays use karne se dono functions apne input pe alag se kaam karte hain bina conflict ke.  



    BruteLeftRotateByK(arr, sizeof(arr)/sizeof(arr[0]), 17);
    OptimalLeftRotateArrayByK(arr1, sizeof(arr)/sizeof(arr[0]), 17);

    return 0;

}