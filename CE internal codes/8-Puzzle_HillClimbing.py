import copy

GOAL_STATE = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 0]
]

def display(state):
    for row in state:
        print(row)
    print()

def get_blank(state):
    for i in range(3):
        for j in range(3):
            if state[i][j] == 0:
                return i, j

def is_valid(x, y):
    return 0 <= x < 3 and 0 <= y < 3

def move(state, dx, dy):
    x, y = get_blank(state)
    nx, ny = x + dx, y + dy
    if is_valid(nx, ny):
        new_state = copy.deepcopy(state)
        new_state[x][y], new_state[nx][ny] = new_state[nx][ny], new_state[x][y]
        return new_state
    return None

def heuristic(state):
    cost = 0
    for i in range(3):
        for j in range(3):
            if state[i][j] != 0:
                val = state[i][j] - 1
                goal_x, goal_y = val // 3, val % 3
                cost += abs(i - goal_x) + abs(j - goal_y)
    return cost

def hill_climbing_with_user_moves(initial_state):
    current = initial_state
    while True:
        display(current)
        if current == GOAL_STATE:
            print(" Reached Goal!")
            break

        print("Choose move:")
        print("1. Up")
        print("2. Down")
        print("3. Left")
        print("4. Right")
        print("5. Exit")

        try:
            choice = int(input("Enter your choice: "))
            if choice == 5:
                print("Exited.")
                break

            direction_map = {
                1: (-1, 0),
                2: (1, 0),
                3: (0, -1),
                4: (0, 1)
            }

            if choice in direction_map:
                dx, dy = direction_map[choice]
                next_state = move(current, dx, dy)
                if next_state:
                    if heuristic(next_state) <= heuristic(current):
                        current = next_state
                    else:
                        print(" That move does not improve the heuristic. Try a better move.")
                else:
                    print(" Invalid move.")
            else:
                print(" Invalid choice.")

        except ValueError:
            print(" Please enter a valid number.")

# Uncomment this block for user input:
"""
def get_user_input():
    print("Enter the initial state (use 0 for the blank):")
    state = []
    for i in range(3):
        row = list(map(int, input(f"Row {i+1}: ").split()))
        state.append(row)
    return state

initial_state = get_user_input()
"""

# Default initial state (sample input from user might look like this)
initial_state = [
    [1, 2, 3],
    [4, 0, 5],
    [6, 7, 8]
]

hill_climbing_with_user_moves(initial_state)
