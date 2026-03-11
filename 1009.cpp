/*
    1009. Complement of Base 10 Integer
    Date : 11-03-2026
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        //now the given number n must have one set bit in its binary representation.
        int t = n;
        int i = 0;
        while(t>0){
            i++;
            t = t>>1;
        }
        int boss = 0;
        for(int j=0;j<i;j++){
            boss += pow(2,j);
        }
        return boss-n;
    }
};