#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n-1];
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i<n-1; i++)
        {
            cin >> b[i];
        }
        int x = 0;
        while(x<n-1 && a[x] == b[x])
        {
            x++;
        }
        cout << x+1 << endl;
       
    }   
}
