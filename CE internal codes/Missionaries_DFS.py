def valid(m1, c1, m2, c2):
    return all(x >= 0 for x in [m1, c1, m2, c2]) and (m1 == 0 or m1 >= c1) and (m2 == 0 or m2 >= c2)

def dfs(state, visited, path):
    if state in visited:
        return False
    visited.add(state)
    path.append(state)

    if state[:2] == (0, 0):
        return True

    ml, cl, mr, cr, boat = state
    for m, c in [(1, 0), (2, 0), (0, 1), (0, 2), (1, 1)]:
        if boat == 'L':
            next_state = (ml - m, cl - c, mr + m, cr + c, 'R')
        else:
            next_state = (ml + m, cl + c, mr - m, cr - c, 'L')
        
        if valid(*next_state[:4]) and dfs(next_state, visited, path):
            return True

    path.pop()
    return False

visited = set()
path = []
dfs((3, 3, 0, 0, 'L'), visited, path)

for i, state in enumerate(path):
    ml, cl, mr, cr, boat = state
    print(f"Step {i}: L = {ml}M {cl}C | R = {mr}M {cr}C | Boat = {boat}")
print(f"Total steps: {len(path)}")