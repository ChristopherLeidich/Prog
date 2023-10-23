import turtle
import random
#import tkinter
import tkinter.messagebox as msg

die = [1,2,3,4,5,6,7,8,9,10]

#top = tkinter.Tk()
turtle.bgcolor('black')
player_one = turtle.Turtle()
player_one.color("green")
player_one.shape("turtle")
player_one.penup()
player_one.goto(-400,100)
player_two = player_one.clone()
player_two.color("blue")
player_two.penup()
player_two.goto(-400,-100)

player_one.goto(400,60)
player_one.pendown()
player_one.circle(40)
player_one.penup()
player_one.goto(-400,100)
player_two.goto(400,-140)
player_two.pendown()
player_two.circle(40)
player_two.penup()
player_two.goto(-400,-100)
#top.mainloop()

for i in range(20):
    if player_one.pos() >= (400,100):
        #for i in range(50):   
            msg.showinfo("Result","Player One Wins!!")
            break
    elif player_two.pos() >= (400,-100):
        #for i in range(50): 
            msg.showinfo("Result","Player Two Wins!!")
            break
    else:
            font=("Arial", 55)
            player_one_turn = msg.showinfo("Notice","Press 'Ok' to roll the die ")
            die_outcome = random.choice(die)
            msg.showinfo("The result of the die roll is: ",die_outcome)
            #print(die_outcome)
            print("The number of steps will be: ")
            print(20*die_outcome)
            player_one.fd(20*die_outcome)
            player_two_turn = msg.showinfo("Notice","Press 'Ok' to roll the die ")
            die_outcome = random.choice(die)
            msg.showinfo("The result of the die roll is: ",die_outcome)
            #print(die_outcome)
            print("The number of steps will be: ")
            print(20*die_outcome)
            player_two.fd(20*die_outcome)
#top.mainloop()