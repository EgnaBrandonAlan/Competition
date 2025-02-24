squares = int(input())

for i in range(2*squares):
    for j in range(squares):
        if (i // 2 + j) % 2 == 0:
            print("##", end="")
        else:
            print("..", end="")
    print()