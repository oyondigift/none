print("welcome to apartment locator\n")
loc=input("enter house location\n")
cat=input("enter apartment category\n")
minrent=float(input("enter minimum rent\n"))
maxrent=float(input("enter maximum rent\n"))
#make program decision
if loc=="karen" and cat=="single" and minrent>=10000 and maxrent<=20000:
    rent=15000
    hsno="k001"
    found=True
elif loc=="langata" and cat=="double" and minrent>=50000 and maxrent<=90000:
    rent=75000
    hsno="l001"
    found=True
else:
    found=False
#display program output
if found==True:
    print(rent,hsno)
elif found==False:
    print("no house found matching the search criteria\n")