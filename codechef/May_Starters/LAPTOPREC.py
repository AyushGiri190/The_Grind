'''Chef wants to buy a new laptop. However, he is confused about which laptop to buy 
out of 10 different laptops. He asks his N friends for their recommendation.
The ith friend recommends the Chef to buy the Aithlaptop (1≤Ai≤10).
Chef will buy the laptop which is recommended by maximum number of friends. Determine which laptop Chef buys.
Print CONFUSED if there are multiple laptops having maximum number of recommendations.'''
for _ in range (int (input())):
    n=int(input())
    lst1=list(map(int,input().split()))
    s=set(lst1)
    di={}
    for i in s:
        di[i]=lst1.count(i)
    x=max(di.values())
    lst2=list(di.values())
    if lst2.count(x)>1:
        print("CONFUSED")
    else:
        for i in di:
            if di[i]==x:
                print(i)
'''Test Cases
4
5
4 4 4 2 1 
7
1 2 3 4 5 6 6
6
2 2 3 3 10 8
4
7 7 8 8

'''