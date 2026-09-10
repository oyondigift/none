sum=0
count=0
avg=0
for x in range(1,101):
    if x%2==1:
        sum+=x
        count+=1
else:
    avg=sum/count
    print(f"total odd numbers:\t{count}\n")
    print(f"the sum is:\t{sum}\n")
    print(f"the average is:\t{avg}\n")