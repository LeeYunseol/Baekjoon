# 총 2개의 사각형이 있다고 생객
# 반시계!!!!!! 방향으로!!!!! 간다!!!!! => 두 번쨰 큰 변 이후의 2번쨰와 3번째에는 반드시 작은 사각형의 가로와 세로의 길이가 나온다.
import sys

num = int(sys.stdin.readline())

width_list = []
height_list = []
direction_list = []
length_list = []

for i in range(6) : # 총 6번 수행
    direction, length = map(int, sys.stdin.readline().split())
    length_list.append(length)
    
    # direction이 1이거나 2면 가로 방향을 의미
    if (direction == 1 or direction == 2) :
        width_list.append(length)
        
    # direction이 3이거나 4면 세로 방향을 의미
    if (direction == 3 or direction == 4) :
        height_list.append(length)

big_rectangle_height = max(height_list)
index = 0
for length in length_list :
    if(length == big_rectangle_height) :
        big_rectangle_height_index = index
    index += 1

big_rectangle_width = max(width_list)   
index = 0
for width in length_list :
    if(width == big_rectangle_width) :
         big_rectangle_width_index = index
    index += 1

index = big_rectangle_width_index if big_rectangle_height_index < big_rectangle_width_index else big_rectangle_height_index
if(big_rectangle_height_index ==  5 and big_rectangle_width_index == 0) :
    index = 0
if(big_rectangle_height_index == 0 and big_rectangle_width_index == 5) :
    index = 0

if(index+2 > 5) :
    index1 = index + 2 - 6
else :
    index1 = index + 2
if(index+3 > 5) :
    index2 = index + 3 - 6
else : 
    index2 = index + 3
small_rectangle_area = length_list[index1] * length_list[index2]
big_rectangle_area = big_rectangle_height * big_rectangle_width

total = num * (big_rectangle_area - small_rectangle_area)
print(total)