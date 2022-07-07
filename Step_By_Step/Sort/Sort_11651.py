# 제출은 Python3가 아닌 Pypy3으로 하면 시간 초과 발생하지 않음
# 나 천잰가?
num = int(input())

matrix = []
for i in range(num) :
    [y, x] = map(int, input().split())
    matrix.append([x,y])

answer_matrix = sorted(matrix)
for i in range(num) :
    print(answer_matrix[i][1], answer_matrix[i][0])