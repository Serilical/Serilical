import random
rnd = random.randint(1,10)
print ("Guess a number from 1-10")
answer = int(input())
while answer != rnd:
    if answer > rnd:
        print ("That's too high!")
        answer = answer+1
    elif answer < rnd:
        print ("That's too low!")
        answer = answer+1
    print ("Guess again!")
    answer = int(input())
else:
    print ("You are correct!")
