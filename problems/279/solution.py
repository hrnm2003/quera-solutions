a, x, n = map(int, input().split())

def factorial(number):
    result = 1
    for i in range(1, number+1):
        result *= i
    return result

sum = 0
for k in range(n+1):
    sum += factorial(n) // (factorial(n - k) * factorial(k)) * (x ** k) * (a ** (n - k))

print(sum)