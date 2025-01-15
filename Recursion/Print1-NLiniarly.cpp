#include <iostream>

using namespace std;

void printNumbers(int i, int n){
    if(n < i) return;
    cout<<n<<"  ";
    printNumbers(i, n-1);
}

int main(){

    printNumbers(1, 7);

}