arr = [-1, -4, -3, --8, 0]

for j in range(len(arr)):
    for i in range(len(arr)-1):
        if arr[i] > arr[i+1]:
            arr[i] = arr[i]+arr[i+1]
            arr[i+1] = arr[i]-arr[i+1]
            arr[i] = arr[i]-arr[i+1]
print(arr)
