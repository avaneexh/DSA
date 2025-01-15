#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        
        while (arr[j] > pivot && j >= low +1)
        {
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);      

    }
    swap(arr[low], arr[j]);
    return j;

}


void qs(vector<int> &arr, int low, int high)
{
    if(low < high){
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickShort(vector<int> &arr)
{
    qs(arr, 0, arr.size()-1);
    return arr;
}


int main(){

     vector<int> arr = {3, 1, 2, 4, 1, 5, 6, 2, 4,64,22,92,124,0,0};

      int n = arr.size(); 

    quickShort(arr);
    for(auto it : arr)
    cout<< it<<" ";

    return 0;
}