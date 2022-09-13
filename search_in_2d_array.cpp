#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // bool bSearch(vector<int> v,int k){
    //     int start=0;
    //     int last= v.size();
    //     int mid=(start+last)/2;
    //     while(start<= last){
    //         if(v[mid]==k){
    //             return true;
    //         }
    //         else if(k> v[mid]){
    //             start= mid+1;
    //         }else{
    //             last= mid-1;
    //         }
    //         mid= (start+last)/2;
    //     }
    //     return false;
    // }
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        //     for(int i=0; i<= matrix.size()-1; i++){
        //         if(bSearch(matrix[i],target)){
        //             return true;
        //         }
        //     }
        //     return false;
        // }
        // int i=0, j=matrix[0].size()-1;
        // while(i<matrix.size() && j>=0){
        //     if(matrix[i][j]==target){
        //         return true;
        //     }
        //     else if(matrix[i][j]>target){
        //         j--;
        //     }else {
        //         i++;
        //     }
        // }
        // return false;

        // best optimised approach
        if (matrix.size() == 0)
        {
            return false;
        }
        int n = matrix.size();
        int m = matrix[0].size();

        int lo = 0;
        int hi = (n * m) - 1;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (matrix[mid / m][mid % m] == target)
            {
                return true;
            }
            else if (matrix[mid / m][mid % m] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return false;
    }
};