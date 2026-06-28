// Problem: Sum of Highest and Lowest Frequency
// Source: TUF+ - Basic Hashing
// Status: Solved

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        int maxCount = 0, minCount = nums.size();
        for(auto j : freq){
            maxCount = max(j.second, maxCount);
            minCount = min(j.second, minCount);
        }
        return maxCount + minCount;
    }
};