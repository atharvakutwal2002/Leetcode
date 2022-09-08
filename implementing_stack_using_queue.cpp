#include <bits/stdc++.h>
using namespace std;

class stack
{
public:
    queue<int> q;
    int size;
    void push(int x){
        q.push(x);
    }
    void pop(){
        q.pop();
    }

    int top(){
        return q.front();
    }

    bool isEmpty(){
        return q.empty();
    }
};





int main()
{

    return 0;
}