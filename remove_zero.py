num=[1,0,2,0,3,4]
for i in range(num.count(0)):
    num.remove(0)
    num.append(0)
    print(num)
    