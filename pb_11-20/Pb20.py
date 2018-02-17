def fact(n):
    res = 1
    for i in range(1,n+1):
        res *= i
    return res

fac = fact(100)
res = sum([int(a) for a in list(str(fac))])
print("The answer is "+str(res))
