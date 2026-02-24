#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>&arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
}

int main(){
    vector<int>arr={5,8,2,3,0};
    cout<<LinearSearch(arr,0)<<endl;
    return 0;
}