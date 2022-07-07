num = int(input())
temp_list = []

for i in range(num) :
    temp_list.append(input())
    
answer_list = set(temp_list)
answer_list = sorted(answer_list)
sorted_list = sorted(answer_list, key=len) #이게 되네

for i in range(len(sorted_list)) :
    print(sorted_list[i])