def min_removals_for_good_sequence(N, a):
    # Count the occurrences of each number in the sequence
    count_dict = {}
    for num in a:
        count_dict[num] = count_dict.get(num, 0) + 1

    removals = 0

    # Iterate through the numbers and check if they satisfy the condition
    for num, count in count_dict.items():
        if count > num:
            removals += count - num
        elif count < num:
            removals += count

    return removals


# Input
N = int(input())
a = list(map(int, input().split()))

# Calculate and print the minimum number of elements to remove
result = min_removals_for_good_sequence(N, a)
print(result)
