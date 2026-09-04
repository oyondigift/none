oldspeedometer=float(input("enter the old speedometer\n"))
newspeedometer=float(input("enter the new speedometr reading\n"))
mileage=newspeedometer-oldspeedometer
print(f"mileage\t{oldspeedometer-newspeedometer}")
print(mileage)
if mileage>=1 and mileage <=100:
    Bill=50*mileage
else:
    Bill=(100 * 5) + ((mileage - 100) * 3)
print(f"mileage cover is",mileage, "and the total BIll in KSH is",Bill)
