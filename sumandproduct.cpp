#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];   // create array of given size

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum of array elements: " << sum << endl;
    cout << "Product of array elements: " << product << endl;

    return 0;
}
