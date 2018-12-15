#include <iostream>

struct StackNode {
	int data;
	StackNode *next;
};

StackNode* newNode(const int data);
int isEmpty(StackNode *root);
void push(StackNode **root, const int data);
void pop(StackNode **root);
int peek(StackNode **root);
void printList(StackNode **root);

StackNode* newNode(const int data)
{
	StackNode *node = new StackNode;
	node->data = data;
	node->next = nullptr;
	return node;
}

int isEmpty(StackNode *root)
{
	return !root;
}

void push(StackNode **root, const int data)
{
	StackNode *node = new StackNode;
	node->data = data;
	if (*root == nullptr)
		node->next = nullptr;
	else
		node->next = *root;
	*root = node;
}

void pop(StackNode **root)
{
	if (isEmpty(*root))
	{
		std::cout << "The stack is underflow.\n";
		return;
	}
	else
	{
		StackNode *temp = *root;
		*root = (*root)->next;
		delete temp;
		return;
	}
}

int peek(StackNode **root)
{
	if (isEmpty(*root))
	{
		std::cout << "The stack is underflow.\n";
		return 0;
	}
	else
		return (*root)->data;
}

void printList(StackNode **root)
{
	if (isEmpty(*root))
	{
		std::cout << "The stack is empty.\n";
		return;
	}
	else
	{
		int count = 1;
		StackNode *temp = *root;
		std::cout << "The data in the stack are : \n";
		while (temp != nullptr)
		{
			if (temp == nullptr)
				break;
			std::cout << count << ".	" << temp->data << ".\n";
			++count;
			temp = temp->next;
		}

	}
}

int main()
{
	StackNode *root = nullptr;
	for(int i = 10; i < 101; i += 10)
		push(&root, i);

	printList(&root);

	system("pause");
}