#include <bits/stdc++.h>
#include "MYQUEUE.h"
using namespace std;
typedef pair<char, int> mytype;
int main()
{
    Queue<mytype> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c1;
        int c2;
        cin >> c1 >> c2;
        q.Push(make_pair(c1, c2));
    }

    // while (!q.Empty())
    // {
    //     mytype chk;
    //     chk = q.Pop();
    //     cout << chk.first << " | " << chk.second << endl;
    // }
    // cout << endl
    //      << endl;

    if (!q.Empty())
    {
        mytype chk;
        chk = q.Front();
        cout << chk.first << " | " << chk.second << endl;
    }

    if (!q.Empty())
    {
        mytype chk;
        chk = q.Back();
        cout << chk.first << " | " << chk.second << endl;
    }
    return 0;
}