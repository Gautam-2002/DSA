#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid= start +(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int a[7]={10,20,40,70,110,190,210};
    int size=sizeof(a)/sizeof(a[0]);
    
    cout<<binarySearch(a,size,180);
    return 0;
}