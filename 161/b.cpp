#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    int N, M, sum=0;
    scanf("%d %d", &N, &M);

    int A[N];
    for (int i=0; i < N; i++) {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i]*4*M >= sum) {
            count+=1;
        }
    }
    if (count >= M)
        printf("Yes\n");
    else
    {
        printf("No\n");
    }

    return 0;
}