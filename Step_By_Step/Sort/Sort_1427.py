input = input()
answer_list = []

# Sort를 위해서 리스트 입력
for i in input :
    answer_list.append(i)
sorted_list = sorted(answer_list, reverse=True)

# 리스트 출력
for i in sorted_list :
    print(i, end='')
