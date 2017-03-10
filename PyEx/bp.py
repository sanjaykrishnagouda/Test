a=b=c=i=j=0
for a in range(0,2):
    print i,"branch1 taken"
    for j in range(0,3):
        print "j=",j,"branch2 taken"
        if i%2==0:
            a+=1
            print"i=",i,"branch3 taken"
        if i%2!=0:
            print "i",i,"branch3 not taken"
        if j%2==0:
            b+=1
            print "j=",j,"branch4 taken"
        if j%2!=0:
            print "j",j,"branch4 not taken"
        if (i+j)%2==0:
            c+=1
            print "i=",i,"j=",j,"i+j=",i+j,"branch5 taken"
        if (i+j)%2!=0:
            print ("i+j"),i+j,"branch5 not taken"
        j+=1

    i+=1
