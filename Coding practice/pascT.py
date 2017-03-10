def tArray(i):
        tA=[0]*i
        for j in range(len(tA)):
            tA[0]=1
            tA[len(tA)-1]=1
            if j!=0 or j!=len(tA)-1:
                tA[j]=tA[j-1]+tA[j]
            print tA   
        return tA
        
tArray(5)




