#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    static int largestElement(vector<int>& nums) {
        int largest=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest) largest=nums[i];
        }
        return largest;

    }
};

int main (){
    vector<int>arr={2,3,4,9,5};
    cout<<"Largest Element is : ";
    cout<<Solution::largestElement(arr)<<endl;
    return 0;
} 

