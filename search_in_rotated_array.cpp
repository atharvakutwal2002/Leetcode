#include<bits/stdc++.h>
using namespace std;

///  linear search is also accepted  o(n)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if( nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};

/// optimised binary search approach o(logn)  space comp is 0(1)
class Solution {
public:
    int search(vector<int>& a, int key) {
        int s = 0;
        int e = a.size() - 1;
        while(s<=e){
            int mid = (s+e)/2;
            if(a[mid] == key){
                return mid;
            }
            
            if(a[s]<=a[mid]){
                if(key>=a[s] && key<=a[mid]){
                    e = mid - 1;
                }else{
                    s = mid + 1;
                }
            } else {
                if(key>=a[mid] && key<=a[e]){
                    s = mid + 1;
                }else{
                    e = mid - 1; 
                }
            }
            
        }
        return -1;
    }
};