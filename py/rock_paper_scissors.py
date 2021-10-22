from random import randint

#create a list of play options
n = ["Rock", "Paper", "Scissors"]

#assigning a random play to the computer
computer = n[randint(0,2)]

#initially set player to False
player = False

while player == False:
#set player to True
    player = input("Rock, Paper, Scissors?")
    if player == computer:
        print("Tie!")
    elif player == "Rock":
        if computer == "Paper":
            print("You lose!")
        else:
            print("You win!")
    elif player == "Scissor":
        if computer == "Rock":
            print("You lose!")
        else:
            print("You win!")
    elif player == "Paper":
        if computer == "Scissor":
            print("You lose!")
        else:
            print("You win!")
    else:
        print("That's not a valid play. Check your spelling!")
    #player was set to True, but we want it to be False so the loop continues
    player = False
    computer = n[randint(0,2)]
