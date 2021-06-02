// Q2. Find duplicates in O(n) time and O(1) extra space.

// Given an array of n elements that contains elements from 0 to n-1, 
// with any of these numbers appearing any number of times.
// Find these repeating numbers in O(n) and using only constant memory space.


#include <bits/stdc++.h>
using namespace std;

int main()
{

	int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
	int arr_size = sizeof(numRay) / sizeof(numRay[0]);


	// COUNT THE FREQUENCY
	for (int i = 0; i < arr_size; i++) {
		numRay[numRay[i] % arr_size]
			= numRay[numRay[i] % arr_size] + arr_size;
	}
	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < arr_size; i++) {
		if (numRay[i] >= arr_size * 2) {
			cout << i << " " << endl;
		}
	}
	return 0;
}
