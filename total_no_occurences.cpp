#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> arr, int size, int k){
    int first=0;
    int last= size-1;
    int ans=0;
    int mid= (first+ last)/2;
    while (first<= last)
    {
        if (arr[mid]==k)
        {
            ans= mid;
            last= mid-1;
        }
        else if (k> arr[mid])
        {
            first= mid+1;
        }
        else{
            last= mid-1;
        }
        mid= (first+last)/2;
    }
    return ans;
}

int lastOccurence(vector<int> v, int size, int k){
    int start= 0;
    int last = size-1;
    int ans=0;
    int mid= (start+ last)/2;
    while (start<= last)
    {
        if(v[mid]==k){
            ans= mid;
            start= mid+1;
        }
        else if (k > v[mid])
        {
            start=mid+1;
        }else{
            last = mid-1;
        }
        mid= (start+last)/2;

    }
    return ans;
}


int main(){
    vector<int> a;
    a.push_back(0);
    a.push_back(0);
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);
    cout<<firstOccurence(a,5,1)<<endl;

    cout<<lastOccurence(a,5,1)<<endl;
    int count=lastOccurence(a,5,1)- firstOccurence(a,5,1)+1;

    cout<<"Total no of elements "<<count<<endl;

    return 0;
}