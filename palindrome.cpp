#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        string str = to_string(x);
        for(int i=0,j=str.size()-1;i<j;i++,j--){ if(str[i] != str[j]){ return false; }}
        return true;
}

int main()
{
    int x;
    cin >> x;
    if(isPalindrome(x)){
        cout<<true;
    }else{cout<<false;}

    return 0;
}