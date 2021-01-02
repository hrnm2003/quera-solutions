a = int(input())
b = int(input())
c = int(input())

if(a * a + b * b == c * c):
    print("YES")
elif(a * a + c * c == b * b):
    print("YES")
elif(b * b + c * c == a * a):
    print("YES")
else:
    print("NO")
