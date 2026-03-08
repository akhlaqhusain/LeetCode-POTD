/*
    1980. Find Unique Binary String
    Date : 08-03-2026
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans(nums.size(),'0');
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            string temp = nums[i];
            int num = 0;
            for(int j=temp.size()-1;j>=0;j--){
                if(temp[j]=='1'){
                    num += pow(2,temp.size()-j-1);
                }
            }
            mp[num]++;
        }
        for(int i=0;i<100021;i++){
            int j=nums.size()-1;
            if(mp[i]==0){
                cout<<i<<endl;
                while(i>0){
                    if(i&1){
                        ans[j] = '1';
                    }else{
                        ans[j] = '0';
                    }
                    i = i/2;
                    j--;
                }
                break;
            }
        }
        return ans;
    }
};