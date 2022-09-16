#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int> v)
{
    int s = 0;
    int l = v.size()-1;
    int mid = (s + l) / 2;
    int index = 0;
    while (s <= l)
    {
        if ((v[mid] < v[mid - 1]) && (v[mid] < v[mid + 1]))
        {

            index = mid;
            return index;
        }
        else if (v[mid] > v[0])
        {
            s = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
        mid= (s+l)/2;
    }
    
    return index;
}

bool bSearch(vector<int>& v, int start, int end, int k){
    int s=start;
    int e=end;
    int mid= (s+e)/e;
    while (s<=e)
    {
        if (v[mid]==k)
        {
           return true;
        }
        else if(k>v[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return false;
}

bool isPresent(vector<int> &v,int k){
    int s= 0;
    int e= v.size()-1;
    int pivot=getPivot(v);
    if (k>=v[pivot] && k<=v[e])
    {
        if( bSearch(v,pivot,e, k)){
            return true;
        }
    }else{
        if( bSearch(v,0,pivot-1, k)){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<getPivot(v);
    cout<<isPresent(v,2);
    return 0;
}