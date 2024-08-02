class Node:
	
	value = 0
	left = None
	right = None
	
	def __init__(self, value, left, right):
		self.value = value
		self.left = left
		self.right = right

left_left_node = Node(3, None, None)
right_left_node = Node(5, None, None)
left_right_node = Node(4, None, None)
right_right_node = Node(6, None, None)
left_node = Node(1,left_left_node,left_right_node)
right_node = Node(2,right_left_node,right_right_node)
root_node = Node(0,left_node,right_node)

def in_order(node : None):
	print(node.value, end=" ")
	
	if(node.left != None):
		in_order(node.left)
	

	if(node.right != None):
		in_order(node.right)


def pre_order(node : None):
	
	if(node.left != None):
		pre_order(node.left)
	
	print(node.value, end=" ")

	if(node.right != None):
		pre_order(node.right)


def post_order(node : None):
	
	if(node.left != None):
		post_order(node.left)
	

	if(node.right != None):
		post_order(node.right)

	print(node.value, end=" ")
#   0
# 1   2
#3 4 5 6 
# pre_order 0 1 3 4 2 5 6
# in_order 3 1 4 0 5 2 6
# post_order 3 4 1 5 2 6 0
in_order(root_node)
print()
pre_order(root_node)
print( )
post_order(root_node)
print()
