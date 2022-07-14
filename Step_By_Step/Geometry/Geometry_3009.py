import sys

def Compare_function(num1, num2, num3) :
    if num1 == num2 :
        if num1 != num3 :
            return num3
    if num1 == num3 :
        if num1 != num2 :
            return num2
    if num2 == num3 :
        if num1 != num2 :
            return num1

x_list = []
y_list = []

for i in range(3)  :
    x, y = map(int, sys.stdin.readline().split())
    x_list.append(x)
    y_list.append(y)

answer_x = Compare_function(x_list[0], x_list[1], x_list[2])
answer_y = Compare_function(y_list[0], y_list[1], y_list[2])

print(answer_x, answer_y)