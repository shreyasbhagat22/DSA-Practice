// Problem: Longest Common Prefix
// Source: TUF+ - Basic Strings
// Status: Solved

#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:
	string longestCommonPrefix(vector<string>& str){
		if(str.empty()) return "";
        sort(str.begin(), str.end());
        string first = str[0];
        string last = str[str.size() - 1];
        int minlenght = min(last.size(), first.size());
        string ans = "";
        for(int i = 0; i < minlenght; i++){
            if(first[i] != last[i])
                return ans;
            ans += first[i];
        }
        return ans;
	}
};