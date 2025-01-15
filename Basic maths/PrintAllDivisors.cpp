#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int n) {
    vector<int> list;
    // Loop from 1 to sqrt(n)
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // Check if i is a divisor
            list.push_back(i); // Add i
            if (n / i != i) {  // Add the corresponding divisor n/i if it's not the same
                list.push_back(n / i);
            }
        }
    }
    
    // Sort the divisors
    sort(list.begin(), list.end());
    
    // Print the divisors
    for (auto it : list) 
        cout << it << " ";
}

int main() {
    printDivisors(45); 
    return 0;
}
