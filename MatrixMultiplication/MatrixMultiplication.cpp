// MatrixMultiplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{

	int a[2][2] = { { 1, 2 }, { 3, 4 } };
	int b[2][2] = { { 5, 6 }, { 7, 8 } };
	int result[2][2] = { 0 };
	int sum = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			result[i][j] = sum;
			sum = 0;
		}
	}
	//std::cout << arr[0][0] * arr[1][0] + arr[0][1] * arr[1][1] << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 ; j++)
		{
			std::cout << result[i][j] << std::endl;
		}
	}
	
	system("pause");
    return 0;
}

