//Find the smallest and second smallest elements in an array

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n; //decalring the size 
    
    int min=INT_MAX;
    int secondMin=INT_MAX;

    cout<<"Enter array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    //filling the array
    }
        
    if(n==0){
        return -1;
    }

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            secondMin=min;
            min=arr[i];            
        }  
        else if(arr[i]<secondMin && arr[i]!=min){
            secondMin=arr[i];        
        }      
    }
    
    cout<<"Minimum Number: "<<min<<endl;
    cout<<"Second Minimum Number: "<<secondMin<<endl;
}
