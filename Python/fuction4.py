#declare global variables for use in entire program
availability=False
bus=""

def busscheduler(day,time,destination):
    if day=="monday" and time=="8-11" and destination=="mombasa":
        bus="KDV 107C"
        availability=True
    elif day=="tuesday" and time=="2-5" and destination=="voi":
        bus="KAV 125V"
        availability==True
    elif day=="wednesday" and time=="3-12" and destination=="Nairobi":
        bus="KAk 125L"
        availability==True
    else:
        availability=False
    return availability

#call the fuction to enter the arguments from the keyboard
day=input("enter the day of travel\n")
time=input("enter the time of travel\n")
destination=input("enter the destination\n")

#call the fuctionds
availability=busscheduler(day,time,destination)
if availability==True:
    print(f"{bus}\t is available on the day\n")
else:
    print("no matching bus found!!!\n")