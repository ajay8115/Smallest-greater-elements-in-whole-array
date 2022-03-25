// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int *greaterElement(int a[], int n)
{
    int maxi = *max_element(a, a + n);

    map<int, int> m;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    sort(b, b + n);

    for (int i = 0; i < n - 1; i++)
    {
        m[b[i]] = b[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxi)
        {
            a[i] = -10000000;
        }
        else
        {
            a[i] = m[a[i]];
        }
    }

    return a;
}