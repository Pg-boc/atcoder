#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define lli long long int
#define rep(i, n) for(in i = 0; i < (int)n; i++)

int main()
{
    lli X;
    scanf("%lld", &X);

    lli start = 100;
    int ans = 0;
    while(1) {
        start += start * 0.01;
        ans++;

        if (start >= X)
            break;

    }

    printf("%d\n", ans);

    return 0;
}