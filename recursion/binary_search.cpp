#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key){
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == key){
            return mid;
        }
        
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > key){
            return binarySearch(arr, l, mid-1, key);
        }
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, key);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}
  
int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int key = 10;
    int n = sizeof(arr)/sizeof(int);
    int result = binarySearch(arr, 0, n-1, key);
    if(result == -1){
        cout << "Element is not present in array"<<endl;
    }
    else{
        cout << "Element is present at index " << result;
    }
    return 0;
}