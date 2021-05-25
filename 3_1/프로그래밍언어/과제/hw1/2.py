def partition(ary, low, high):
	pivot = ary[low]
	j = low

	for i in range(low + 1, high + 1):
		if ary[i] < pivot:
			j += 1
			ary[i], ary[j] = ary[j], ary[i]

	ary[j], ary[low] = ary[low], ary[j]

	return j

def quickSort(ary, low, high):
	if high > low:
		pivotIndex = partition(ary, low, high)
		#print(ary)
		quickSort(ary, low, pivotIndex - 1)
		quickSort(ary, pivotIndex + 1, high)

if __name__ == "__main__":
	listA = [26, 5, 37, 1, 61, 11, 59, 15, 48, 19]
	quickSort(listA, 0, len(listA) - 1)

	print(listA)
