'''
Ved started playing a new mobile game called Fighting Clans. An army of N enemies is approaching his base. 
The ith enemy has Hi health points. An enemy gets killed if his health points become 0.
Ved defends his base using a weapon named Inferno. He can set the Inferno to one of the following two modes:
Single-Target Mode: In one second, the Inferno can target exactly one living enemy and cause damage of at most X
health points.
Multi-Target Mode: In one second, the Inferno can target all living enemies and cause damage of 1 health
point to each of them.
Find the minimum time required to kill all the enemies.
'''
import math
for _ in range (int(input())):
    n,x=map(int,input().split())
    lst1=list(map(int,input().split()))
    t1=max(lst1)
    t2=0
    for i in lst1:
        t2+=math.ceil(i/x)
    if t1>t2:
        print (t1)
    else:
        print (t2)