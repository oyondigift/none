fruits=("orange","Grape","lime","cherry")
#print(fruits)
#print(f"The second item in the tuple\t{fruits[1]}")
#print(f"The second last item in the tuple\t{fruits[-2]}")
#print(f"Dispay item 2 to 3 in the tuple\t{fruits[1:3]}")
#print(f"Display from item 2 to last\t{fruits[1:]}")
#serach for item in the tuple
search=input("Enter the item you wish to seacrh for\n")
if search in fruits:
    print(f"{search}\t exists in the tuple")
else:
    print(f"{search} item doesn't exist in the tuple")