'''
-->Python has no command for declaring a variable.
-->A variable is created the moment you first assign a value to it.
-->Variables do not need to be declared with any particular type, and can even change type after they have been set.
--> type(variable_name) method says the type of the variable
'''
x=10 #this is integer
print(type(x))
x='razon' #this is string
print(type(x))
y=10.5 # float
print(type(y))

#! casting
first=int(10)
second=str(10)
third=float(10)
print(f"{type(first)} {type(second)} {type(third)}")
#! variable naming 
''' 
-->A variable name must start with a letter or the underscore character
-->A variable name cannot start with a number
-->A variable name can only contain alpha-numeric characters and underscores (A-z, 0-9, and _ )
-->Variable names are case-sensitive (age, Age and AGE are three different variables)
-->A variable name cannot be any of the Python keywords.
'''
#! multiple values
x,y,z =10,20.5,'razon'
print(x,y,z)
x=y=z=10
print(x,y,z)

