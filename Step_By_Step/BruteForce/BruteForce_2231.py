def  Function(num) :
    sum = 0
    while(num != 0) :
        sum += num % 10
        num /= 10
        num = int(num)
    return sum

x = int(input())
check = False
for i in range(x) :
    if i + Function(i) == x : 
        print(i)
        check = True
        break
if check == False :
    print(0)
    
# 제 코드는 for을 사용해서 약간 불편한데 다른 분들의 코드 중에서 list를 사용한 것도 흥미로우니 꼭 참고하시면 좋겠습니다.