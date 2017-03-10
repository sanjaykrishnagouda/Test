def comb(n,k):

     if n>0:
          if 0<k<n:
               return comb(n-1,k-1)+comb(n-1,k)
          if k==0 or k==n:
               return 1
          elif n<k:
               return "invalid"
     if n<0:
          return "cannot be negative"   

print "enter n "
n=input()
print "enter k"
k=input()
y=comb(n,k)
print y

