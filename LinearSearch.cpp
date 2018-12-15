#include <iostream>

int linearSearch(const int a[], const int &size, const int &number)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		++count;
		if (a[i] == number)
			return i;
	}
	return -1;
	if (count == 1)
		std::cout << "Number of loop required to find the element in the array is 1.\n";
	else
		std::cout << "Number of loops required to find the element in the array are " << count << ".\n";
}

int main()
{
	int a[] = { 2,3,1,5,9,6,7,4,8,10 };

	int num, index = 0;
	int size = sizeof(a) / sizeof(a[0]);
	std::cout << "Enter the number you want to search : ";
	std::cin >> num;
	if(size != 0)
		index = linearSearch(a, size, num);
	if (index != -1)
		std::cout << num << " is found in the array and the index of the " << num << " is " << index << ".\n";
	else
		std::cout << num << " is not found in the array." << std::endl;
	system("pause");
}