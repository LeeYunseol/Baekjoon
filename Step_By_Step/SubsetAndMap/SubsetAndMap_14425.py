N, M = map(int, input().split())

set_list = []
for i in range(N) :
    set_list.append(input())
    
set = set(set_list)

count = 0
for i in range(M) :
    temp = input()
    if temp in set :
        count += 1
print(count)