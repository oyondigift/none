# Global list to store products
products = []
# Variable to store last found product
found_product = None
# Function to add a new product
def AddProduct():
    print("\n--- Add New Product ---")
    name = input("Enter product name: ")
    description = input("Enter product description: ")
    category = input("Enter product category: ")
    try:
        price = float(input("Enter product price: "))
    except ValueError:
        print("Invalid price. Try again.")
        return    
    product = {
    
        "name": name,
        "description": description,
        "category": category,
        "price": price}    
    products.append(product)
    print("Product added successfully!\n")
# Function to find products
def FindProducts():
    global found_product    
    print("\n--- Find Product ---")
    category = input("Enter category: ")    
    try:
        min_price = float(input("Enter minimum price: "))
        max_price = float(input("Enter maximum price: "))
    except ValueError:
        print("Invalid price range.")
        return    
    for product in products:
        if (product["category"].lower() == category.lower() and
            min_price <= product["price"] <= max_price):
            found_product = product
            print("Product found and saved to cart!\n")
            return
    print("No matching product found.\n")
    found_product = None
# Function to display cart
def MyCart():
    print("\n--- My Cart ---")
    if found_product:
        print("Product Name\tDescription\tCategory\tPrice")
        print(f"{found_product['name']}\t{found_product['description']}\t"
              f"{found_product['category']}\t{found_product['price']}")
    else:
        print("No product in cart.")    
    print()
# Function to exit program
def ExitMenu():
    print("Exiting program. Goodbye!")
    exit()
# Main menu function
def main():
    while True:
        print("Deals Poa Catalogue")
        print("1. Add new product")
        print("2. Find product")
        print("3. My Cart")
        print("4. Exit")
        choice = input("Enter your choice: ")
        if choice == "1":
            AddProduct()
        elif choice == "2":
            FindProducts()
        elif choice == "3":
            MyCart()
        elif choice == "4":
            ExitMenu()
        else:
            print("Invalid choice. Try again.\n")
# Run the program
main()