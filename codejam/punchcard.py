for i in range(int(input())):
    R,C=map(int,input().split())
    print("Case #",i+1,":")
    for j in range(2):
        print("..",end="")
        for k in range(2*C-1):
            if j==0:
                if k%2==0:
                    print("+",end="")
                else:
                    print("-",end="")
            else:
                if k%2==0:
                    print("|",end="")
                else:
                    print(".",end="")
        print("")
    for a in range(2*R-1):
        if a%2 ==0:
            for b in range(2*C+1):
                if b%2==0:
                    print("+",end="")
                else:
                    print("-",end="")
        else:
            for c in range(2*C+1):
                if c%2==0:
                    print("|",end="")
                else:
                    print(".",end="")
        print("")


