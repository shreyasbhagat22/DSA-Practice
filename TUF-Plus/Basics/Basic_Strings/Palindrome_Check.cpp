// Problem: Palindrome_Check
// Source: TUF+ - Basic Strings
// Status: Solved

#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			int left = 0, right = s.size()-1;
            while(left < right){
                swap(s[left], s[right]);
                if(s[left] != s[right])
                    return false;
                left++;
                right--;
            }
            return true;
		}
};