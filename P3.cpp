
//Problem Statement:Check if array is sorted and rotated


#include <iostream>
using namespace std;

bool checkIfSortedAndRotated(int nums[], int n) 
{
    int count = 0;

    // Check how many times the current element is greater than the next one
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    // If the count is more than 1, the array is not sorted and rotated
    return count <= 1;
}

int main() 
{
    int n;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[n];

    // Input elements of array
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }

    // Check if the array is sorted and rotated
    if (checkIfSortedAndRotated(nums, n))
    {
        cout << "True" << endl;
    } 
    else 
    {
        cout << "False" << endl;
    }

    return 0;
}
