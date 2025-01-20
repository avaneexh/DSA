#include<iostream>

using namespace std;


void secondLargest(int arr[], int n){

    int largest = arr[0];
    int Slargest = -1;

    while (n--)
    {
        if (largest < arr[n])
        {
            Slargest = largest;
            largest = arr[n]; 
        }
        if (Slargest < arr[n] && arr[n] < largest)
            {
               Slargest = arr[n];
            }
        
    }
    
    cout<<"The largest element in the array is "<< largest<<endl;
    cout<<"Second largest in the array is " << Slargest;
    

}



int main(){

    int arr[] = {1,2,4,7,7,5,6,2,9};

    secondLargest(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;


}