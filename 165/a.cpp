#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define lli long long int
#define rep(i, n) for(in i = 0; i < (int)n; i++)

int main()
{
    int K, A, B;
    scanf("%d", &K);
    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++) {
        if (i % K == 0) {
            printf("OK\n");
            return 0;
        }
    }


    printf("NG\n");

    return 0;
}