#include "prelab5.h"

Employee* readEmployeeArray(FILE *fp)
{
	int size;
	int i;
	fscanf(fp, "%d", &size);
	printf("%d", size);
	Employee * array=malloc(sizeof(int)+size*sizeof(Employee));
	if(!array)
	{
		printf("malloc failure");
	}

	*(int*) array=size;
	printf("%d", *(int* )array);
	(int *)array++ ;

	for(i=0; i<size; i++)
	{

		fscanf(fp, "%d", &array[i].empID);
		fscanf(fp, "%d", &array[i].jobType);
		fscanf(fp, "%f", &array[i].salary);
	}

	return array;
}





Employee * getEmployeeByID(Employee *emp , int empID)
{
	int i, size;
	(int *)emp--;
	size=*(int* )emp;
	(int *)emp++;
	printf("%d\n", size);
	for(i=0; i<size;i++)
	{
		if(emp[i].empID==empID)
		{
			Employee* emP=&emp[i];


			return emP;
		}
	}
	return emp;
}



void setEmpSalary(Employee *empA , int empID, float salary, int *ec)
{
	*ec=0;
	Employee* emp=getEmployeeByID(empA,empID);
       emp->salary=salary;
       
}       
	





float getEmpSalary(Employee *empA , int empID, int *ec)
{
	*ec=0;
	Employee* emp=getEmployeeByID(empA, empID);
	return emp->salary;
}

void setEmpJobType(Employee *empA , int empID, int job, int *ec)
{
	*ec=0;
	Employee* emp=getEmployeeByID(empA, empID);
	emp->jobType=job;
}


int getEmpJobType(Employee *empA, int empID, int *ec)
{
	*ec=0;
	Employee* emp=getEmployeeByID(empA, empID);
	return emp->jobType;
}




void freeArray(Employee * array)
{	(int*) array--;
	free(array);
}



