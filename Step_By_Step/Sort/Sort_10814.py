num = int(input())
list = []

for i in range(num) :
    age, name = input().split()
    age = int(age)
    list.append([age, name])
# 나이순으로 비교해야하는데 
# key인자에 lambda 함수를 넘겨주면 반환값을 가지고 비교해 정렬
# 이 때, key로 전달되지 않은 요소에 대해선 정렬하지 않음
list = sorted(list, key=lambda x : x[0])

for i in range(num) :
    print(list[i][0], list[i][1])