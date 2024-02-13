prime = [2]
num = 3
check = False
while len(prime) != 10001:
    for i in range(0, len(prime)):
        if num % prime[i] == 0:
            check = True
    if check == False:
        prime.append(num)
    else:
        check = False
    num += 1
print(max(prime))
