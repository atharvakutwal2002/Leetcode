#include<bits/stdc++.h>
using namespace std;


//recurrsive solution
int lcs(string s1,int i, string s2,int j){
    if (i==s1.size() || j==s2.size())
    {
        return 0;
    }
    
    if (s1[i]==s2[j])
    {
        return 1+ lcs(s1,i+1, s2,j+1);
    }
    return max(lcs(s1,i,s2,j+1),lcs(s1,i+1,s2,j));
}

int largestCommonSubsequence(string test1,string test2){

    return lcs(test1,0,test2,0);
}