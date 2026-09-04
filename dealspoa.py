print("Deals Poa catalogue\n1.Add new product\n2.Find product\n3.My Cart\n4.Exit\n")
#declaring the integer
key=int(input("select a number from the above\n"))
#calling of the functions
if key==1:
    #functions to add the products
    def Addproduct():
        name=input("Enter the Name of The Product\n")
        description=input("Enter the Product Description\n")
        category=input("Enter the Product Category\n")
        price=float(input("Enter the Price of the Product\n"))
        print(f"Product Name:{name}\tDescription:{description}\tCategory:{category}\tPrice in KSH:{price}\n")
    Addproduct()
elif key==2: 
    #function to find the products      
    def Findproducts():
        search=input("Search the products you want\n")
        category=input("Enter the Category of your Product\n")
        minimum_price=int(input("Enter the minimum Price of your product\n"))
        maximum_price=int(input("Enter the maximum price of your product\n"))
        print(f"Product Name:{search}\tCategory:{category}\tMinPrice KSH:{minimum_price}\tMaxPrice KSH:{maximum_price}\n")
    Findproducts()
elif key==3:
    #functions to display cart
    def MyCart():
        name=input("Enter the Name of the Product\n")
        description=input("Enter the Product Description\n")
        category=input("Enter the Product Category\n")
        price=float(input("Enter the Price of the product\n"))
        print(f"Product Name:{name}\tDescription:{description}\tCategory:{category}\tPrice in KSH{price}\n")
    MyCart()        
elif key==4:
    def ExitMenu():
        print("Exiting the Program\n")
    ExitMenu()
#Exiting the program
exit()