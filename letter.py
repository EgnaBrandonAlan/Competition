def str_inc_rng(string, lower, upper):
    string = list(string)
    for i in range(lower, upper + 1):
        if ord(string[i]) == 122:
            string[i] = chr(97)
        elif ord(string[i]) == 90:
            string[i] = chr(65)
        else:
            string[i] = chr(ord(string[i]) + 1)
    return "".join(string)

def str_dec_rng(string, lower, upper):
    string = list(string)
    for i in range(lower, upper + 1):
        if ord(string[i]) == 97:
            string[i] = chr(122)
        elif ord(string[i]) == 65:
            string[i] = chr(90)
        else:
            string[i] = chr(ord(string[i]) - 1)
    return "".join(string)

def main():
    qamount = int(input())
    word = input()
    queries = [list(map(int, input().split())) for i in range(qamount)]
    for query in queries:
        if query[2] == 1:
            word = str_inc_rng(word, query[0], query[1])
        elif query[2] == 0:
            word = str_dec_rng(word, query[0], query[1])
    print(word)

main()