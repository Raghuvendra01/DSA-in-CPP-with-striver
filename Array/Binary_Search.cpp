#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>&arr,int target){
   int low=0,high=arr.size()-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) low=mid+1;
    else high=mid-1;
   } 
   return -1;
}

int main (){
    vector<int>arr={2,9,3,4,6};
    cout<<binary_search(arr,4);
    return 0;
}

