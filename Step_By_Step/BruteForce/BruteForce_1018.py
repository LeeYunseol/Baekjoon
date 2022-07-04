# 문제를 보자마자 2차원 배열로 풀어야겠다고 결심
# 근데 입력을 어떻게 할지 생각이 잘 안 나서 앞에서 푼 문제를 참고로 리스트로 하려고 함
# https://god-gil.tistory.com/62 잘 몰라서 이 분 블로그를 참고했습니다.
N, M = map(int, input().split())
chess_list = []
change_list = []
for i in range(N) :
    chess_list.append(input())
    
for i in range(N-7) :
    for j in range(M-7) :
        change_B = 0
        change_W = 0
        for a in range(i, i+8) :
            for b in range(j, j+8) :
                if (a+b) %2 == 0 :
                    if chess_list[a][b] != "W" :
                        change_W+=1
                    if chess_list[a][b] != "B":
                        change_B += 1
                else :
                    if chess_list[a][b] != "B" :
                        change_W+=1
                    if chess_list[a][b] != "W" :
                        change_B+=1
                        
        change_list.append(change_B)   
        change_list.append(change_W)
print(change_list)    
min = 100000000
for num in change_list :
    if num < min :
        min = num
        
print(num)