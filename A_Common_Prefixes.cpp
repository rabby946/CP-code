def solve():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        a = list(map(int, input().split()))
        s = ""
        ans = []
        while len(s) < 100:
            s += 'a'
        ans.append(s)

        for i in range(n - 1, -1, -1):
            if a[i] == 0:
                if s[0] == 'a':
                    s = 'b' + s[1:]
                else:
                    s = 'a' + s[1:]
                ans.append(s)
                continue
            if s[a[i]] == 'a':
                s = s[:a[i]] + 'b' + s[a[i]+1:]
            else:
                s = s[:a[i]] + 'a' + s[a[i]+1:]
            
            ans.append(s)

        for string in reversed(ans):
            print(string)

if __name__ == "__main__":
    solve()
