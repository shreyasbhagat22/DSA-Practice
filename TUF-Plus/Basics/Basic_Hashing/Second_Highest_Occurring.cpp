// Problem: Second Highest Occurring Element
// Source: TUF+ - Basic Hashing
// Status: Solved

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        int maxFirst = 0, maxFirstEl = -1;
        int maxSecond = 0, maxSecondEl = -1;
        for(auto j : freq){
            if(j.second > maxFirst){
                maxSecond = maxFirst;
                maxSecondEl = maxFirstEl;
                maxFirst = j.second;
                maxFirstEl = j.first;
            }
            else if(j.second == maxFirst){
                maxFirstEl = min(j.first, maxFirstEl);
            }
            else if(j.second > maxSecond){
                maxSecond = j.second;
                maxSecondEl = j.first;
            }
            else if(j.second == maxSecond){
                maxSecondEl = min(j.first, maxSecondEl);
            }
        }
        return maxSecondEl;
    }
};