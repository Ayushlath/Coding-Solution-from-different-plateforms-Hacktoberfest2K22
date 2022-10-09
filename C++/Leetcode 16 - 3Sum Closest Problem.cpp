// Hacktoberfest2022 contribution
//This is solution to the problem number 16 in leetcode 
//where we have to find sum of three distinct numbers closest to given target
//problem 
/*Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.*/

//CODE ( Two Pointer Approach) 
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            int f=i+1,b=nums.size()-1;
            while(f<b){
                int newsum=nums[i]+nums[f]+nums[b];
                if(newsum==target) return target;
                if(abs(target-newsum)<abs(target-closestSum)){
                    closestSum=newsum;
                }
                if(newsum<target){
                    f++;
                }
                else{
                    b--;
                }
            }
        }
        
        return closestSum;
    }
};
//Time Complexity - O(n^2)
//Space Complexity - O(1)
