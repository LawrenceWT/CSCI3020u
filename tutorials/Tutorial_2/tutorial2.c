#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int main(void)
{
	printf("%s\n","Part 1");
	int array[10] = {1,2,3,4,5,6,7,8,9,10};

	for (int i = 0; i < 10; i++)
	{
		printf("%d", array[i]);
		printf("\n");
	}


	printf("\n");
	printf("%s\n","part 2");
	

	double list[5] = {1.2, 5.5, 2.1, 3.3, 3.3};

	for (int i = 0; i < 5; ++i)
	{
		if (i == 0)
		{
			printf("%s\n", "First element in list");
		}

		else 
		{
			if (list[i] > list[i-1])
			{
				printf("%s\n", "greater than");
			}

			else if (list[i] < list[i-1])
			{
				printf("%s\n", "less than");
			}

			else if (list[i] == list[i-1])
			{
				printf("%s\n", "equal to");
			}
		}
	}

	printf("\n");
	printf("%s\n","part 3");
	

	char hello[] = "hello world";

	for (int i = 0; hello[i] != '\0'; i++)
	{
		printf("%s\n", &hello[i]);
	}


	printf("\n");
	printf("%s\n", "part 4");

	for (int i = 1; i < 11; i++)
	{
		if (i % 2 == 0)
		{
			printf("%s\n", "even");
		}
		else
		{
			printf("%s\n", "odd");
		}
	}

	printf("\n");
	printf("%s\n", "part 5");

	srand(time(NULL));


	for (int i = 0; i < 10; i++)
	{
		double x1 = (rand() % 100) + 1;
		double x2 = (rand() % 100) + 1;

		double y1 = (rand() % 100) + 1;
		double y2 = (rand() % 100) + 1;

		euclid_dist(x1, x2, y1, y2);
	}

}


double euclid_dist(x1, x2, y1, y2)
{
	double vector; 
	double componentx;
	double componenty;

	componentx = (x1 - y1) ^ 2;
	componenty = (x2 - y2) ^ 2;

	vector = sqrt(componentx + componenty);

	printf("%\n", "X vector: <", x1, "," , x2, ">" );

	return vector;
}