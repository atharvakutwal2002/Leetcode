#include<bits/stdc++.h>
using namespace std;

// DP
//create 2D array 
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

int largestCommonSubsequence(string s1,string s2){

    int m=s1.size();
    int n=s2.size();
    int dp[m+1][n+1];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; i++)
        {
            if (i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if (s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
        
    }
    return dp[0][n];
}

//time complexity o(m*k)
//space complexity o(m*k)