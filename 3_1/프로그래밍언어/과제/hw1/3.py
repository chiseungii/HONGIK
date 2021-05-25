def merge(ary, low, mid, high):
	copy = []
	left = low
	right = mid + 1

	while (left <= mid) and (right <= high):
		if ary[left] < ary[right]:
			copy.append(ary[left])
			left += 1
		else:
			copy.append(ary[right])
			right += 1

	if left > mid:
		for i in range(right, high + 1):
			copy.append(ary[i])
	else:
		for i in range(left, mid + 1):
			copy.append(ary[i])

	index = 0
	for i in range(low, high + 1):
		ary[i] = copy[index]
		index += 1

def mergeSort(ary, low, high):
	if low < high:
		mid = (low + high) // 2
		mergeSort(ary, low, mid)
		mergeSort(ary, mid + 1, high)
		merge(ary, low, mid, high)

if __name__ == "__main__":
	listA = [100, 23, 31, 123, 435, 642, 1]
	mergeSort(listA, 0, len(listA) - 1)

	print(listA)
