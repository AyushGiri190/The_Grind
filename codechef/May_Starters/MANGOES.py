'''
You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to cross a 
bridge that can withstand a weight of Z kilograms.
Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.'''
import math
for _ in range (int (input())):
    x,y,z=map(int,input().split())
    count=math.floor((z-y)/x)
    print(count)
    