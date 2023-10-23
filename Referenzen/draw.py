# Python program to draw
# Rainbow Benzene
# using Turtle Programming
import turtle

screen = turtle.Screen()
screen.title("A Turtle Graphics Screen")
screen.setup(600, 600)
turtle.speed(10)
turtle.hideturtle()
colors = ['red', 'purple', 'blue', 'green', 'orange', 'yellow']
t = turtle.Pen()
turtle.bgcolor('black')
for x in range(660):
	t.pencolor(colors[x%6])
	t.width(x//100 + 1)
	t.forward(x)
	t.left(59)
turtle.pack()

# import turtle as tr
# import math as m

# x0, y0 = -300, 275  # The point near the upper left corner of the Turtle screen - virtual origin of coordinates
# Y0 = -y0 + 100  # The reference vertical coordinate for the second function
# A0 = 100  # The amplitude of sinus function
# f0 = 80   # 1/frequency (reverse frequency)

# def draw1():
#    x1 = 0
#    y1 = A0 - A0 * m.sin(x1/f0)
#    tr.goto(x0 + x1, y0 - y1)
#    tr.down()
#    tr.dot(size = 1)
#    for x2 in range(abs(x0)*2):
#       y2 = A0 - A0 * m.sin(x1/f0)
#       tr.goto(x0 + x2, y0 - y2)
#       tr.dot(size = 1)
#       x1, y1 = x2, y2

# def draw2(f0):
#    x1 = 0
#    y1 = Y0 + A0 * m.sin(x1/f0)
#    tr.goto(x0 + x1, y1)
#    tr.down()
#    tr.dot(size = 1)
#    for x2 in range(abs(x0)*2):
#       y2 = Y0 + A0 * m.sin(x1/f0)
#       tr.goto(x0 + x2, y2)
#       tr.dot(size = 1)
#       x1, y1 = x2, y2

# tr.speed('fastest')
# tr.up()
# tr.goto(x0, y0)
# tr.hideturtle()
# tr.color('red')
# draw1()  # The pivot point - the virtual origin of coordinates (x0 and y0)

# tr.up()
# tr.goto(x0,y0)
# tr.color('blue')
# draw2(f0/2)  # The pivot point - x0 and Y0
# input()      # waiting for the <Enter> press in the console window

