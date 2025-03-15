'''
-->Variables that are created outside of a function (as in all of the examples in the previous pages) are known as global variables.

-->Global variables can be used by everyone, both inside of functions and outside.
'''
x='razon'
def myfunc():
    x='hello'
    print(x) # now this x is local variable
   
myfunc()    
print(x) #now this x is global variable
def myfunc2():
    global x # global keyword to change value of a global variable inside a function
    x='world' # assigning new value
    print(x)
def myfunc3():
    global y # creating global variable from inside a function
    y="global variable is printed from" #assigning value
    print(y+" inside")
myfunc3()        
print(y+" outside") 