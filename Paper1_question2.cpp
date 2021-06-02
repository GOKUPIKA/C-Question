// RUNNING MEDIAN INTEGER

#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

priority_queue<int, vi, greater<int>>pqmin;
priority_queue<int,vi>pqmax;

void insert(int x){
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmax.top()){
            pqmax.push(x);
        }
        else{
            pqmin.push(x);
        }
    }

    else{
        {
            // Two possible cases
            // Case1: size of maxHeap > size of minHeap
            // Case2: size of minHeap > size of maxHeap
            
           if(pqmax.size()>pqmin.size()){
               if(x>=pqmax.top()){
                   pqmin.push(x);
               }
               else{
                   int temp=pqmax.top();
                   pqmax.pop();
                   pqmin.push(temp);
                   pqmax.push(x);
               }
           }
           else{
               if(x<=pqmin.top()){
                   pqmax.push(x);
               }
               else{
                   int temp=pqmin.top();
                   pqmin.pop();
                   pqmax.push(temp);
                   pqmin.push(x);
               }
           }
        }

    }
}

double median(){
    if(pqmin.size()==pqmax.size()){
        return (pqmin.top()+pqmax.top())/2.0;
    }
    else if(pqmin.size()>pqmax.size()){
        return pqmin.top();
    }
    else{
        return pqmax.top();
    }
}

int main()
{
    insert(10);
    cout<<median()<<endl;
    insert(15);
    cout<<median()<<endl;
    insert(21);
    cout<<median()<<endl;
    insert(30);
    cout<<median()<<endl;
    insert(18);
    cout<<median()<<endl;
    insert(19);
    cout<<median()<<endl;

    return 0;
}

*/