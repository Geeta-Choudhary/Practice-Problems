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


def next_states(s):
    x, y = s.x, s.y
    return {
        State(J1, y),
        State(x, J2),
        State(0, y),
        State(x, 0),
        State(x - min(x, J2 - y), y + min(x, J2 - y)),
        State(x + min(y, J1 - x), y - min(y, J1 - x))
    }

def dfs():
    stack, visited, path = [State(0,0)], set(), []
    while stack:
        s = stack.pop()
        if s in visited: 
            continue
        visited.add(s)
        path.append(s)
        if s.x == T: 
            return path
        stack.extend(next_states(s) - visited)
    return None

res = dfs()
print("\n".join(map(str, res))) if res else print("No solution found.")
