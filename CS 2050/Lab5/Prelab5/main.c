#include "prelab5.h"

char * filename= "employees.txt";
int emp1ID,emp2ID, emp3ID, job1, job2, job3, ec; 
float salary1, salary2, salary3;
Employee* empA, * emporP;
int *eC;
Employee empor;


int main()
{
	FILE * fp = fopen(filename, "r");
	if(!fp) {
		fprintf(stderr, "The file [ %s ] was not successfully opened\n", filename);
	
	}
	eC=&ec;

	empA =readEmployeeArray(fp);
	emp1ID=1;
	emp2ID=2;
	emp3ID=3;

	emporP=&empor;
	emporP=getEmployeeByID(empA, emp1ID);
	//Test gettign a job
	printf("Job1: %d\n", getEmpJobType(empA, emp1ID, eC));
	if(ec==1)
	{
		printf("Err");
	}	//Test getting it again, 
	job1=getEmpJobType(empA, emp1ID, eC);
	//And print it again
	printf("Job1: %d\n", job1);
	//Test changeing the job
	setEmpJobType(empA, 1, 4, eC);
	//Test printing it again
	printf("Job1: %d\n", getEmpJobType(empA, emp1ID, eC));
	//And y'know do it again
	job1=getEmpJobType(empA, emp1ID, eC);
	printf("Job1: %d\n", job1);


	/*
	 *
	 * Mpw fpr the salary
	 *
	 */

	//Test gettign a salary
	printf("Salary11: %f\n", getEmpSalary(empA, emp1ID, eC));
	if(ec==0)
	{
		printf("Err");
	}

	//Test getting it again, 
	salary1=getEmpSalary(empA, emp1ID, eC);
	//And print it again
	printf("Salary1: %f\n", salary1);
	//Test changeing the job
	setEmpSalary(empA, emp1ID, 6, eC);
	//Test printing it again
	printf("Salary1: %f\n", getEmpSalary(empA, emp1ID, eC));
	//And y'know do it again
	salary1=getEmpSalary(empA, emp1ID, eC);
	printf("Salary1: %f\n", salary1);
}



