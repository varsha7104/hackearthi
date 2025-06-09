#Farmer's Fence

#A farmer needs to build a fence around his rectangular farm. He knows the length and
#  width of the farm but needs help calculating the amount of material required.
#  He also needs to calculate the area of the farm to plan his crops.

#- Problem: Given the length and width of the farm, calculate both the perimeter and the
#  area of the farm.

#- Input: Two integers 'length' and 'width'.

#- Output: Two integers, the perimeter and the area of the rectangle.
n,m=map(int,input().split())
print(2*(n+m),n*m)
#OUTPUT:
#5 10
#30 50