#include <stdio.h>
#include <string.h>
struct emp {

	char name[20];
	int emp_id;
	int salary;
};

struct depart {
	char name[10];
	struct emp employees;

};
int main(){

	 struct depart departments[10] = {
        {"HR", {"Alice Johnson", 1001, 55000}},
        {"IT", {"Bob Smith", 1002, 60000}},
        {"Finance", {"Charlie Brown", 1003, 70000}},
        {"Sales", {"David White", 1004, 45000}},
        {"Marketing", {"Eva Green", 1005, 48000}},
        {"HR", {"Frank Black", 1006, 52000}},
        {"IT", {"Grace Lee", 1007, 75000}},
        {"Finance", {"Henry Davis", 1008, 68000}},
        {"Sales", {"Isla Turner", 1009, 43000}},
        {"Marketing", {"Jack Harris", 1010, 50000}}
    	};
	int len = sizeof(departments)/sizeof(departments[0]);
	int i;
	int total_salary = 0;
	char name[10];
	printf("Enter department name: ");
	scanf("%s", name);


	for(i=0;i< len;i++){
		if(strcmp(name, departments[i].name) == 0) total_salary +=  departments[i].employees.salary;
	}

	if(total_salary != 0) {
		printf("Total salary in department %s is %d", name, total_salary);
	} else {
		printf("Department doesn't exists");
	}



	return 0;
}