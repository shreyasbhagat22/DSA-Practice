// Problem: Largest Odd Number in a String
// Source: TUF+ - Basic Strings
// Status: Solved

#include<bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        int num = -1;
        for(int i = s.size()-1; i >= 0; i--){
            if((s[i] - '0') % 2 == 1){
                num = i;
                break;
            }
        }
        int i = 0;
        while(i < s.size()){
            if(i <= num && s[i] != '0')
                break;
            i++;
        }
        return s.substr(i, num - i + 1);
    }
};