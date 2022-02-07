
kind = ' '
num_dogs = 0
num_cats = 0
num_others = 0
print("Do you have any pets?")
answer = input()
while answer == "yes":
    print("Please enter a D if pet "), i + 1, "is a Dog and C if it's a cat"
    kind = input()
    if kind == 'D':
        num_dogs = num_dogs+1
    elif kind == 'C':
        num_cats = num_cats+1;
    else:
        num_others = num_others+1;
        print("I guess pet ", i + 1, "isn't a cat or dog")
else:
    print("Sucks to be you!");

print("You have", num_dogs, " Dogs and ")
print(num_cats, "cats and")
print(num_others, "other pets")
