num = int(input())
own_list = list(map(int, input().split()))
num2 = int(input())
predict_list = list(map(int, input().split()))

# 순차 탐색은 시간 초과..!
'''
answer_list = []
for i in predict_list :
    check = False
    for j in own_list :
        if i == j :
            answer_list.append(1)
            check = True
            break
    if check == False :
        answer_list.append(0)
'''

# 시간 초과가 발생하지 않는 다른 방법을 생각
def binary_search(num, list):
    left = 0
    right = len(list)-1
    while left <= right :
        mid = (left+right)//2
        if list[mid] == num :
            return True
        elif list[mid] > num :
            right = mid - 1
        else:
            left = mid + 1
    return False
  
sorted_own_list = sorted(own_list)
for i in predict_list :
    check = binary_search(i, sorted_own_list)
    if check == True :
        print(1, end=' ')
    elif check == False :
        print(0, end = ' ')