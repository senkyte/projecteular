disposablecurrentnum = 2
currentnum = 2
previousnum = 1
total = 2
while currentnum < 4000000:
    disposablecurrentnum = currentnum
    currentnum = disposablecurrentnum + previousnum
    previousnum = disposablecurrentnum
    if currentnum % 2 == 0:
        total += currentnum
        print(total)
    

print(total)
