/*
    1758. Minimum Changes To Make Alternating Binary String
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int cnt1 = 0,cnt2 = 0;
        string t1,t2;
        for(int i=0;i<n;i++){
            if(i&1){
                t1.push_back('0');
                t2.push_back('1');
            }else{
                t1.push_back('1');
                t2.push_back('0');
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]!=t1[i]){
                cnt1++;
            }
            if(s[i]!=t2[i]){
                cnt2++;
            }
        }
        return min(cnt1,cnt2);
    }
};