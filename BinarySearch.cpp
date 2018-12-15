#include <iostream>

int binarySearch(const int arr[], const int &size, const int &target)
{
	int min = 0, max = size - 1, guess, count = 0;
	
	while (max >= min)
	{
		++count;
		guess = (min + max) / 2;
		if (arr[guess] == target)
		{
			if (count == 1)
				std::cout << "Number of loop required to find the element in the array is 1.\n";
			else
				std::cout << "Number of loops required to find the element in the array are " << count << ".\n";
			return guess;
		}
		else if (arr[guess] > target)
			max = guess - 1;
		else
			min = guess + 1;
	}
	return -1;
}

//void sort(int arr[], const int &size)
//{
//	int temp = 0;
//	for (int i = 0; i < size-1; ++i)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			temp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = temp;
//		}
//
//	}
//}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int num, index = 0, size = sizeof(a) / sizeof(a[0]);
	std::cout << "Enter the number you want to search : ";
	std::cin >> num;
	if (size != 0)
		index = binarySearch(a, size, num);
	if (index != -1)
		std::cout << num << " is found in the array and the index of the " << num << " is " << index << ".\n";
	else
		std::cout << num << " is not found in the array." << std::endl;
	system("pause");
}