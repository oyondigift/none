i=2
sum=0
count=0
while i<=102:
    if i%2==1:
        sum+=i
        count+=1
    i+=1
else:
    print(f"total number of odd nos:\t{count}\n")
    print(f"the sum of the nos is:\t{sum}\n")
    avg=sum/count
    print(f"the average of the nos is:\t{avg}\n")
    