#true = 1
#print(true)


a = 10
b = 20

c = a
a = b
b = c

print(a,b)



a = 10
b = 20

a, b = b, a

print(a, b)



a,b,c = 100,200,300

d,e,f = a,b,c

c,a,b = d,e,f

print(a,b,c)



a, b, c = 100, 200, 300
a, b, c = b, c, a
print(a, b, c)

