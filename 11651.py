num_j=int(input())
array=[]

for i in range(num_j):
    a,b = map(int,input().split())
    array.append((b,a))
array.sort()

for i in range(num_j):
    print(array[i][1],array[i][0])