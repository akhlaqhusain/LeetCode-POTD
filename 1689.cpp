/*
    1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
    Date : 01-03-2026
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int minPartitions(string n) {
        int mx = 0;
        for(int i=0;i<n.size();i++){
            mx = max(mx,(n[i]-'0'));
        }
        return mx;
    }
};

int main(){
    Solution sl;
    string test;cin>>test;
    cout<<sl.minPartitions(test)<<endl;
    return 0;
}