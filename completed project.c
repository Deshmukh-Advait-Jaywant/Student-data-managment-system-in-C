#include<stdio.h>
#include<stdlib.h>
struct student{
			char name[20];
			char address[30];
			double roll_number;
			char father_name[20];
			char mother_name[20];
			char father_number[20];
			char mother_number[20];	
			double pincode;
			char phone_number[10];
			int marks[5];
			char section;
			int total_marks;
			float average;
			char grade;
			char gender[7];
			char date_birth[11];
			char email_id[50];
};
struct section{
	char se;
	struct student s[2];
};
struct clas{
	int cl;
	struct section sec[2];
};
	struct clas c[2];
	int i,j,k,l;
	void all_class();
	void particular_class();
	void print_one_class();
	void student_name();
	void student_roll_number();
	void student_grade();
	void student_fifty();
	void student_eighty();
void main()
{

	int i,z;
	printf("**********************************CHOOSE AN OPTION******************************************");
	printf("\n\t\t\tenter 1 to enter the data of a particular class : ");
	printf("\n\t\t\tenter 2 to enter the data of a all 6-10 class   : ");
	printf("\n\n\t\t\tENTER YOUR CHOICE :");
	scanf("%d",&z);
	printf("\n\t\t\t-----------------------------------\n");
	switch (z)
	{
		case 1:
			particular_class();
			break;
		
		case 2:
			all_class();
			break;
		
	}
	for(i=0;i<9;i++)
	{
	printf("\n\t\t\t***********************************************************************************");
	printf("\n\t\t\tenter 1 to print the data of a particular class : ");
	printf("\n\t\t\tenter 2 to print the data of a all 6-10 class : ");
	printf("\n\t\t\tenter 3 to find student by name : ");
	printf("\n\t\t\tenter 4 to find student by roll number : ");
	printf("\n\t\t\tenter 5 to find student by grade : ");
	printf("\n\t\t\tenter 7 to print student who got more than 50 marks in all subjects: ");
	printf("\n\t\t\tenter 8 to find student who got more than 80 marks in all subjects : ");
	printf("\n\t\t\tenter 9 to exit");
	int q;
	printf("\n\t\t\tENTER YOUR CHOICE");
	scanf("%d",&q);
	printf("\t\t\t_________________________\n");
		switch (q)
		{
			case 1:
			print_one_class();
			break;
		case 2:
			print_all_class();
			break;	
		case 3:
			student_name();
			break;
		case 4:
			student_roll_number();
			break;
		case 5:
			student_grade();
			break;
		case 7:
			student_fifty();
			break;
		case 8:
			student_eighty();
			break;	
		case 9:
			exit(0);
		}
	}
}
void particular_class()
{
	int m;
	int i,j,k;
	char s;
	printf("\n\t\t\tenter the class to enter the data");
	scanf("%d",&m);
	printf("\t\t\tenter the section of %dth class to enter the data",m);
	scanf("%c",&s);scanf("%c",&s);
	
	
	for(i=0;i<2;i++)
	{
		c[i].cl=m;
		
		for(j=0;j<1;j++)
		{
			c[i].sec[j].se=s;
		
			for(k=0;k<1;k++)
			{	
				//printf("\t\t\t*************************");
				//printf("\n\t\t\t********************ENTER THE DETAILS OF CLASS %d**************************:",m);
				printf("\n\t\t\t********************ENTER THE DETAILS OF CLASS %d SECTION %d**************************:",m,j);
				printf("\n\t\t\tthe class of student above : %d",c[i].cl);
				//scanf("%d",&c[i].cl);
				printf("\n\t\t\tenter the section of the class : %c",c[i].sec[j].se);
				//scanf("%c",&c[i].sec[j].se);scanf("%c",&c[i].sec[j].se);
				printf("\n\t\t\tenter the name of the student %d :",k+1);
				gets(c[i].sec[j].s[k].name); gets(c[i].sec[j].s[k].name);
				printf("\t\t\tenter gender of the student %d:",k+1);
				scanf("%s",c[i].sec[j].s[k].gender);
				printf("\t\t\tenter the student date of birth 'format'(--/--/----): ");
				scanf("%s",c[i].sec[j].s[k].date_birth);
				printf("\t\t\tenter the roll number of student %d :",k+1);
				scanf("%ld",&c[i].sec[j].s[k].roll_number);
				printf("\t\t\tenter student email-id : ");
				scanf("%s",c[i].sec[j].s[k].email_id);
				printf("\t\t\tenter the address of student %d : ",k+1);
				gets(c[i].sec[j].s[k].address);gets(c[i].sec[j].s[k].address);
				printf("\t\t\tenter the student %d pincode : ",k+1);
				scanf("%ld",&c[i].sec[j].s[k].pincode);
				printf("\t\t\tenter the student %d phone number : ",k+1);
				scanf("%s",&c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\t**************************:STUDENT PARENTS DETAILS**************************:\n");
				printf("\n\t\t\tenter the name of father:");
				scanf("%s",c[i].sec[j].s[i].father_name);
				printf("\t\t\tenter the name of mother:");
				scanf("%s",c[i].sec[j].s[i].mother_name);
				printf("\t\t\tenter student's father phone number");
				scanf("%s",c[i].sec[j].s[k].father_number);
				printf("\t\t\tenter student's mother phone number");
				scanf("%s",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-------------------------------------------------------------------------------");
				printf("\n\t\t\t\t\t\t________MARKS DETAILS______\n");
				printf("\n\t\t\t\t\t\t___________ENTER MARKS__________\n");
				printf("\t\t\tsubject 1 marks");
				printf("\n\t\t\tsubject 2 marks"); 
				printf("\n\t\t\tsubject 3 marks");
				printf("\n\t\t\tsubject 4 marks");
				printf("\n\t\t\tsubject 5 marks");
				c[i].sec[j].s[k].total_marks=0;
				for(l=0;l<5;l++)
				{
				scanf("%d",&c[i].sec[j].s[k].marks[l]);
				c[i].sec[j].s[k].total_marks = c[i].sec[j].s[k].total_marks + c[i].sec[j].s[k].marks[l];
				}
				
				c[i].sec[j].s[k].average=c[i].sec[j].s[k].total_marks/5;
				
				if(c[i].sec[j].s[k].average>=90)
				{
					c[i].sec[j].s[k].grade='A';
				}
				else if(c[i].sec[j].s[k].average>=80)
				{
					c[i].sec[j].s[k].grade='B';
				}
				else if(c[i].sec[j].s[k].average>=70)
				{
					c[i].sec[j].s[k].grade='C';
				}
				else if(c[i].sec[j].s[k].average>=60)
				{
					c[i].sec[j].s[k].grade='D';
				}
				else if(c[i].sec[j].s[k].average>=50)
				{
					c[i].sec[j].s[k].grade='E';
				}
				else if(c[i].sec[j].s[k].average>=40)
				{
					c[i].sec[j].s[k].grade='F';
				}
			}
		}
	}//1st for loop ends
}

void all_class()
{
	for(i=0;i<2;i++)
	{
			
		for(j=0;j<1;j++)
		{
			
			for(k=0;k<1;k++)
			{
				//printf("*************************\n");
				//printf("\n___ENTER THE DETAILS OF CLASS %d:____\n",i+6);
				printf("\n************************ENTER THE DETAILS OF CLASS %d SECTION %d ****************************\n",i+6,j);
				printf("\n\t\t\tenter the class of student above:");
				scanf("%d",&c[i].cl);
				printf("\t\t\tenter the section of the class :");
				scanf("%c",&c[i].sec[j].se);scanf("%c",&c[i].sec[j].se);
				printf("\t\t\tenter the name of the student %d :",k+1);
				gets(c[i].sec[j].s[k].name); gets(c[i].sec[j].s[k].name);
				printf("\t\t\tenter gender of the student %d:",k+1);
				scanf("%s",c[i].sec[j].s[k].gender);
				printf("\t\t\tenter the student date of birth 'format'(--/--/----): ");
				scanf("%s",c[i].sec[j].s[k].date_birth);
				printf("\t\t\tenter the roll number of student %d :",k+1);
				scanf("%ld",&c[i].sec[j].s[k].roll_number);
				printf("\t\t\tenter student email-id : ");
				scanf("%s",c[i].sec[j].s[k].email_id);
				printf("\t\t\tenter the address of student %d : ",k+1);
				gets(c[i].sec[j].s[k].address);gets(c[i].sec[j].s[k].address);
				printf("\t\t\tenter the student %d pincode : ",k+1);
				scanf("%ld",&c[i].sec[j].s[k].pincode);
				printf("\t\t\tenter the student %d phone number : ",k+1);
				scanf("%s",&c[i].sec[j].s[k].phone_number);
				printf("\t\t\t************************STUDENT PARENTS DETAILS****************************\n");
				printf("\t\t\tenter the name of father:");
				scanf("%s",c[i].sec[j].s[i].father_name);
				printf("\t\t\tenter the name of mother:");
				scanf("%s",c[i].sec[j].s[i].mother_name);
				printf("\t\t\tenter student's father phone number");
				scanf("%s",c[i].sec[j].s[k].father_number);
				printf("\t\t\tenter student's mother phone number");
				scanf("%s",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-------------------------------------------------------------------------------\n");
				printf("\n\t\t\t************************MARKS DETAILS************************\n");
				printf("\n\t\t\t************************ENTER MARKS************************\n");
				printf("subjec\tt 1 marks \tsubject 2 marks \tsubject 3 marks \tsubject 4 marks \tsubject 5 marks\n");
				c[i].sec[j].s[k].total_marks=0;
				for(l=0;l<5;l++)
				{
				scanf("%d",&c[i].sec[j].s[k].marks[l]);
				c[i].sec[j].s[k].total_marks = c[i].sec[j].s[k].total_marks + c[i].sec[j].s[k].marks[l];
				}
				
				c[i].sec[j].s[k].average=c[i].sec[j].s[k].total_marks/5;
				
				if(c[i].sec[j].s[k].average>=90)
				{
					c[i].sec[j].s[k].grade='A';
				}
				else if(c[i].sec[j].s[k].average>=80)
				{
					c[i].sec[j].s[k].grade='B';
				}
				else if(c[i].sec[j].s[k].average>=70)
				{
					c[i].sec[j].s[k].grade='C';
				}
				else if(c[i].sec[j].s[k].average>=60)
				{
					c[i].sec[j].s[k].grade='D';
				}
				else if(c[i].sec[j].s[k].average>=50)
				{
					c[i].sec[j].s[k].grade='E';
				}
				else if(c[i].sec[j].s[k].average>=40)
				{
					c[i].sec[j].s[k].grade='F';
				}
			}
		}
	}//1st for loop ends
}
void print_one_class()
{
	int a;
	char t;
	printf("\n\t\t\tenter the class you want : ");
	scanf("%d",&a);
	printf("\t\t\tenter the section of %dth class to enter the data : ",a);
	scanf("%c",&t);scanf("%c",&t);
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<1;j++)
		{
			
			for(k=0;k<1;k++)
			{
				if(a==c[i].cl&&t==c[i].sec[j].se)
				{	
				//printf("*************************\n");
				//printf("\n____THE DETAILS OF CLASS %d:____",i+6);
				printf("\n\t\t\tTHE DETAILS OF CLASS %d SECTION %d",i+6,j);
				printf("\n\t\t\tenter the name of the student %d is : %s",k+1,c[i].sec[j].s[k].name);
				printf("\n\t\t\tThe class of the student is : %d ",c[i].cl);
				printf("\n\t\t\tGender : %s",c[i].sec[j].s[k].gender);
				printf("\n\t\t\tStudent email-id : %d",c[i].sec[j].s[k].email_id);
				printf("\n\t\t\tStudent Date Of Birth : %s",c[i].sec[j].s[k].date_birth);
				printf("\n\t\t\tthe section of the student is : %c ",c[i].sec[i].se);
				printf("\n\t\t\tenter the roll number of student %d is : %d",k+1,c[i].sec[j].s[k].roll_number);
				printf("\n\t\t\tenter the address of student %d is : %s",k+1,c[i].sec[j].s[k].address);
				printf("\n\t\t\tenter the student %d pincode is : %d",k+1,c[i].sec[j].s[k].pincode);
				printf("\n\t\t\tenter the student %d phone number : %s",k+1,c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\ttotal marks : %d",c[i].sec[j].s[k].total_marks);
				printf("\n\t\t\tmarks percentage : %f",c[i].sec[j].s[k].average);
				printf("\n\t\t\tGRADE: %c",c[i].sec[j].s[k].grade);
				for(l=0;l<5;l++)
				{
				printf("\n\t\t\tmarks of subject %d : %d",l,c[i].sec[j].s[k].marks[l]);
				}
				printf("\n\t\t\t*********************STUDENT PARENTS DETAILS***************************\n");
				printf("\n\t\t\tFather name: %s ",c[i].sec[i].s[i].father_name);
				printf("\n\t\t\tFather phone number : %s  ",c[i].sec[j].s[k].father_number);
				printf("\n\t\t\tmother name: %s ",c[i].sec[i].s[i].mother_name);
				printf("\n\t\t\tFmother phone number : %s  ",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-----------------------------------------------------------\n");
				}
			}
		}
	}
		if(a==c[i].cl&&t==c[i].sec[j].se)
		{
			printf("\n\t\t\t******************************class not found*************************************");
		}
}
void print_all_class()
{
	for(i=0;i<2;i++)
	{
			
		for(j=0;j<1;j++)
		{
			
			for(k=0;k<1;k++)
			{
				//printf("*************************\n");
				//printf("\n____THE DETAILS OF CLASS %d:____",i+6);
				printf("\n\t\t\tTHE DETAILS OF CLASS %d SECTION %d",i+6,j);
				printf("\n\t\t\tenter the name of the student %d is : %s",k+1,c[i].sec[j].s[k].name);
				printf("\n\t\t\tThe class of the student is : %d ",c[i].cl);
				printf("\n\t\t\tGender : %s",c[i].sec[j].s[k].gender);
				printf("\n\t\t\tStudent email-id : %d",c[i].sec[j].s[k].email_id);
				printf("\n\t\t\tStudent Date Of Birth : %s",c[i].sec[j].s[k].date_birth);
				printf("\n\t\t\tthe section of the student is : %c ",c[i].sec[i].se);
				printf("\n\t\t\tenter the roll number of student %d is : %d",k+1,c[i].sec[j].s[k].roll_number);
				printf("\n\t\t\tenter the address of student %d is : %s",k+1,c[i].sec[j].s[k].address);
				printf("\n\t\t\tenter the student %d pincode is : %d",k+1,c[i].sec[j].s[k].pincode);
				printf("\n\t\t\tenter the student %d phone number : %s",k+1,c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\ttotal marks : %d",c[i].sec[j].s[k].total_marks);
				printf("\n\t\t\tmarks percentage : %f",c[i].sec[j].s[k].average);
				printf("\n\t\t\tGRADE: %c",c[i].sec[j].s[k].grade);
				for(l=0;l<5;l++)
				{
				printf("\n\t\t\tmarks of subject %d : %d",l,c[i].sec[j].s[k].marks[l]);
				}
				printf("\n\t\t\t*********************STUDENT PARENTS DETAILS***************************\n");
				printf("\n\t\t\tFather name: %s ",c[i].sec[i].s[i].father_name);
				printf("\n\t\t\tFather phone number : %s  ",c[i].sec[j].s[k].father_number);
				printf("\n\t\t\tmother name: %s ",c[i].sec[i].s[i].mother_name);
				printf("\n\t\t\tFmother phone number : %s  ",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-----------------------------------------------------------\n");
				}
			}
		}
	}

void student_name()
{
	char na[15];
	printf("\n\t\t\tenter the name of the student : ");
	scanf("%s",na);
	for(i=0;i<2;i++)
	{
			
		for(j=0;j<1;j++)
		{
			
			for(k=0;k<1;k++)
			{
				if(strcmp(na,c[i].sec[j].s[k].name)==0)
				{
				//printf("*************************\n");
				//printf("\n____THE DETAILS OF CLASS %d:____",i+6);
				printf("\n\t\t\tTHE DETAILS OF CLASS %d SECTION %d",i+6,j);
				printf("\n\t\t\tenter the name of the student %d is : %s",k+1,c[i].sec[j].s[k].name);
				printf("\n\t\t\tThe class of the student is : %d ",c[i].cl);
				printf("\n\t\t\tGender : %s",c[i].sec[j].s[k].gender);
				printf("\n\t\t\tStudent email-id : %d",c[i].sec[j].s[k].email_id);
				printf("\n\t\t\tStudent Date Of Birth : %s",c[i].sec[j].s[k].date_birth);
				printf("\n\t\t\tthe section of the student is : %c ",c[i].sec[i].se);
				printf("\n\t\t\tenter the roll number of student %d is : %d",k+1,c[i].sec[j].s[k].roll_number);
				printf("\n\t\t\tenter the address of student %d is : %s",k+1,c[i].sec[j].s[k].address);
				printf("\n\t\t\tenter the student %d pincode is : %d",k+1,c[i].sec[j].s[k].pincode);
				printf("\n\t\t\tenter the student %d phone number : %s",k+1,c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\ttotal marks : %d",c[i].sec[j].s[k].total_marks);
				printf("\n\t\t\tmarks percentage : %f",c[i].sec[j].s[k].average);
				printf("\n\t\t\tGRADE: %c",c[i].sec[j].s[k].grade);
				for(l=0;l<5;l++)
				{
				printf("\n\t\t\tmarks of subject %d : %d",l,c[i].sec[j].s[k].marks[l]);
				}
				printf("\n\t\t\t*********************STUDENT PARENTS DETAILS***************************\n");
				printf("\n\t\t\tFather name: %s ",c[i].sec[i].s[i].father_name);
				printf("\n\t\t\tFather phone number : %s  ",c[i].sec[j].s[k].father_number);
				printf("\n\t\t\tmother name: %s ",c[i].sec[i].s[i].mother_name);
				printf("\n\t\t\tFmother phone number : %s  ",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-----------------------------------------------------------\n");
				}
				}
			}
		}
	}

void student_roll_number()
{
	double n;
	printf("\n\t\t\tenter the roll number");
	scanf("%ld",&n);
	for(i=0;i<2;i++)
	{
			
		for(j=0;j<1;j++)
		{
			
			for(k=0;k<1;k++)
			{
				if(n==c[i].sec[j].s[k].roll_number)
				{
				//printf("*************************\n");
				//printf("\n____THE DETAILS OF CLASS %d:____",i+6);
				printf("\n\t\t\tTHE DETAILS OF CLASS %d SECTION %d",i+6,j);
				printf("\n\t\t\tenter the name of the student %d is : %s",k+1,c[i].sec[j].s[k].name);
				printf("\n\t\t\tThe class of the student is : %d ",c[i].cl);
				printf("\n\t\t\tGender : %s",c[i].sec[j].s[k].gender);
				printf("\n\t\t\tStudent email-id : %d",c[i].sec[j].s[k].email_id);
				printf("\n\t\t\tStudent Date Of Birth : %s",c[i].sec[j].s[k].date_birth);
				printf("\n\t\t\tthe section of the student is : %c ",c[i].sec[i].se);
				printf("\n\t\t\tenter the roll number of student %d is : %d",k+1,c[i].sec[j].s[k].roll_number);
				printf("\n\t\t\tenter the address of student %d is : %s",k+1,c[i].sec[j].s[k].address);
				printf("\n\t\t\tenter the student %d pincode is : %d",k+1,c[i].sec[j].s[k].pincode);
				printf("\n\t\t\tenter the student %d phone number : %s",k+1,c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\ttotal marks : %d",c[i].sec[j].s[k].total_marks);
				printf("\n\t\t\tmarks percentage : %f",c[i].sec[j].s[k].average);
				printf("\n\t\t\tGRADE: %c",c[i].sec[j].s[k].grade);
				for(l=0;l<5;l++)
				{
				printf("\n\t\t\tmarks of subject %d : %d",l,c[i].sec[j].s[k].marks[l]);
				}
				printf("\n\t\t\t*********************STUDENT PARENTS DETAILS***************************\n");
				printf("\n\t\t\tFather name: %s ",c[i].sec[i].s[i].father_name);
				printf("\n\t\t\tFather phone number : %s  ",c[i].sec[j].s[k].father_number);
				printf("\n\t\t\tmother name: %s ",c[i].sec[i].s[i].mother_name);
				printf("\n\t\t\tFmother phone number : %s  ",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-----------------------------------------------------------\n");
				}
				}
			}
		}
	}

void student_grade()
{
	char g;
	printf("\n\t\t\tenter the grade :");
	scanf("%c",&g);scanf("%c",&g);
	for(i=0;i<2;i++)
	{
			
		for(j=0;j<1;j++)
		{
		
			for(k=0;k<1;k++)
			{
				if(g==c[i].sec[j].s[k].grade)
				{
				//printf("*************************\n");
				//printf("\n____THE DETAILS OF CLASS %d:____",i+6);
				printf("\n\t\t\tTHE DETAILS OF CLASS %d SECTION %d",i+6,j);
				printf("\n\t\t\tenter the name of the student %d is : %s",k+1,c[i].sec[j].s[k].name);
				printf("\n\t\t\tThe class of the student is : %d ",c[i].cl);
				printf("\n\t\t\tGender : %s",c[i].sec[j].s[k].gender);
				printf("\n\t\t\tStudent email-id : %d",c[i].sec[j].s[k].email_id);
				printf("\n\t\t\tStudent Date Of Birth : %s",c[i].sec[j].s[k].date_birth);
				printf("\n\t\t\tthe section of the student is : %c ",c[i].sec[i].se);
				printf("\n\t\t\tenter the roll number of student %d is : %d",k+1,c[i].sec[j].s[k].roll_number);
				printf("\n\t\t\tenter the address of student %d is : %s",k+1,c[i].sec[j].s[k].address);
				printf("\n\t\t\tenter the student %d pincode is : %d",k+1,c[i].sec[j].s[k].pincode);
				printf("\n\t\t\tenter the student %d phone number : %s",k+1,c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\ttotal marks : %d",c[i].sec[j].s[k].total_marks);
				printf("\n\t\t\tmarks percentage : %f",c[i].sec[j].s[k].average);
				printf("\n\t\t\tGRADE: %c",c[i].sec[j].s[k].grade);
				for(l=0;l<5;l++)
				{
				printf("\n\t\t\tmarks of subject %d : %d",l,c[i].sec[j].s[k].marks[l]);
				}
				printf("\n\t\t\t*********************STUDENT PARENTS DETAILS***************************\n");
				printf("\n\t\t\tFather name: %s ",c[i].sec[i].s[i].father_name);
				printf("\n\t\t\tFather phone number : %s  ",c[i].sec[j].s[k].father_number);
				printf("\n\t\t\tmother name: %s ",c[i].sec[i].s[i].mother_name);
				printf("\n\t\t\tFmother phone number : %s  ",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-----------------------------------------------------------\n");
				}
				}
			}
		}
	}

void student_fifty()
{
	
	for(i=0;i<2;i++)
				{
					for(j=0;j<1;j++)
					{
						for(k=0;k<1;k++)
						{
				if(c[i].sec[j].s[k].marks[0]>50&&c[i].sec[j].s[k].marks[1]>50&&c[i].sec[j].s[k].marks[2]>50&&c[i].sec[j].s[k].marks[3]>50&&c[i].sec[j].s[k].marks[4]>50)
				{
				//printf("*************************\n");
				//printf("\n____THE DETAILS OF CLASS %d:____",i+6);
				printf("\n\t\t\tTHE DETAILS OF CLASS %d SECTION %d",i+6,j);
				printf("\n\t\t\tenter the name of the student %d is : %s",k+1,c[i].sec[j].s[k].name);
				printf("\n\t\t\tThe class of the student is : %d ",c[i].cl);
				printf("\n\t\t\tGender : %s",c[i].sec[j].s[k].gender);
				printf("\n\t\t\tStudent email-id : %d",c[i].sec[j].s[k].email_id);
				printf("\n\t\t\tStudent Date Of Birth : %s",c[i].sec[j].s[k].date_birth);
				printf("\n\t\t\tthe section of the student is : %c ",c[i].sec[i].se);
				printf("\n\t\t\tenter the roll number of student %d is : %d",k+1,c[i].sec[j].s[k].roll_number);
				printf("\n\t\t\tenter the address of student %d is : %s",k+1,c[i].sec[j].s[k].address);
				printf("\n\t\t\tenter the student %d pincode is : %d",k+1,c[i].sec[j].s[k].pincode);
				printf("\n\t\t\tenter the student %d phone number : %s",k+1,c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\ttotal marks : %d",c[i].sec[j].s[k].total_marks);
				printf("\n\t\t\tmarks percentage : %f",c[i].sec[j].s[k].average);
				printf("\n\t\t\tGRADE: %c",c[i].sec[j].s[k].grade);
				for(l=0;l<5;l++)
				{
				printf("\n\t\t\tmarks of subject %d : %d",l,c[i].sec[j].s[k].marks[l]);
				}
				printf("\n\t\t\t*********************STUDENT PARENTS DETAILS***************************\n");
				printf("\n\t\t\tFather name: %s ",c[i].sec[i].s[i].father_name);
				printf("\n\t\t\tFather phone number : %s  ",c[i].sec[j].s[k].father_number);
				printf("\n\t\t\tmother name: %s ",c[i].sec[i].s[i].mother_name);
				printf("\n\t\t\tFmother phone number : %s  ",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-----------------------------------------------------------\n");
				}
				printf("\n-----------------------------------------------------------\n");
				}
					}
				}
			}
			
void student_eighty()
{
	for(i=0;i<2;i++)
				{
					for(j=0;j<1;j++)
					{
						for(k=0;k<1;k++)
						{
		if(c[i].sec[j].s[k].marks[0]>80&&c[i].sec[j].s[k].marks[1]>80&&c[i].sec[j].s[k].marks[2]>80&&c[i].sec[j].s[k].marks[3]>80&&c[i].sec[j].s[k].marks[4]>80)
					{
		//printf("*************************\n");
				//printf("\n____THE DETAILS OF CLASS %d:____",i+6);
				printf("\n\t\t\tTHE DETAILS OF CLASS %d SECTION %d",i+6,j);
				printf("\n\t\t\tenter the name of the student %d is : %s",k+1,c[i].sec[j].s[k].name);
				printf("\n\t\t\tThe class of the student is : %d ",c[i].cl);
				printf("\n\t\t\tGender : %s",c[i].sec[j].s[k].gender);
				printf("\n\t\t\tStudent email-id : %d",c[i].sec[j].s[k].email_id);
				printf("\n\t\t\tStudent Date Of Birth : %s",c[i].sec[j].s[k].date_birth);
				printf("\n\t\t\tthe section of the student is : %c ",c[i].sec[i].se);
				printf("\n\t\t\tenter the roll number of student %d is : %d",k+1,c[i].sec[j].s[k].roll_number);
				printf("\n\t\t\tenter the address of student %d is : %s",k+1,c[i].sec[j].s[k].address);
				printf("\n\t\t\tenter the student %d pincode is : %d",k+1,c[i].sec[j].s[k].pincode);
				printf("\n\t\t\tenter the student %d phone number : %s",k+1,c[i].sec[j].s[k].phone_number);
				printf("\n\t\t\ttotal marks : %d",c[i].sec[j].s[k].total_marks);
				printf("\n\t\t\tmarks percentage : %f",c[i].sec[j].s[k].average);
				printf("\n\t\t\tGRADE: %c",c[i].sec[j].s[k].grade);
				for(l=0;l<5;l++)
				{
				printf("\n\t\t\tmarks of subject %d : %d",l,c[i].sec[j].s[k].marks[l]);
				}
				printf("\n\t\t\t*********************STUDENT PARENTS DETAILS***************************\n");
				printf("\n\t\t\tFather name: %s ",c[i].sec[i].s[i].father_name);
				printf("\n\t\t\tFather phone number : %s  ",c[i].sec[j].s[k].father_number);
				printf("\n\t\t\tmother name: %s ",c[i].sec[i].s[i].mother_name);
				printf("\n\t\t\tFmother phone number : %s  ",c[i].sec[j].s[k].mother_number);
				printf("\n\t\t\t-----------------------------------------------------------\n");
				}
						}	
					}
				}
			}
