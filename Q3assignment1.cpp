/*Q3 Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s in last */

#include <iostream>
using namespace std;
int main()
{
    cout<<"To sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s in last\n\n";
    cout<<"-------------------------------------------------------------------------------------------------------------\n";
	int arr1[] = {0, 1, 2, 2, 1, 1, 0, 0, 1};
	int arr2[] = {0, 1, 2, 2, 1, 1, 0, 0, 1};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);
	int l = m + n;
	int arr3[l], j = 0;
	for (j = 0; j < n; j++)
	{
		arr3[j] = arr1[j];
	}
	for (int k = 0; k < m; k++)
	{
		arr3[j] = arr2[k];
		j++;
	}
	int i, key, k;
    for (i = 1; i < l; i++) {
        key = arr3[i];
        k = i - 1;
        while (k >= 0 && arr3[k] > key) {
            arr3[k + 1] = arr3[k];
            k = k - 1;
        }
        arr3[k + 1] = key;
    }


	cout<<"Inputs Are:  ";
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] <<" ";
	}
	cout<<endl <<"\t     ";
	for (int i = 0; i < m; i++)
	{
		cout<< arr2[i] <<" ";
	}
	cout<<endl<<"Output is:   ";
	for (int i = 0; i < l; i++)
	{
		cout << arr3[i] <<" ";
	}
	cout<<"\n";
	cout<<"-------------------------------------------------------------------------------------------------------------\n";
	cout<<"PROGRAM PREPARED AND EXECUTED BY: SOUMYA POONIA, CSE3(N), CLASS ROLL NO.:72"<<endl;
	return 0;
}
