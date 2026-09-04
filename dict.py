laptop={"Model":"HP","RAM":"16GB","Price":"150000","HDD":"500GB","CPU Speed":"I core 7,Gen 13"}
#print(len(laptop))

#getting the cpu speed of the laptop
#print(laptop["CPU Speed"])

#gettingall the keys
#print(laptop.keys())

#add serial number to dictonary
#laptop["SNO"]="00011"
#print(laptop)

#get all the dictonary values
#print(laptop.values())

#get key/values
#print(laptop.items())

#search dictonary laptop
#var=input("Enter the item to search for\n")
#   print(f"{var}\t exists in the dictonary")
#else:
#   print(f"{var}\t doesn't exist in the dictonary")

#update RAM to 32 GB
#laptop["RAM"]="32GB"
#laptop["HDD"]="1 TB"
#print(laptop)

#remove RAM key
#laptop.pop("RAM")
#del laptop["HDD"]

#removing the last item
#laptop.popitem()

#removing everything in the dictonary
laptop.clear()

#deletes the dictonary
del laptop
print(laptop)