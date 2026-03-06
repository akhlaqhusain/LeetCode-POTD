/*
    1784. Check if Binary String Has at Most One Segment of Ones
    Date : 06-03-2026
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        bool flag = false;
        int cnt1 = count(s.begin(),s.end(),'1');
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                flag = true;
                cnt1--;
            }else{
                if(flag){
                    break;
                }
            }
        }
        return cnt1==0;
    }
};