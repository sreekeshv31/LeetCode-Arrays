/*

Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.

Input: nums = [1,2,3]
Output: 0

*/


/*Explanation
count the occurrence of the same elements.
For each new element a,
there will be more count[a] pairs,
with A[i] == A[j] and i < j


Complexity
Time O(N)
Space O(N) */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        unordered_map<int,int> count;
        for(auto a : nums)
        {
            res+=count[a]++;
        }
        return res;
        
    }
};