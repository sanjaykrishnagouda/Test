

num=int(raw_input("enter a number:\n"))
def addDigits(num):

    if num<10:
        return num
        print num
    elif num==10:
        return 1
        print 1
    elif num<100:
        num=num%10+num/10
        return addDigits(num)
    else:
        num=(num/10)+(num%10)
        if num>10:
            num=(num/10)+(num%10)
        return addDigits(num)
    print num
num=addDigits(num)
print num
