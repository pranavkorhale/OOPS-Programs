/* Created By : Mayuresh Mitkari */
/* Purpose : OOPS LAB ASSIGNMENT 7 */
/* Created on : 16 OCT 2019 */
/* Language : C++ */


/* Header files */
#include<iostream>
#include<stdlib.h>

/* Defining namespace */
using namespace std;

/* Defining a CLass Template */
template<class z>
class templates
{
	z arr[20];
	int n;

	public:
		void get()
		{
			int i;
		
			cout << "Enter no of elements in Array: ";
			cin >> n;
		
			cout << "\n Enter elements: ";
			for (i = 0;i < n;i++)
			cin >> arr[i];
		}
		/* Function for Selection Sort */
		void selectionSort()
		{
			int i, j, min;

			for (i = 0; i < n - 1; i++)
			{
				// Find the minimum element in unsorted array  
				min = i;
				for (j = i + 1; j < n; j++)
				{
					if (arr[j] < arr[min])
					{
						min = j;
					}
				}
				// Swap with the first element  
				z temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
			}

			cout << "\n Sorted Array Elements are: ";
			for (int i = 0;i < n;i++)
			{
				cout << " " << arr[i];
			}
		}
};
/* End of Class */

/* Main Function */
int main()
{
	int ch;

	templates<int> obj;
	templates<float> obj1;

	cout << "\n 1:For INT values\n 2:For FLOAT values\n Enter Choice: ";
	cin >> ch;

	switch (ch)
	{
		case 1: 
			obj.get();
			obj.selectionSort();
			break;
		
		case 2: 
			obj1.get();
			obj1.selectionSort();
			break;
		
		default:
			cout << "Wrong Choice" << endl;
	}
	return 0;
}
/* End of Main Function */
