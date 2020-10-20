""""file = open("file.txt" , "r")
f = file.readlines()
print(f)

BackShalsh = []
for line in f:
    BackShalsh.append(line.strip())
print(BackShalsh)
"""""   
""""
file = open("file.txt" , "w")
file.write("python\n")
file.write("mybad")
file.close()
"""""
#.find() ,.count()

var = input("type your password")
for i in var:
    if var == "-":
        print("Not a suitable password , Thus you cannot have '-' in your password")
        quit()
    elif var == ".":

        print(" The syntax '.' is not allowed ")
        quit()
    else:
        age = int(input("Whats your age :"))
        if age < 18:
            print(" You should be above 18 to play this game ")
        elif age >109:
            print("invailed age inserted")
        else:
            proceed = input("Do you want to proceedd ahead ?(y/n) :")
            if proceed == "y":
                import pyautogui,time
                time.sleep(2)
                file = open('file.txt', 'r')
                for word in file:
                    pyautogui.typewrite(word)
                    pyautogui.press('enter')
            elif proceed == "n":
                quit()
            else:
                print("invalid ")          
                


                

               
                 
                    

                
                    





