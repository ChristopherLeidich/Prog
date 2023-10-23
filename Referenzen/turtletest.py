import turtle as turt

#turt = turtle.Turtle()
#turt.bgcolor('black')
turt.pensize(width = 3)
turt.fillcolor("purple")
turt.speed("slowest")

turt.begin_fill()
for i in range(12):
    turt.forward(50)
    turt.right(90)
    turt.left(60)
turt.end_fill()

  
#turt.bye()