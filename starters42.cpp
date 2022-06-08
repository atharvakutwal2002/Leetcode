#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    while (N--)
    {
        int cntOfOne = 0;
        int cntOfMinusOne = 0;
        int x;
        cin >> x;
        vector<int> v;
        for (int i = 0; i < x; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        if (v.size() % 2 == 0)
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == 1)
                {
                    cntOfOne++;
                }
            }
            cntOfMinusOne = v.size() - cntOfOne;
            // cout << cntOfMinusOne << endl;
            // cout << cntOfOne << endl;
            cout << abs(cntOfMinusOne - cntOfOne) / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}

//third test case is failing for below approach 

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin>>N;
//     while (N--)
//     {
//         int x;
//         vector<int>v;
//         cin>>x;
//         if(x%2!=0)
//         {
//             N--;
//             cout<<"\n A:: "<<-1<<endl;
//         }
//         int pos=0;
//         int nega=0;
//         for (int i = 0; i < x; i++)
//         {
//             int ele;
//             cin>>ele;
//             v.push_back(ele);
//             if(ele==1)
//             {
//                pos++;
//             }
//             else
//             {
//                 nega++;
//             }
//         }
//         int ans=abs(pos-nega)/2;
//         cout<<pos<<" "<<nega <<" \n";
//         cout<<"A"<<ans<<endl;
//         N--;
//     }
    

   
//    return 0;
// }