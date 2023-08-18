#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void heapify(vector<int>&arr,int node,int n){
    int leftNode=2*node+1;
    int rightNode=2*node+2;
    int largest=node;
    if(leftNode<n && arr[leftNode]>arr[largest]){
        largest=leftNode;
    }
    if(rightNode<n && arr[rightNode]>arr[largest]){
        largest=rightNode;
    }
    if(largest!=node){
        swap(arr[largest],arr[node]);
        heapify(arr,largest,n);
    }
}

void maxHeapify(vector<int>&arr,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
}
void display(vector<int>&arr){
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>arr={1,2,3,5,9,6,7,0,8};
    display(arr);
    maxHeapify(arr,arr.size());
    display(arr);
    return 0;
}