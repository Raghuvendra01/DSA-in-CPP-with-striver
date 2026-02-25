#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    static int secondLargestElement(vector<int>& nums) {
        int large_ele=INT_MIN;
        int second_large_ele=-1;
        if(nums.size()<2) return -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>large_ele){
                second_large_ele=large_ele;
                large_ele=nums[i];
            }
            else if(nums[i]>second_large_ele && nums[i]!=large_ele) second_large_ele=nums[i];
        }
        return second_large_ele==INT_MIN?-1: second_large_ele;
    }
};

int main(){
   vector<int> arr={3,3,9,8};
   cout<<"Second Largest Element is : "<<Solution::secondLargestElement(arr)<<endl;
}