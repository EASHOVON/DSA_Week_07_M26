#include <bits/stdc++.h>
#include "MYQUEUE.h"
using namespace std;
int main()
{
    Queue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int chk;
        cin >> chk;
        q.Push(chk);
    }

    while (!q.Empty())
    {
        cout << q.Pop() << " ";
    }
    cout << endl
         << endl;

    if (!q.Empty())
    {
        cout << q.Front() << endl
             << endl;
    }

    if (!q.Empty())
    {
        cout << q.Back() << endl
             << endl;
    }
    return 0;
}