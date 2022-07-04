def Black_jack(list, M, N) :
    temp=0
    closet = 0
    for i in range(N) :
        for j in range(i+1, N) :
            for k in range(j+1, N) :
                temp = list[i] + list[j] + list[k]
                if temp <= M and M - closet > M - temp :
                    closet = temp
    print(closet)

# 2개의 정수 입력 받기
N, M = map(int, input().split())
num_list = list(map(int, input().split()))
Black_jack(num_list, M, N)
# 터미널에서 붙여넣기 하면 이상하게 되는데 ctrl + shift + V 하면 잘 된다
