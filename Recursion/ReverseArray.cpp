#include<iostream>
#include<vector>

using namespace std;
void reverseArray(vector<int>& v, int l, int r){

    if(l>=r) return;

    swap(v[l], v[r]);

    reverseArray(v, l+1, r-1);

}
int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    // v.push_back(18);
    // v.push_back(16);
    // v.push_back(12);
    // v.push_back(14);
    // v.push_back(14);
    // v.push_back(13);
    // v.push_back(12);

    reverseArray(v, 0, v.size()-1);

    for(int it : v) cout<<it<<" "; 

return 0;
}