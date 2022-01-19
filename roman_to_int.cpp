#include <bits/stdc++.h>
using namespace std;
// int romantostring(string str;){
//     int I=1;int V=5;int X=10;int L=50 ;int C=100; int D=500; int M=1000;
//     for (int i = 0; i < str.length(); i++)
//     {
//         switch (str)
//         {
//         case 'I'(return 1;)
//             break;
//         case 'I'(return 1;)
//             break;
//         case 'I'(return 1;)
//             break;
//         case 'I'(return 1;)
//             break;

//         default:
//             break;
//         }
//     }

// }

class Solution {
public:
    int val(char s)
    {
        switch(s)
        {
            case 'I':return 1;
                break;
                case 'V':return 5;
                break;case 'X':return 10;
                break;case 'L':return 50;
                break;case 'C':return 100;
                break;case 'D':return 500;
                break;case 'M':return 1000;
                break;
            default:return 0;
                
}
}
    int romanToInt(string s) {
        int num=0;
        for(int i=0;i<s.length();i++)
        {
      if(val(s[i])<val(s[i+1]))
            num=num-val(s[i]);
            else 
                 num=num+val(s[i]);
}return num;
        
    }
};

int main(){
    Solution s1;
    s1.val('VII');
    s1.romanToInt('VII');
    return 0;
}
