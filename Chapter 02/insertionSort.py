def insertionSortAscending(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j=i-1
        while (j >= 0) and (arr[j] > key):
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    return arr



def insertionSortDescending(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j=i-1
        while (j >= 0) and (arr[j] < key):
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    return arr

# Driver code to test above
if __name__ == '__main__':
    # taking input from user
    array = list(map(int, input("Enter the list items : ").split()))
    print("Sorted array in ascending order is:")
    print(insertionSortAscending(array))
    print("Sorted array in descending order is:")
    print(insertionSortDescending(array))