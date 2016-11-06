#include "functions.h"

int max(int arg[], int length)
{
	int max=0;
	for (int i = 0; i < length; i++)
	//for (int i=1;i<length;i++)
	{
		if (arg[i]>max)
		{
			max=arg[i];
			//max=arg[1];
		}

	}
	return max;
}

int min (int arg[], int length)
{
	int min;
	//int min=0;
	//for (int i=1;i<length;i++)
	for (int i = 0; i < length; i++)
	{
		if (i == 0) {
			min = arg[i];
		}

		if (arg[i]<min)
		{
			min= arg[i];
		}

	}
	return min;
}

int sum(int arg[], int length)
{
	int sum=0;
	//for (int i=1;i<length;i++)
	for (int i = 0; i < length; i++)
	{
		sum+=arg[i];
	}
	return sum;

}

