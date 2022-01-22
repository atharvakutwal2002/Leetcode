// #include <bits/stdc++.h>
// using namespace std;
// string removeSpecialCharacter(string s)
// {
//     for (int i = 0; i < s.size(); i++) {

//         // Finding the character whose
//         // ASCII value fall under this
//         // range
//         if (s[i] < 'A' || s[i] > 'Z' &&
//             s[i] < 'a' || s[i] > 'z')
//         {
//             // erase function to erase
//             // the character
//             s.erase(i, 1);
//             i--;
//         }
//     }
//     return s;
// }
// bool isPalindrome(string s1)
// {
//     if (s1 == "")
//     {
//         return true;
//     }
//     string s=removeSpecialCharacter(s1);
//     remove(s.begin(), s.end(), ' ');
//     cout<<s<<endl;
//     for (int i = 0; i < s.size(); i++)
//     {
//         s[i] = tolower(s[i]);
//     }

//     string s2 = s;
//     reverse(s2.begin(), s2.end());
//     if (s == s2)
//     {
//         return true;
//     }
//     return false;
// }
// int main(){

//     cout<<isPalindrome(s);

//     return 0;

// }

// finallll

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int l = 0;
        int r = s.length() - 1;

        while (l < r)
        {
            if (!isalnum(s[l]))
                l++;
            else if (!isalnum(s[r]))
                r--;
            else
            {
                if (tolower(s[l++]) != tolower(s[r--]))
                    return false;
            }
        }
        return true;
    }
}