N, M = map(int, input().split())
dict_key_is_name = {}
dict_key_is_index = {}

index = 1
for i in range(N) :
    pocketmon = input()
    dict_key_is_name[pocketmon] = index
    dict_key_is_index[index] = pocketmon
    index += 1

for i in range(M) :
    temp = input()
    # 숫자를 입력하면... 아
    if temp.isdigit() == True :
        print(dict_key_is_index[int(temp)])
    if temp.isdigit() == False:
        print(dict_key_is_name[temp])  