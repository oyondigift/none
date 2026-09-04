bpay=float(input("enter basic pay\n"))
hallowance=float(input("enter house allowance\n"))
callowance=float(input("enter commuter allowance\n"))
grosspay=bpay+hallowance+callowance
paye=0.2*grosspay
netpay=paye-grosspay
print(f"grosspay={grosspay}\npaye={paye}\nnetpay={netpay}\n")

