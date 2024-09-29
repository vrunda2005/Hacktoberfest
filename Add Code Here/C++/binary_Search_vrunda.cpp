//binary search code 


#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int low, int high, int x) 
{ 
  
    if (high >= low) { 
        // Calculate the middle index to divide the search 
        // space in half 
        int mid = low + (high - low) / 2; 

        // found the element, return its index 
        if (arr[mid] == x) 
            return mid; 
  
        // in the left half of the array 
        if (arr[mid] > x) 
            return binarySearch(arr, low, mid - 1, x); 
  
        // the right half of the array 
        return binarySearch(arr, mid + 1, high, x); 
    } 
  
    return -1; 
} 

int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
  
   
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) 
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result; 
  
    return 0; 
}
