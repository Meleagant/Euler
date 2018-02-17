def puiss(x,n):
    if n == 0:
        return 1
    elif n == 1:
        return x
    else:
        x0 = puiss(x,n//2)
        if n % 2 == 0:
            return x0**2
        else:
            return x*(x0**2)

p = puiss(2,1000)
res = sum([int(b) for b in list(str(p))])
print("The Answer is "+str(res))
