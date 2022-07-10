'''
There are N students in a class. Recently, an exam on Advanced Algorithms was conducted with
 maximum score M and minimum score 0. The average score of the class was found out to be exactly X.

Given that a student having score strictly greater than the average receives an A grade, 
find the maximum number of students that can receive an A grade.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
The only line of each test case consists of three integers N,M,X - the number of students,
 the maximum score and the average score respectively.'''
for _ in range ( int(input())):
    n,m,x=map(int,input().split())
    if m==x:
        print(0)
    else:
        print((n*m)//x)       
'''
test case
4
2 100 50
3 100 50
5 40 40
10 50 49
'''