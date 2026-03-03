/*
    1536. Minimum Swaps to Arrange a Binary Grid
    Date : 02-03-2026
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool check(vector<int> cnt){
        sort(cnt.begin(),cnt.end());
        int n = cnt.size();
        for(int i=n-1;i>=1;i--){
            auto lb = lower_bound(cnt.begin(),cnt.end(),i)-cnt.begin();
            if(lb==cnt.size()){
                return false;
            }else{
                cnt.erase(cnt.begin()+lb);
            }
        }
        return true;
    }
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> cnt(grid.size(),0);
        for(int i=0;i<grid.size();i++){
            for(int j=grid[i].size()-1;j>=0;j--){
                if(grid[i][j]){
                    break;
                }else{
                    cnt[i]++;
                }
            }
        }
        if(!check(cnt)){
            return -1;
        }
        int mn_opn = 0;
        for(auto val:cnt)cout<<val<<" ";cout<<endl;
        for(int i=0;i<cnt.size()-1;i++){
            int mn_value = cnt.size()-1-i;//minimum value for i
            if(cnt[i]<mn_value){
                for(int j=i+1;j<cnt.size();j++){
                    if(cnt[j]>=mn_value){
                        for(int k=j-1;k>=i;k--){
                            mn_opn++;
                            swap(cnt[k],cnt[k+1]);
                        }
                        break;
                    }
                }
            }
        }
        return mn_opn;
    }
};