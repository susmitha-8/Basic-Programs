#to solve quadratic equation
import cmath  
a = float(input('a: '))  
b = float(input('b: '))  
c = float(input('c: '))  
d = (b**2) - (4*a*c)  
sol1 = (-b-cmath.sqrt(d))/(2*a)  
sol2 = (-b+cmath.sqrt(d))/(2*a)  
print('{0}{1}'.format(sol1,sol2))
