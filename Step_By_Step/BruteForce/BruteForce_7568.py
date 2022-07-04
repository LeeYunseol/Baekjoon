# 딕셔너리로 접근하려다가 키로 접근하는 것이 어려워 list로 접근하는 방법으로 바꾸었습니다. list = [(a,b)]
def Function(input_list, rank_list) :
    for i in range(len(input_list)) :
        # count가 0이면 output이 다 1씩 낮아져서 처음부터 count = 1 -> 생각해보면 0등은 없음
        count = 1
        for j in range(len(input_list)) :
            # 다른 사람이 나보다 키와 몸무게가 더 크다, 즉 덩치가 크다면 나는 그만큼 순위가 밀린다 
            if input_list[i][0] < input_list[j][0] and input_list[i][1] < input_list[j][1] :
                count+=1        
        rank_list.append(count)
    return rank_list
num = int(input())
input_list = []
rank_list = []
for i in range(num) :
    weight, height = map(int, input().split())
    input_list.append((weight, height))
    
revised_rank_list = Function(input_list, rank_list)

for rank in revised_rank_list :
    print(rank, sep=' ')