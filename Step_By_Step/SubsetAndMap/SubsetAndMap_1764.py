# 중복된다는 이름이 없어서 set을 사용하지 않음 (set을 사용하는 문제였음...)

N, M = map(int, input().split())

not_listen = []
not_see = []

for i in range(N) :
    not_listen.append(input())
for i in range(M) :
    not_see.append(input())

# set &을 사용하면 겹치는 것을 가져올 수 있다함 -> 시간초과가 걸리지 않는 방법
answer_list = sorted(list(set(not_listen) & set(not_see)))
print(len(answer_list))
for name in answer_list :
    print(name)