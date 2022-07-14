import sys

def Sort_number(num1, num2, num3) :
    list = []
    list.append(num1)
    list.append(num2)
    list.append(num3)
    list = sorted(list)
    return list[0], list[1], list[2]
        

while True :
    a, b, c = map(int, sys.stdin.readline().split())
    if (a==0) :
        break
    a, b, c = Sort_number(a, b, c)
    if(a * a + b * b == c * c) :
        print("right")
    else :
        print("wrong")
    