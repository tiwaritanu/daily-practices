#include<iostream>
using namespace std;
int linearsearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    cout<<linearsearch(arr,size,target)<<endl;
    return 0;
}