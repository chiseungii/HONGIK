def binSearch(x, li):
	left = 0
	right = len(li) - 1

	while left <= right:
		mid = (left + right) // 2

		if li[mid] == x: return mid + 1
		elif li[mid] < x: left = mid + 1
		else: right = mid - 1

	return 'None'

if __name__ == "__main__":
	listA = [1, 11, 15, 19, 37, 48, 59, 61]

	a = int(input("Input Number >> "))
	print("Order : ", binSearch(a, listA))
