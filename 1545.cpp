/*
    1545. Find Kth Bit in Nth Binary String
    Date : 03-03-2026 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    string rec(int n){
        if(n==1){
            return "0";
        }
        string temp = rec(n-1);
        string inverted;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='0')inverted.push_back('1');
            else inverted.push_back('0');
        }
        string ans = temp;
        ans+= "1";
        reverse(inverted.begin(),inverted.end());
        ans+= inverted;
        return ans;
    }
public:
    char findKthBit(int n, int k) {
        string ans = rec(n);
        return ans[k-1];
    }
};