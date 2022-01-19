#include<bits/stdc++.h>
// #include<vector>////////////////////NOT WORKING ///////////////////////////////////////
using namespace std;

void twosum(vector<int> v1,int target){
    vector<int> v; 
    int i,j;
    int size=v1.length();
    for (int i = 0; i < size-1; i++)
    {
        for (int j =size ; j >0; j--)
        {
            if (a[i]+a[j]==target)
            {
                v.push_back(i,j);
            }
            
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<'[' << v[i]<<" , ";
    }
    
}
int main(){
    int a[100];
    cin>>a;
    int target;
    cin>>target;
    twosum(a,target);


    return 0;
}