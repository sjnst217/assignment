
# array = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]

# def quick_sort(array, start, end):
#     if start >= end: #원소가 1개인 경우 종료
#         return
#     pivot = start #피벗은 첫번째 원소
#     left = start + 1
#     right = end
#     while left <= right: 
#         #피벗보다 큰 데이터를 찾을 때까지 반복
#         while left <= end and array[left] <= array[pivot]:
#             left += 1
#         # 피벗보다 작은 데이터를 찾을 때까지 반복
#         while right > start and array[right] >= array[pivot]:
#             right -= 1
#         if left > right: # 엇갈렸다면 작은 데이터와 피벗을 교체
#             array[right], array[pivot] = array[pivot], array[right]
#         else: # 엇갈리지 않았다면 작은 데이터와 큰 데이터를 교체
#             array[left], array[right] = array[right], array[left]
#     #분할 이후 왼쪽 부분과 오른쪽 부분에서 각각 정렬 수행
#     quick_sort(array, start, right - 1)
#     quick_sort(array, right + 1, end)

# quick_sort(array, 0, len(array) - 1)

# print(array)

# def quick_sort(array):
#     # 리스트가 하나 이하의 원소만을 담고 있다면 종료
#     if len(array) <= 1:
#         return array
    
#     pivot = array[0] # 피벗은 첫 번째 원소
#     tail = array[1:] #피벗을 제외한 리스트
    
#     left_side = [x for x in tail if x <= pivot] # 분할된 왼쪽 부분
#     right_side = [x for x in tail if x > pivot] # 분할된 오른쪽 부분
    
#     # 분할 이후 왼쪽 부분과 오른쪽 부분에서 각각 정렬을 수행하고, 전체 리스트를 반환
#     return quick_sort(left_side) + [pivot] + quick_sort(right_side)

# print(quick_sort(array))

# AArray = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]
# def main():
#     result = AArray.sort()
#     print(AArray)
    

# if __name__ == "__main__":
#     main()

# num_j = input()
# array = []
# for i in num_j:
#     array.append(input)
    
    
# num_j = int(input())
# array = []
# for i in range(num_j):
#     n = int(input())
#     array.append(n)
# for i in sorted(array):
#     print(i)

# # 모든 원소의 값이 0보다 크거나 같다고 가정
# array = [7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2]
# # 모든 범위를 포함하는 리스트 선언 (모든 값은 0으로 초기화)
# count = [0] * (max(array) + 1)

# for i in range(len(array)):
#     count[array[i]] += 1 # 각 데이터에 해당하는 인덱스의 값 증가

# for i in range(len(count)): # 리스트에 기록된 정렬 정보 확인
#     for j in range(count[i]):
#         print(i, end=' ') # 띄어쓰기를 구분으로 등장한 횟수만큼 인덱스 출력


# num_j = int(input())
# array = []
# count = []
# for i in range(num_j):
#     n = int(input())
#     array.append(n)

# for i in range(10001):
#     count.append(0)
    
# for i in range(num_j):
#     count[array[i]] += 1

# for i in range(10001):
#     for j in range(count[i]):
#         print(i, end=' ')

# n = int(input())

# nums = []
# for _ in range(n) :
# 	nums.append(int(input()))

# print((sum(nums)/n))

# nums.sort()
# print(nums[int((n-1)/2)])

# # 최빈값
# counts = dict()
# for i in range(1,n+1) :
# 	counts[i] = []

# maxCount = 1
# count = 1
# for j in range(1,n) :
# 	if nums[j] == nums[j-1] :
# 		count += 1
# 	else :
# 		counts[count].append(nums[j-1])
# 		if maxCount < count : maxCount = count
# 		count = 1
# 	if j == n-1 : 
# 		counts[count].append(nums[j])
# 		if maxCount < count : maxCount = count

# if n == 1 :
# 	counts[1].append(nums[0])

# counts[maxCount].sort()
# if len(counts[maxCount]) == 1 :
# 	print(counts[maxCount][0])
# else :
# 	print(counts[maxCount][1])

# # 범위
# print(nums[-1]-nums[0])

