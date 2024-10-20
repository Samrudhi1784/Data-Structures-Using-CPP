////Problem Statement:Find the missing number

#include <iostream>
using namespace std;

int findMissingNumber(int nums[], int n)
 {
    int totalSum = n * (n + 1) / 2;  // Sum from 0 to n
    int actualSum = 0;

    // Calculate the sum of the array
    for (int i = 0; i < n; i++)
    {
        actualSum += nums[i];
    }

    // The missing number is the difference
    return totalSum - actualSum;
}

int main()
{
    int n;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[n];

    // Input array elements
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Find and output the missing number
    cout << "The missing number is: " << findMissingNumber(nums, n) << endl;

    return 0;
}
