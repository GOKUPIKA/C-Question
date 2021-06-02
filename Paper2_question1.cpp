//Write a program to print all the LEADERS in the array.
// An element is leader if it is greater than all the elements to its right side.
// And the rightmost element is always a leader.
//  For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.


#include<iostream>
#include<vector>
using namespace std;

//Brute force approaach 
//Time Compexitity: O(n*n)
void firstApproach(int n, int arr[]){
    vector<int>v;
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
           if(arr[i]<=arr[j]){
               break;
           }           
        }
        if(j==n){
            cout<<arr[i]<<" ";
        }
    }
}

//Second approach : single iteration 
// Time complexity: O(n)
vector<int> secondApproach(int n, int arr[]){
    int answer=arr[n-1];
    vector<int>v;
    v.push_back(answer);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>answer){
            answer=arr[i];
            v.push_back(answer);
        }
    }
    return v;
}

int main()
{
    cout<<"enter the size of array: ";
    int n=6;
    int arr[]={6,17,4,3,5,2};

    //calling first fucntion
    firstApproach(n,arr);

    //calling second approach
    vector<int>ans= secondApproach(n,arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
