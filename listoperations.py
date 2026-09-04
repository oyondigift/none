cars=["BMW","BENZ","HONDA"]
cars2=["Chevrolet Silverado","Hyundai Tucson"]
cars.insert(1,"Toyota")
cars.append("Nissan")#added to the end
#combine the two list
cars.extend(cars2)
#removing BMW from the list
cars.remove("BMW")
cars.pop(3)
#deleting the second item
del cars[1]
#removes the last item
cars.pop()
cars.clear()
del cars
print(cars)