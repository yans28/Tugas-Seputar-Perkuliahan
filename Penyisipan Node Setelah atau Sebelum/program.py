class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def push(head, data):
    new_node = Node(data)
    new_node.next = head
    return new_node

def insertAfter(prev_node, data):
    if prev_node is None:
        print("Error: Node not found.")
        return
    new_node = Node(data)
    new_node.next = prev_node.next
    prev_node.next = new_node

def insertBefore(head, data, key):
    new_node = Node(data)
    prev = None
    curr = head
    while curr and curr.data != key:
        prev = curr
        curr = curr.next
    if curr is None:
        print("Error: Node not found.")
        return
    new_node.next = curr
    if prev is None:
        head = new_node
    else:
        prev.next = new_node
    return head

def printList(node):
    while node:
        print(node.data, end=" ")
        node = node.next
    print()

head = None
head = push(head, 1)
head = push(head, 1)
head = push(head, 3)

print("Linked list: ")
printList(head)

insertAfter(head.next, 4)

print("\nLinked list: ")
printList(head)

insertBefore(head, 6, 1)

print("\nLinked list: ")
printList(head)