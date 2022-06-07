#include <bits/stdc++.h>
using namespace std;

bool detect_loop(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
