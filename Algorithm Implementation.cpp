#include <iostream>

using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // If target is not present in array
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " sorted numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    int index = binarySearch(arr, n, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}