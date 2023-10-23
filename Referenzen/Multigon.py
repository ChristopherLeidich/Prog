from turtle import *
speed(600000000)
pensize(width = 1)
color('purple')
fillcolor('white')
bgcolor('black')
#hideturtle()
c = 6
b = 250
a = 4
goto(300.2,240.1)
while b > 0:
    if(b < 200):
        color('red')
    if(b < 150):
        color('yellow')
    if(b < 100):
        b = b -5
    left(b)
    right(a)
    backward(c)
    forward(b * 3)
    b = b -0.02

    