from collections import deque

def bfs():
    queue = deque([((3, 3, 0, 0, 'L'), [])])
    visited = set()
    MOVES = [(1, 0), (2, 0), (0, 1), (0, 2), (1, 1)]

    while queue:
        state, path = queue.popleft()

        if state[:2] == (0, 0):
            return path + [state]

        if state in visited:
            continue
        visited.add(state)

        ml, cl, mr, cr, side = state

        for m, c in MOVES:
            if side == 'L':
                next_state = (ml - m, cl - c, mr + m, cr + c, 'R')
            else:
                next_state = (ml + m, cl + c, mr - m, cr - c, 'L')

            if (
                min(next_state[:4]) >= 0 and
                (next_state[0] in (0, 3) or next_state[0] >= next_state[1]) and
                (next_state[2] in (0, 3) or next_state[2] >= next_state[3])
            ):
                queue.append((next_state, path + [state]))

result = bfs()

for i, (ml, cl, mr, cr, boat) in enumerate(result):
    print(f"Step {i}: L = {ml}M {cl}C | R = {mr}M {cr}C | Boat = {boat}")
print(f"Total Steps: {len(result)}")