import heapq

cost = [[0,10,15,20], 
        [10,0,35,25], 
        [15,35,0,30], 
        [20,25 ,30,0]]

n = len(cost)

def a_star_tsp():
    h = lambda c,v: min((cost[c][i] for i in range(n) if i not in v), default=0)
    pq = [(h(0, [0]), 0, [0])]
    best, min_cost = [], float('inf')

    while pq:
        f, g, path = heapq.heappop(pq)
        curr = path[-1]
        if len(path) == n:
            total = g + cost[curr][0]
            if total < min_cost: 
                best, min_cost = path + [0], total
            continue
        for i in range(n):
            if i not in path:
                ng = g + cost[curr][i]
                heapq.heappush(pq, (ng + h(i, path+[i]), ng, path + [i]))
    return best, min_cost

p, c = a_star_tsp()
print("Path:", ' -> '.join(map(str, p)))
print("Cost:", c)
