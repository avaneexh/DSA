#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int hi ){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= hi){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=hi){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=hi; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int hi){
    if(low == hi) return;
    int mid = (low+hi)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, hi);
    merge(arr, low, mid, hi);
}

int main(){

     vector<int> arr = {3, 1, 2, 4, 1, 5, 6, 2, 4,64,22,92,124,0,0};

      int n = arr.size(); 

    mergeSort(arr, 0, n-1);
    for(auto it : arr)
    cout<< it<<" ";

    return 0;
}