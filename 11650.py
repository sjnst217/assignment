num_j=int(input())
array=[]

for i in range(num_j):
    a,b = map(int,input().split())
    array.append((a,b))
array.sort()

for i in range(num_j):
    print(array[i][0],array[i][1])