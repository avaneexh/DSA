#include<iostream>

using namespace std;

void PrintUsingRecursion(int n){
    
    if (n==0)
    {
        return;
    }
     
    cout<<n <<" ";

    PrintUsingRecursion(--n );

}

int main(){

    PrintUsingRecursion(6);


    return 0;
}