# 캬 내가 생각해도 잘 짰다.

def Average(list) :
    sum = 0
    for i in range(len(list)) :
        sum += list[i]
    average = round(sum / len(list))
    return average

def Median(list) :
    sorted_list = sorted(list)
    index = len(list) // 2
    median = sorted_list[index]
    return median

#  최빈값 구하는 것이 핵심
def Mode(list) :
    sorted_list = sorted(list)
    # 만약 10개가 입력된다면 최대 10가지의 수가 입력된다는 것
    # 나오는 빈도수를 저장할 리스트
    mode_list = [1] * len(list)
    # 빈도수에 의한 값을 가져올때 사용할 임시 리스트
    
    mode_index = 0
    if len(list) == 1 :
        temp_list = [sorted_list[0]]
    else :
        temp_list = [0] * len(list)
    for i in range(1, len(list)) :
        # 이 부분이 틀리긴 함
        if sorted_list[i] == sorted_list[i-1] :
            temp_list[mode_index] = sorted_list[i-1]
            mode_list[mode_index] += 1
 
        if sorted_list[i] != sorted_list[i-1] :
            temp_list[mode_index] = sorted_list[i-1]
            mode_index += 1
        # 마지막 수를 고려해줘야 함
        if i == len(list)-1  and sorted_list[i] != sorted_list[i-1] :
            temp_list[mode_index] = sorted_list[i]
            
    #print("sorted list : {}".format(sorted_list))
    #print("mode list : {}".format(mode_list))
    #print("temp list : {}".format(temp_list))
    mode = -1
    count_mode = 0
    max_mode_index = 0
    # 최빈값인 수만 들어가는 리스트
    max_mode_list = []
    for i in range(len(mode_list)) :
        if mode == mode_list[i] :
            count_mode += 1
            max_mode_list.append(temp_list[i])
        if mode < mode_list[i] :
            mode = mode_list[i]
            count_mode = 1
            max_mode_index = i
            max_mode_list = []
            max_mode_list.append(temp_list[i])
    #print("max node list : {}".format(max_mode_list))
    #print("mode : {}".format(mode))
    #print("count mode : {}".format(count_mode))
    if(count_mode == 1) :
        return temp_list[max_mode_index]
    if(count_mode > 1) :
        return max_mode_list[1]

    
def Range(list) :
    if len(list) == 1:
        return 0
    sorted_list = sorted(list)
    max = sorted_list[len(list) - 1]
    min = sorted_list[0]
    range = max - min
    return range



num = int(input())
list = []

# 값의 입력
for i in range(num) :
    list.append(int(input()))
    
print(Average(list))
print(Median(list))
print(Mode(list))
print(Range(list))
