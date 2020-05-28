import os

N = input()
S = set() 
N = int(N)
count = 0
for i in range(int(N)):
    tmp = input()
    if (tmp in S) == False:
        count += 1
    S.add(tmp)


print (count)