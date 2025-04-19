class State:
    def __init__(self, x=0, y=0): 
        self.x, self.y = x, y
    def __str__(self): 
        return f"({self.x}, {self.y})"

def game():
    J1, J2, T, s = 5, 4, 2, State()
    Actions = ["Fill 5L", "Fill 4L", "Empty 5L", "Empty 4L", 
         "5→4", "4→5", "Reset", "Exit"]
    print(f" Goal: {T}L in 5L jug")

    while True:
        print(f"\n State: {s}")
        if s.x == T: 
            print(" Done!")
            break
        for i, action in enumerate(Actions, 1): 
            print(f"{i}. {action}")
        try: choice = int(input("Choose an action: "))
        except ValueError: 
            print(" Invalid input!")
            continue 
        if choice == 1: 
            s.x = J1
        elif choice == 2:
            s.y = J2
        elif choice == 3:
            s.x = 0
        elif choice == 4: 
            s.y = 0
        elif choice == 5:
             t = min(s.x, J2 - s.y)
             s.x -= t; s.y += t
        elif choice == 6:
             t = min(s.y, J1 - s.x)
             s.y -= t; s.x += t
        elif choice == 7: 
             s = State()
        elif choice == 8:
             print(" Bye!")
             break

if __name__ == "__main__": game()
