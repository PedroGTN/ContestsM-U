t = int(input())
for i in range(1, t+1):
    max = -1
    s = input().split()
    for c in s:
        if int(c) > max:
            max = int(c)
    print("Case " + str(i) + ": " + str(max))