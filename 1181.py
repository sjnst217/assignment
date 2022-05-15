num_j = int(input())
lst = []

for i in range(num_j):
    lst.append(input())
set_lst = set(lst)
lst = list(set_lst)
lst.sort()
lst.sort(key = len)

for i in lst:
    print(i)