e=raw_input("entry time for lines")
"""e2=raw_input(print "entry time for line 2")"""
n=raw_input("number of stations")
time_line1=raw_input("time for each station in line 1")
time_line2=raw_input("time for each station in line 2")
x=raw_input("exit time for lines")
opt1=[]*len(n)
opt2=[]*len(n)
l=[]
print time_line1[0]
print time_line2
opt1[1]=e[1]+time_line1[1]
opt2[1]=e[2]+time_line2[1]
t12=[2,3,1,3,4]
t21=[2,1,2,2,1]
for i in range(1,n):
    opt1[i]=min(opt1[i-1]+time_line1[i],opt2[i-1]+time_line1[i]+t21[i-1])
for i in range(1,n):
    opt2[i]=min(opt2[i-1]+time_line2[i],opt1[i-1]+time_line2[i]+t12[i-1])
if opt1[n]<=opt2[n]:
    l[n]=1
else:
    l[n]=2
optimal_time=min(opt1[n-1]+x[0],opt2[n-1]+x[1])
for i in range(1,n):
    print "line %d," %l[i],"station %d" %i
