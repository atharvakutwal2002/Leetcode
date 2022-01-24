#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n == 0)
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }
    if ((n % 3) == 0)
    {
        for (int i = 0; i < 32; i++)
        {
            if (pow(3, i) == n)
            {
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    if (isPowerOfThree( n))
    {
       cout<<"true"<<endl;
    }else{
         cout<<"false"<<endl;
    }
    

    return 0;
}