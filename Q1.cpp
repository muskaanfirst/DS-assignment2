#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0,
    int right = n - 1;
    while (left <= right) {
        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            left = mid + 1; 
        else
            right = mid - 1; 
    }
    return -1; 
}

int main() {
    int arr[] = {11, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int result = binarySearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
