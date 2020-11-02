/* Running Sum of 1D Array-Easy
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]

*/

// Solution 1 
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(nums.begin(),nums.end(),nums.begin());
        return nums;
        
    }
};

//Solution 2
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        //vector<int> prefixSum;
        for(int i=1;i<size;i++)
        {
            nums[i] = nums[i-1] + nums[i];
        }
        return nums;
        
    }
};