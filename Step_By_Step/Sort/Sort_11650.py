# 제출은 Python3가 아닌 Pypy3으로 하면 시간 초과 발생하지 않음

num = int(input())

matrix = []
for i in range(num) :
    [x, y] = map(int, input().split())
    matrix.append([x,y])
'''  
2중 배열은 시간 초과 => 정렬을 위한 다른 방법 필요
for i in range(num) :
    for j in range(i+1, num) :
        if matrix[i][0] > matrix[j][0] :
            matrix[i][0], matrix[j][0] = matrix[j][0], matrix[i][0] 
        if matrix[i][0] == matrix[j][0] :
            if matrix[i][1] > matrix[j][1] :
                matrix[i][1], matrix[j][1] = matrix[j][1], matrix[i][1
''' 
# 이게 되네
answer_matrix = sorted(matrix)
for i in range(num) :
    print(answer_matrix[i][0], answer_matrix[i][1])