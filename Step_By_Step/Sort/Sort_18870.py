# 압축된 것이 인덱스 정보라는 것을 찾는데 오래 걸렸음

num = int(input())
temp_list = []
index_dic = {}

temp_list_before_sorted = list(map(int, input().split()))


# 중복 제거
temp_list_after_sorted = sorted(list(set(temp_list_before_sorted)))

index = 0
for i in temp_list_after_sorted :
    index_dic[i] = index
    index+=1

for i in temp_list_before_sorted :
    print(index_dic[i], end = ' ')

