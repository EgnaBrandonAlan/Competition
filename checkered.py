squares = int(input())
counter = 1

for k in range(squares*2):
    if (counter%2 == 1):
        for i in range(squares):
            print("##", end="")
            for j in range(squares - 1):
                print("..", end="")
                break
        counter += 1
    elif (counter%2 == 0):
        for i in range(squares):
            print("..", end="")
            for j in range(squares - 1):
                print("##", end="")
                break
        counter += 1
    print("")
    
