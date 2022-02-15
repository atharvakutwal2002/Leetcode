#include

#include<bits/stdc++.h>
using namespace std;

void ksmallest(int *a,int n,int k){
   priority_queue<int> pq;
   /*for(int i=0;i<k;i++){
    pq.push(a[i]);
   }

   for(int i=k;i<n;i++){
    if(a[i] < pq.top()){
        pq.pop();
        pq.push(a[i]);
    }
   }

   /// Answer k elements
   while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
   }*/

   for(int i=0;i<n;i++){
    pq.push(a[i]);
    if(pq.size() > k){
        pq.pop();  /// largest element will be deleted
    }
   }

   /// k elements
   while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
   }
}
int main(){
   int a[] = {5,6,9,12,3,13,2};
   ksmallest(a,7,3);

   return 0;
}
