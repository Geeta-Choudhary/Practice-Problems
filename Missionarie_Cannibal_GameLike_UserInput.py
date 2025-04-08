def invalid(m, c): return m and c > m

def display(lM, lC, rM, rC):
    print("\n===================================")
    print(f"LM : {lM} & LC : {lC} && RM : {rM} & RC : {rC}")
    print("===================================\n")

def main():
    lM = lC = 3
    rM = rC = 0
    boat = 'L'

    while True:
        if rM + rC == 6: print("Win..!!!"); break

        display(lM, lC, rM, rC)
        direction = "Left to Right" if boat == 'L' else "Right to Left"
        m = int(input(f"{direction} - Missionaries: "))
        c = int(input(f"{direction} - Cannibals: "))

        if not m and not c: print("Empty travel not allowed"); continue
        if m + c > 2: print("Max 2 allowed"); continue

        if boat == 'L' and lM >= m and lC >= c:
            lM -= m; lC -= c; rM += m; rC += c; boat = 'R'
        elif boat == 'R' and rM >= m and rC >= c:
            lM += m; lC += c; rM -= m; rC -= c; boat = 'L'
        else:
            print("Invalid move"); continue

        if invalid(lM, lC) or invalid(rM, rC):
            print("Cannibals eat missionaries..."); break

if __name__ == "__main__":
    main()
