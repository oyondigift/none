#create a list
cars=["Honda CR-V","Toyota RAV4","Benz","Hyundai Elantra Hybrid"]
#displaying list items
print(cars)
print(f"total items in the list\t{int(len(cars))}")
#access the third item and print
print(f"third item\t {cars[2]}")
print(f"second to fourth element\t {cars[1:4]}")
#ask the user for the input
search=input("what do you wish to search for \n")
if search in cars:
    print(f"that item exist in the list")
else:
    print("the item doesn't exist in the list")


