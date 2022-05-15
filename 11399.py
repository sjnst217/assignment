import sys

input = sys.stdin.readline

N = int(input())
a = list(map(int, input().split())) 
    
a.sort()

sum = 0
for i in range(1, N):
    a[i] = a[i] + a[i-1]
    sum += a[i-1]
sum += a[N-1]   
print(sum)

################################################### 내가 푼거
# import sys

# input = sys.stdin.readline

# N = int(input())
# a = list(map(int, input().split()))  ## 이거만 기억하기
    
# min_num = 0
# for i in range(N):
#     all_min = min(a) * (N - i)
#     min_num += all_min
#     a.remove(min(a))

# print(min_num)