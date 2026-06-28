// Problem: Highest Occurring Element
// Source: TUF+ - Basic Hashing
// Status: Solved

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        int maxCount = 0, el = -1;
        for(auto j : freq){
            if(j.second > maxCount){
                maxCount = j.second;
                el = j.first;
            }
            else if(j.second == maxCount){
                el = min(j.first, el);
            }
        }
        return el;
    }
};