from collections import deque

J1, J2, T = 5, 4, 2

class State:
    def __init__(self, x, y):
        self.x, self.y = x, y
    def __str__(self): 
        return f"({self.x}, {self.y})"
    def __eq__(self, other): 
        return (self.x, self.y) == (other.x, other.y)
    def __hash__(self): 
        return hash((self.x, self.y))

def next_states(current_state):
    x, y = current_state.x, current_state.y
    return {
        State(J1, y), 
        State(x, J2), 
        State(0, y),
        State(x, 0),
        State(x - min(x, J2 - y), y + min(x, J2 - y)),
        State(x + min(y, J1 - x), y - min(y, J1 - x))
    }

def bfs():
    q = deque([(State(0,0), [])])
    visited = set()
    while q:
        current_state, path = q.popleft()
        if current_state in visited: 
            continue
        visited.add(current_state)
        if current_state.x == T: 
            return path + [current_state]
        for ns in next_states(current_state):
            if ns not in visited:
                q.append((ns, path + [current_state]))
    return None

res = bfs()
print("\n".join(map(str, res))) if res else print("No solution found.")
