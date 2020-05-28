#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    int N;
    scanf("%d", &N);

    char S[N];
    scanf("%s", &S);

    int sum = 0, tmp_idx = 0, c = 0;
    int tmp[10000][2];
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (S[i-1]==S[j-1])
                continue;
            tmp[c][0] = i;
            tmp[c][1] = j;
            tmp_idx++;
            c++;
        }
    }

    for (int m = 0; m < tmp_idx; m++) {
        for (int k = tmp[m][1] + 1; k <= N; k++) {
            //printf("%d %d %d\n", tmp[i][0], tmp[i][1], j);
            int i = tmp[c][0];
            int j = tmp[c][1];

            if (j-i == k-j)
                continue;

            //printf("%d %d %d\n", tmp[i][0], tmp[i][1], j);
            
            if (S[i-1]==S[k-1])
                continue;
            if (S[j-1]==S[k-1])
                continue;
            sum += 1;
        }
    }

    printf("%d\n", sum);

    return 0;
}