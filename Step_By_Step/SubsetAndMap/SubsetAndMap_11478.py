S = input()
length = len(S)

list = []
for i in range(0, length) :
    for j in range(i, length) :
        list.append(S[i:i+j])
answer_set = set(list)
print(len(answer_set))