#include <bits/stdc++.h>
using namespace std;

// bool isPerfectSquare(int num)
// {
//     int start = 1;
//     int end = num;

//     while (start < end)
//     {
//         long long int mid = (start + end) / 2;
//         if ((mid * mid) == num)
//         {
//             return true;
//         }
//         else if ((mid * mid) > num)
//         {
//             end = mid - 1;
            
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     if (isPerfectSquare(n))
//     {
//         cout<<"true\n";
//     }else{
//         cout<<"false\n";
//     }
//     return 0;
    
// }


// --------------final-------------//
class Solution {
public:
    bool isPerfectSquare(int num) {
        int L = 0, U = num;
        bool result = false;
        while(L<=U)
        {
            long long mid = L + (U-L)/2;
            long long squaredValue = mid * mid;
            if(squaredValue > num)
            {
                U = mid-1;
            }
            else if(squaredValue < num)
            {
                L = mid+1;
            }
            else 
            {
                result = true;
                break;
            }
        }
        return result; 
    }
};