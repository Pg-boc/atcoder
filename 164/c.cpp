#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    long long int N;
    scanf("%d", &N);
    
    //char S[1000000000][10];
    char **S;
    S = (char**)malloc(sizeof(char*)*N);
    for (int i = 0; i < N; i++)
        S[i] = (char*)malloc(sizeof(char)*10);

    for (int i = 0; i < N; i++){
        scanf("%s", S[i]);
    }

    //for (int i = 0; i < N; i++){
    //    printf("%s", S[i]);
    //}

    return 0;
}