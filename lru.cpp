#include<bits/stdc++.h>
using namespace std;

class LRUCache
{
public:
    map<int, int> mymap;
    list<int> ls;
    int cp;
    LRUCache(int capacity)
    {
        cp = capacity;
        mymap.clear();
        ls.clear();
    }

    int get(int key)
    {
        if (mymap.find(key) == mymap.end())
            return -1;
        ls.remove(key);
        ls.push_front(key);
        return mymap[key];
    }

    void put(int key, int value)
    {
        if (mymap.find(key) == mymap.end())
        {
            if (ls.size() == cp)
            {
                /// full
                int last = ls.back();
                ls.pop_back();
                mymap.erase(last);
            }
            mymap[key] = value;
            ls.push_front(key);
        }
        else
        {
            ls.remove(key);
            ls.push_front(key);
            mymap[key] = value;
        }
    }
};