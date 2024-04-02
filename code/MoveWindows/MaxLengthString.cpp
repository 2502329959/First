//
// Created by jiangcz52855 on 2024/4/2.
//

#include "MaxLengthString.h"
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.length();
        if(len==0) return 0;
        unordered_set<char> charSet;
        int maxLen=0;
        int l=0;
        for(int i=0;i<len;i++){
            while(charSet.find(s[i])!=charSet.end()){
                charSet.erase(s[l]);
                l++;
            }
            maxLen=max(maxLen,i-l+1);
            charSet.insert(s[i]);
        }
        return maxLen;
    }
};