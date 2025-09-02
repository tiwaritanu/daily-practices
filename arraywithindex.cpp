#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, -5, 6, -6, 8, 9, 15, -25};
    int size = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }

    cout << "Smallest value: " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest value: " << largest << " at index " << largestIndex << endl;

    return 0;
}
