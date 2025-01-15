#include <iostream>

using namespace std;

void printName(int i, int n){

    if(i>n) return;

    cout<<"Hello Avaneesh"<<endl;
    printName(i+1, n);

}

int main (){
    
    int n;
    cout<<"enter no of times";
    cin>>n;
    cout<<endl;
    printName(1, n);

    return 0;
}