// Find the minimum distance between two numbers.

// Given an unsorted array arr[] and two numbers x and y, find the minimum distance between x and y in arr[].
// The array might also contain duplicates. You may assume that both x and y are different and present in arr[].


#include <bits/stdc++.h>
using namespace std;

int minDist(int arr[], int n, int x, int y){

	int p = -1, min_dist = INT_MAX;
	
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]==x || arr[i]==y)
		{
			if( p != -1 && arr[i] != arr[p])
				min_dist = min(min_dist , i-p);
						
			p=i;
		}
	}
	//If distance is equal to int max
	if(min_dist==INT_MAX)
		return -1;

	return min_dist;
}

//MAIN CODE
int main()
{
	int arr[] = {3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 3;
	int y = 6;

	cout << "Minimum distance between " << x <<
						" and " << y << " is "<<
						minDist(arr, n, x, y) << endl;
	return 0;
}
