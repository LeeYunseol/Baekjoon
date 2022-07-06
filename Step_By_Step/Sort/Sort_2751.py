# 시간 복잡도가 O(nlogn)이기 때문에 이중 for을 사용하면 안된다.
# 앞의 문제를 선택 정렬로 했으니 이번에는 버블 정렬로 풀기
# 생각해보니 버블 정렬은 O(n^2)이라서 시간 초과, Merge sort로 방향 전환
# Merge Sort를 사용했지만 시간 초과가 떠서 검색하다가 파이썬 내장 함수를 사용하기로 결정
# import sys를 사용해야 시간 초과가 안 나오는 듯함...
import sys

x = int(input())
list[10000]

for i in range(x) :
    list.append(int(sys.stdin.readline()))

for i in sorted(list) :
    print(i)