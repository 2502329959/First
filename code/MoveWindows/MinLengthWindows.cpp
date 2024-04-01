//
// Created by jiangcz52855 on 2024/4/1.
//

#include "MinLengthWindows.h"
#include <vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=nums.size();
        if(len<=1){
            if(nums[0]>=target){
                return 1;
            }else{
                return 0;
            }
        }
        int l=0,r=0;
        int sum=0;
        int ans=0x7fffffff;
        while(r<len){
            sum+=nums[r];
            while(sum>=target){
                ans=min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return (ans==0x7fffffff)?0:ans;
    }
};