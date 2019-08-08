n, *floors = map(int, input().split())
nowf = 0
time = 0
for i in floors:
    if nowf < i:
        time += (i - nowf) * 6 + 5
    else :
        time += (nowf - i) * 4 +5
    nowf = i
print(time, end = '')