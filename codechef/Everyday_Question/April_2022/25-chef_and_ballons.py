''' In this problem we need to find out the minimum number of ballons that need to be taken out in order 
to complete a set of k number of same coloured balloon....
2 Test case
3 3 3 no of ballons
1 k
3 3 3
2
the catch was what if the number of ballon was smaller than that of k
'''

for _ in range(int(input())):
    r,g,b=map(int,input().split())
    k=int(input())
    print(min(k-1,r)+min(k-1,g)+min(k-1,b)+1)
