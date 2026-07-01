// Problem: Isomorphic String
// Source: TUF+ - Basic Strings
// Status: Solved

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
    	int first[256] = {0}, second[256] = {0};
        for(int i = 0; i < s.size(); i++){
            if(first[s[i]] != second[t[i]])
                return false;
            first[s[i]] = i + 1;
            second[t[i]] = i + 1;
        }
        return true;
    }
};