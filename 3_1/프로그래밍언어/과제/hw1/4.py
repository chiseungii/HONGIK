class Orders:
	def __init__(self, ary):
		self.ary = ary
		self.sizeAry = len(ary)

	def preOrder(self, node):
		if node > self.sizeAry: return

		print(self.ary[node - 1])
		self.preOrder(node * 2)
		self.preOrder(node * 2 + 1)

	def inOrder(self, node):
		if node > self.sizeAry: return

		self.inOrder(node * 2)
		print(self.ary[node - 1])
		self.inOrder(node * 2 + 1)

	def postOrder(self, node):
		if node > self.sizeAry: return

		self.postOrder(node * 2)
		self.postOrder(node * 2 + 1)
		print(self.ary[node - 1])

if __name__ == "__main__":
	binTree = Orders([15, 1, 37, 61, 26, 59, 48])

	print("Preorder Traverse")
	binTree.preOrder(1)

	print("Inorder Traverse")
	binTree.inOrder(1)

	print("Postorder Traverse")
	binTree.postOrder(1)
