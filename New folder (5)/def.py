var = int(input(" Type in your age "))
while True:
    if var <  18:
        print("Invalid  age, u should be older than 18")
        quit()
    elif var > 109:
        print("jhut bolchas ")
    else:
        ter = input(" which eskool") 
        if ter == int:
            print("Cannot find the scool")
            quit()
            
        else:
            print("sucess")
            macha = input(" are you sure you want to proceed ? (y/n): ")
            if macha == "y":
                print(" ok, lets move... ")
            elif  macha == "n":
                quit()
            else:
                print(" r ")






