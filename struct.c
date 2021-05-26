#include<stdio.h>
#define endl printf("\n")
struct student_details
{
	char name[100];
	int num;
	int nhomework;
	int ngrade;
	char homework[100][100];
	int grade[100][100];
};

int main()
{
	printf("Enter number of students\n");
	int n;
	scanf("%d",&n);
	struct student_details s[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter Student %d details\n",i+1);
		printf("Student Name: ");
		scanf("%s",s[i].name);
		endl;
		printf("Student Roll Number: ");
		scanf("%d",&s[i].num);
		endl;
		printf("Enter Number of homeworks student has: ");endl;
		int hnum;
		scanf("%d",&hnum);
		s[i].nhomework=hnum;
		printf("Enter homeworks\n");
		for(int j=0;j<hnum;j++)
		{
			scanf("%s",&s[i].homework[j]);
		}
		int gnum;
		printf("Enter Number of grades student has: ");endl;
		scanf("%d",&gnum);
		s[i].ngrade=gnum;
		printf("Enter Grades\n");
		for(int j=0;j<gnum;j++)
		{
			scanf("%s",&s[i].grade[j]);
		}

	}
	for(int i=0;i<n;i++){
		printf("Details stored successfully in struct");endl;
	}
	return 0;
}
