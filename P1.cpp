

//Problem Statement:Largest element in array



#include <iostream>
using namespace std;

int main() 
{
    int n;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the largest element
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest element
    cout << "Largest element of an array: " << largest << endl;

    return 0;
}