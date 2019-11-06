arr = [9, 5, 4, 1, 3, 7]


def select(N):
    for i in range(len(N)):
        for j in range(i, len(N)):
            if N[i] > N[j]:
                N[i] = N[i]+N[j]
                N[j] = N[i] - N[j]
                N[i] = N[i] - N[j]
    return N


print(select(arr))
