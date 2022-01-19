#include <bits/stdc++.h>
using namespace std;

// int lengthOfLastWord(string s)
// {
//     char array[100];
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i]==" ")
//         {
//             array[i]=="!";
//         }

//         array[i]=s[i];
//     }

// }
int lengthOfLastWord(string str)
{
    int count=0;
     bool flag = false;
    for (int i = str.length() - 1; i >= 0; i--) {
        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            flag = true;
            count++;
        }
        
        else {
            if (flag == true)
                return count;
        }
    }
    return count;
    
}

int main()
{

    string s = "a";

    cout<<lengthOfLastWord(s);

    return 0;
}