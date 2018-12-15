/*Stack using array*/

#include <iostream>
#include <stack>

#define MAX 10

struct Stack {
	
	int a[MAX];

	Stack() :top(-1) {}
	bool isEmpty();
	void push(const int data);
	void pop();

private:
	int top;
};

bool Stack::isEmpty() { return (top < 0); }

void Stack::push(const int data) 
{
	if (top >= (MAX - 1))
	{
		std::cout << "The stack is overflow.\n";
		return;
	}
	else
	{
		a[++top] = data;
		std::cout << "Successfully pushed into stack.\n";
		return;
	}
}
void Stack::pop() 
{
	if (top < 0)
	{
		std::cout << "The stack is underflow.\n";
		return;
	}
	else
	{
		a[top] = 0;
		top--;
		return;
	}
}

int main()
{
	Stack s;
	for (int i = 10; i < 101; i += 10)
		s.push(i);
	s.pop();

}