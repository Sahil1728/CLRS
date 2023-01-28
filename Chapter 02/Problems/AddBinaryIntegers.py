#Problem 2.1-5

def addBinaryIntegers(arr1, arr2):
    sum = [0]*(len(arr1)+1)
    carry = 0
    for i in range(len(arr1)-1, -1, -1):
        sum[i+1] = (arr1[i] + arr2[i] + carry)%2
        # //-> is integer division in python
        carry = (arr1[i] + arr2[i] + carry)//2
    sum[0] = carry
    return sum


def main():
    # taking input from user
    arr1 = [int(x) for x in input("Enter the first binary number array: ").split()]
    arr2 = [int(x) for x in input("Enter the second binary number array: ").split()]
    print("The sum of the two binary numbers is: ", addBinaryIntegers(arr1, arr2))

if __name__ == "__main__":
    main()
