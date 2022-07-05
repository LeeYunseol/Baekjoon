    # 문제를 잘못 이해해서 6이 3번 나오는 줄 알았지만 666이 나왔어야 했음

    def Function(num) :
        count = 0
        while(num != 0) :
            temp = num % 10
            num = int(num / 10)
            if(temp == 6) :
                temp = num % 10
                num = int(num / 10)
                if(temp==6) :
                    temp = num % 10
                    num = int(num / 10)
                    if(temp==6) :
                        return True
        return False

    x = int(input())
    count_666 = 0
    movie_name = 666

    while(1) :
        if(Function(movie_name) == True) :
            count_666+=1
        
        if(count_666==x) :
            print(movie_name)
            break
        movie_name +=1