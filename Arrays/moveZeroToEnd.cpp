#include<iostream>

using namespace std;

void moveZeroToEnd(int arr[], int n ){
    int j=-1;
    for (int  i = 0; i<n; i++){
        if (arr[i] == 0)        
        {
            j=i;
            break;
        }
               
    }
    for(int i = j+1; i<n; i++){
        if (arr[i] !=0){
            swap(arr[i], arr[j]);
            j++;
            
        }

    }

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}

int main(){

    int arr[] = {0,0,0,1,0,2,3,2,0,0,4,5,1};

    moveZeroToEnd(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;

}