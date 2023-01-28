def linearSearch(arr, key):
    for i in range(len(arr)):
        # key found in arr-> return index
        if arr[i] == key:
            return i
    # key not found in arr-> return -1
    return -1


# main
if __name__== "__main__":
    # array of elements
    arr = list(map(int, input("Enter array elements: ").split()))
    # key to be searched
    key = int(input("Enter key to be searched: "))
    i = linearSearch(arr, key)
    if i == -1:
        print(f"{key} not found")
    else:
        print(f"{key} found at position {i+1} in array")