num_array = list()
num = input()

num_array = map(int, input().split(' '))

summation = 0

for i in num_array:
    summation = summation + i
    summation = summation % (10**9+7)

output = 1

for i in range(int(num)-1):
    output = output * 2
    output = output % (10**9+7)

output = output * summation
output = output % (10**9+7)

print(output)