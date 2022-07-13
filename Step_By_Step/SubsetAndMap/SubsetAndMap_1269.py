# 리스트는 - 연산이 안되지만 set은 이와 같은 연산이 가능

import sys
a, b = map(int, sys.stdin.readline().split())

A = set(map(int, sys.stdin.readline().split()))
B = set(map(int, sys.stdin.readline().split()))

# A - B
only_A = A - B
only_B = B - A
print(len(only_A) + len(only_B))