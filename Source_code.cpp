#include <iostream>
using namespace std;
int main()
{
	//Muhammad Ahmad
cout<<”\t\t”<<”|  Unique Array Maker  |”<<endl<<endl;
	//Initialization and Declaration
	int a, b, c, d, e, count = 0, size = 15;
	int array[size], index[size];
	cout << "Enter Positive Integers For Array: ";

	//Loop for taking input of array from user
	for (a = 0; a < size; a++)
	{
		cin >> array[a];
	}
	//Outer loop
	for (a = 0; a < size; a++)
	{
		count = 0;
		//inner loop for Counting No. of integers.
		for (b = 0; b < size; b++)
		{
			if (array[a] == array[b])
			{
				index[count] = b;
				count++;
			}
		}
		if (count > 1)
		{
			count--;

			cout << "Integer " << array[a] << " Has Duplicates: " << count << endl;
			cout << "Please Enter " << count << " Value: ";

			int value[count], input = 0;
			//input of value from user
			for (c = 0; c < count; c++)
			{
				cin >> value[c];
				for (e = 0; e < size; e++)
					//if value already exists this code will execute
					if (value[c] == array[e])
					{
						cout << "This Value is Already There!" << endl
							 << "Enter Other Value: ";
						cin >> value[c];
					}
			}
			//Value updating of duplicates
			for (d = index[input] + 1; d < size; d++)
			{
				if (array[d] == array[a])
				{
					array[d] = value[input];
					input++;
				}
			}
			cout << "\n”” Array After Updating This Duplicate is: " << endl;
			for (e = 0; e < size; e++)
			{
				cout << array[e] << " ";
			}
			cout << endl
				 << endl;
		}
	}
	//Final Result of Array
            cout<<"____________________________________________________________"<<endl;	
cout << "Array Has All Unique Elements: " << endl;
	for (e = 0; e < size; e++)
	{
		cout << array[e] << " ";
	}
cout<<endl;
	return 0;
}
