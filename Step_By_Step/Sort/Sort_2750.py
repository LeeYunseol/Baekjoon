list = []
num = int(input())

for i in range(num) :
    list.append(int(input()))
    
for i in range(num) :
    for j in range(i+1, num) :
        if list[i] > list[j] :
            list[i], list[j] = list[j], list[i]
        
        
for i in range(num) :
    print(list[i])