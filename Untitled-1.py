def is_prime(n):
    if n < 1:
        print("Invalid input")
        return False
        
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
number = int(input("Enter a number: "))
result = is_prime(number)
if result == True:
    print("The number is prime")
else:
    print("The number is not primr")

    

