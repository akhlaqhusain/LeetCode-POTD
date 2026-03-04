/*
    1582. Special Positions in a Binary Matrix
    Date : 04-03-2026
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool check(vector<vector<int>>& mat,int x,int y){
        int n = mat.size();
        if(count(mat[x].begin(),mat[x].end(),1)==1){
            int cnt = 0;
            for(int i=0;i<n;i++){
                if(mat[i][y])cnt++;
            }
            if(cnt==1){
                return true;
            }
        }
        return false;
    }
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] && check(mat,i,j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};