#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;
int n;
int i;
struct Person
{
	char name[100];
	int age;
	float score;
};

void displayData(Person);

int main()
{
	printf("how many people : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{

		Person p;
		printf("Enter name :");
		scanf("%s", &p.name);
		printf("Enter age :");
		scanf("%d", &p.age);
		printf("Enter score :");
		scanf("%f", &p.score);

		displayData(p);
		printf("-----------------------------\n");
	}
	return 0;

}
void displayData(Person p)
{
	printf("Enter name : %s     ", p.name);
	if (p.age > 0)
	{
		printf("Enter age : %d     ", p.age);
	}
	else
	{
		printf("age error     ");
	}
	printf("Enter score : %f     \n", p.score);


	if (p.score <= 100 && p.score >= 0)
	{
		if (p.score >= 80)
		{
			printf("Grade A\n");
		}
		else if (p.score < 80 && p.score >= 75)
		{
			printf("Grade B+\n");
		}
		else if (p.score < 75 && p.score >= 70)
		{
			printf("Grade B\n");
		}
		else if (p.score < 70 && p.score >= 65)
		{
			printf("Grade C+\n");
		}
		else if (p.score < 65 && p.score >= 60)
		{
			printf("Grade C\n");
		}
		else if (p.score < 60 && p.score >= 55)
		{
			printf("Grade D+\n");
		}
		else if (p.score < 55 && p.score >= 50)
		{
			printf("Grade D\n");
		}
		else if (p.score < 50)
		{
			printf("Grade F\n");
		}
		else {}
	}
	else
	{
		printf("please enter score between 0 - 100 \n");
	}
}




