def isMatch(self, s, p):
    r, c = (len(s), len(p))
    if r == 0 and c == 0:
        return True
    if c == 0:
        return False
    table = [[False for j in range(c + 1)] for i in range(r + 1)]
    table[0][0] = True
    for i in range(2, c + 1):
        if p[i - 1] == '*':
            table[0][i] = table[0][i - 2]
    for i in range(1, r + 1):
        for j in range(1, c + 1):
            if s[i - 1] == p[j - 1] or p[j - 1] == '.':
                table[i][j] = table[i - 1][j - 1]
            elif j > 1 and p[j - 1] == '*':
                table[i][j] = table[i][j - 2]
                if p[j - 2] == '.' or p[j - 2] == s[i - 1]:
                    table[i][j] = table[i][j] or table[i - 1][j]
    return table[r][c]