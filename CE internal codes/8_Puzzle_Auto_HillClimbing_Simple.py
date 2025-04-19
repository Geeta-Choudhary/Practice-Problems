from copy import deepcopy

GOAL =  [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 0]
]
print ("8-Puzzle Hill Climbing Algorithm")
print ("===================================")
print (GOAL)
print ("===================================")       
print ("0 = Blank Space")


def display(s): [print(r) for r in s]; print()

def blank(s): return next((i,j) for i in range(3) for j in range(3) if s[i][j]==0)

def heuristic(s): return sum(abs(i - (v-1)//3) + abs(j - (v-1)%3) 
                             for i in range(3) for j in range(3) if (v:=s[i][j]))

def move(s, dx, dy):
    x,y = blank(s); nx,ny = x+dx, y+dy
    if 0<=nx<3 and 0<=ny<3:
        ns = deepcopy(s)
        ns[x][y], ns[nx][ny] = ns[nx][ny], ns[x][y]
        return ns

def hill_climb(start):
    curr, steps = start, 0
    while True:
        display(curr)
        if curr == GOAL:
            print(f"Reached Goal in {steps} steps!"); break
        moves = [move(curr, dx, dy) for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]]
        valid = [(heuristic(m), m) for m in moves if m]
        best = min(valid, default=(999, None))
        if best[0] < heuristic(curr): curr = best[1]; steps += 1
        else: print("Stuck in local minimum."); break

# Test Input
initial_state = [
    [1, 2, 3],
    [0, 4, 5],
    [6, 7, 8]
]
hill_climb(initial_state)
