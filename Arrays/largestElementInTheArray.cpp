 #include<iostream>
 #include<vector>

using namespace std;

void largestElement(int arr[], int n){
    int largest = arr[0];
    
    while (n--)
    {
        if (largest < arr[n])
        {
            largest = arr[n];
        }
        
    }

    cout<<"The largest element in the array is " << largest;
    
}

int main() {
    int arr[] = {3, 2, 1, 5, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    largestElement(arr, n);

    return 0 ;

}