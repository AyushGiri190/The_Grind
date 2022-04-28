#The code asks if the cherry on the cake is adjacent to the same color then change it the input will be given 
#in a matrix form if you replace a red cherry it costs 5 and when replacing green it costs 3.
'''
2
4 5
RGRGR
GRGRG
RGRGR
GRGRG
2 3
RRG
GGR
the logic will be the first element of our matrix we will change our matrix according to the first element
'''
for _ in range (int (input())):
    n,m=map(int,input().split())
    list1=[]
    cost1,cost2=0,0
    for i in range (n):
        temp=list(input())
        list1.append(temp)
    for i in range (n):
        for j in range (m):
            if ((i+j)%2==0) and list1[i][j]!='R':
                cost1+=3
            if ((i+j)%2==1) and list1[i][j]!='G':
                cost1+=5
            if ((i+j)%2==0) and list1[i][j]!='G':
                cost2+=5
            if ((i+j)%2==1) and list1[i][j]!='R':
                cost2+=3
    print(min(cost1,cost2))
             
