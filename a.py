# Take input from user
n = int(input("Enter a number: "))

# Initialize the factorial as 1
factorial = 1

# Calculate the factorial using a loop
for i in range(1, n+1):
    factorial *= i

# Print the result
print("Factorial of", n, "is", factorial)
