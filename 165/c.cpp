#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define lli long long int
#define rep(i, n) for(in i = 0; i < (int)n; i++)

int main()
{
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);

    // int q[Q][4];
    int a, b, c, d;
    int res = 0;

    int tmp = 1;
    for (int i = 1; i <= N; i++) {
        tmp *= i;
    }
    // int A[tmp][N+1] = {1};
    int** A;
    A  = (int**)malloc(sizeof(int*)*tmp);
    for (int i = 0; i < tmp; i++) {
        A[i] = (int*)malloc(sizeof(int)*(N+1));
        for (int j = 0; j < N; j++) {
            A[i][j] = 1;
        }
    }

    //// 1 <= A1 <= A2 <= ... <= AN <= M
    //for (int i = 0; i < Q; i++) {
    //    scanf("%d %d %d %d", &a, &b, &c, &d);

    //    for (int j = 0; j <= N; j++) {
    //        A[i] = 1;
    //    }
    //    A[N] = M;

    //    for (int j = N - 1; j >= 0; j--) {
    //        for (int k = A[j]; k <= A[j+1]; k++) {
    //            A[j] = k;
    //            if(A[b-1]-A[a-1] == c)
    //                res += d;
    //        }
    //    }
    //}

    //printf("%d\n", res);

    return 0;
}