#include<bits/stdc++.h>
using namespace std;

bool possibleSol(vector<int> &boards, int k,int mid){
    int sum=0;
    int paintersCount=1;
    for (int i = 0; i < boards.size()-1; i++)
    {
        if((sum+boards[i])<=mid){
            sum+=boards[i];
        }else{
            paintersCount++;
            sum=0;
            if (paintersCount>k || boards[i]> mid)
            {
                return false;
            }
            sum+=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
   int s=0;
   int sum=0;
   for (int i = 0; i < boards.size()-1; i++)
   {
     sum+=boards[i];
   }
   int e=sum;
   int ans;
   int mid= s+(e-s)/2;
   while (s<=e)
   {
     if(possibleSol(boards,  k, mid)){
        ans=mid;
        e=mid-1;
     }else{
        s=mid+1;
     }
     mid= s+(e-s)/2;
   }
   return ans;
   
}