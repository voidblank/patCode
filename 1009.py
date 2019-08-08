n1, *a = map(str, input().split())
polynomialsA = {}
for i in range(int(n1) * 2):
    if i % 2 == 1:
        polynomialsA[int(a[i - 1])] = float(a[i])

n2, *b = map(str, input().split())
polynomials = {}
for i in range(int(n2) * 2):
    if i % 2 == 1:
        keyb = int(b[i - 1])
        valueb = float(b[i])
        for key, value in polynomialsA.items():
            if polynomials.__contains__(key + keyb):
                polynomials[key + keyb] = polynomials[key + keyb] + value * valueb
            else:
                polynomials[key +  keyb] = value * valueb

cnt = polynomials.__len__()
List = []
for i, j  in polynomials.items():
    if j == 0:
        cnt -= 1
    else :
        List.append(i)
List.sort(reverse = True)
print(cnt, end = '')
for i in List:
    print(" {} {:.1f}".format(i, polynomials[i]), end = '')
