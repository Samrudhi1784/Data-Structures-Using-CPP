
//////Problem Statement: Second largest element in array


#include <iostream>
using namespace std;

int main()
 {
    int n;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    // If array has less than 2 elements, second largest doesn't exist
    if (n < 2) {
        cout << "Second largest element: -1" << endl;
        return 0;
    }

    int arr[n];

    // Input elements of array
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize largest and second largest as the minimum possible values
    int largest = arr[0], secondLargest = -1;

    // Loop through the array to find the largest and second largest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Output result: if second largest doesn't exist, return -1
    cout << "Second largest element of an array: " << (secondLargest == -1 ? -1 : secondLargest) << endl;

    return 0;
}
