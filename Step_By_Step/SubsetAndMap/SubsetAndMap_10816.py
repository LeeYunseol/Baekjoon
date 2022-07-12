from tabnanny import check


N = int(input())
own_list = list(map(int, input().split()))

N = int(input())
check_list = list(map(int, input().split()))

# 2중 for 문은 시간초과
# 이분 탐색으로 풀면 시간 초과는 걸리지 않겠지만 앞에서 푼 문제를 바탕으로 딕셔너리를 활용

answer_dict = {}
for num in own_list :
    if num in answer_dict :
        answer_dict[num] += 1
    else : 
        answer_dict[num] = 1 
        
set_own_list = list(answer_dict.keys())

# 이 부분에서 시간 초과 나온 것 같아서 다른 분의 블로그를 참고 
# if in list로 접근했는데 이렇게하면 결국에는 하나씩 다 조회를 해야하니 시간을 초과한 것으로 결론
for num in check_list :
    result = answer_dict.get(num)
    if result == None:
        print(0, end=" ")
    else:
        print(result, end=" ")