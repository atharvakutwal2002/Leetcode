#include <bits/stdc++.h>
using namespace std;

int firstOcuurence(vector<int> v, int size, int k)
{
    int first = 0;
    int ans=-1;
    int last = size-1;
    int mid = (first + last) / 2;
    while (first <= last)
    {
        if (v[mid] == k)
        {
            ans= mid;
            last=mid-1;
        }
        else if (k > v[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
        mid = (first + last) / 2;
    }
    return ans;
}

int lastOccurence(vector<int> v, int size, int k){
    int first= 0;
    int last= size-1;
    int mid= (first+ last)/2;
    int ans=-1;
    while (first<= last)
    {
        if (v[mid]==k)
        {
            ans= mid;
            first= mid+1;
        }else if (k>v[mid])
        {
            first=mid+1;
        }else{
            last= mid-1;
        }
        
        mid= (first+last)/2;
    }
    return ans;
    
}

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout<<"The first occurence of 1 is "<<firstOcuurence(v,6, 1)<<endl;
    cout<<"The last occurence of 1 is "<<lastOccurence(v,6, 1)<<endl;

    return 0;
}