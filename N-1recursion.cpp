#include<iostream>
using namespace std;
void printN(int n) {
    if (n == 0 ){
        return 1;
    }
    return print(n - 1);}

    // Nfactorial using recursion 

    int factorial(int n ) {
        if(n == 0) {
            return 1;
        } return n * factorial(n-1);
    }

    int main() {
        cout << factorial(100) << endl;
        return 0;
    }

// sum of n numbers using recursion
int sum(int n){
    if(n == 1) {
        return 1;
    }
    return n = sum(n-1);
}
int main() {
    cout << sum(16) << endl;
    return 0; 
}