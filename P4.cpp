
///Problem Statement:Remove Duplicates from sorted array 


#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int n) 
{
    if (n == 0) return 0;  // If array is empty, return 0

    int uniqueCount = 1;  // First element is always unique

    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[uniqueCount - 1]) 
        {  // Check for unique element
            nums[uniqueCount] = nums[i]; 
            uniqueCount++;
        }
    }

    return uniqueCount;  // Return number of unique elements
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

    // Call the function to remove duplicates
    int uniqueCount = removeDuplicates(nums, n);

    // Output number of unique elements
    cout << "Number of unique elements: " << uniqueCount << endl;

    // Output unique elements
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
