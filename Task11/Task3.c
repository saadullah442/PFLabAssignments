#include <stdio.h>

struct course {

	char name[10];
	int code;
	char instructor[10];

};

struct student{

	char name[10];
	int roll_num;
	struct course my_coruses[10];
	int course_len;
};




int main(){

	

	struct student students[10] = {
        {"Alice", 1, {{"Math", 101, "Mr. A"}, {"Physics", 102, "Dr. B"}, {"Chemistry", 103, "Prof. C"}}, 3},
        {"Bob", 2, {{"Biology", 201, "Dr. D"}, {"History", 202, "Ms. E"}, {"Math", 101, "Mr. A"}}, 3},
        {"Charlie", 3, {{"Computer", 301, "Dr. F"}, {"English", 302, "Ms. G"}}, 2},
        {"David", 4, {{"Math", 101, "Mr. A"}, {"Biology", 201, "Dr. D"}}, 2},
        {"Eva", 5, {{"Physics", 102, "Dr. B"}, {"History", 202, "Ms. E"}}, 2},
        {"Frank", 6, {{"Chemistry", 103, "Prof. C"}, {"Computer", 301, "Dr. F"}}, 2},
        {"Grace", 7, {{"English", 302, "Ms. G"}, {"Biology", 201, "Dr. D"}}, 2},
        {"Hannah", 8,{{"Math", 101, "Mr. A"}, {"Chemistry", 103, "Prof. C"}}, 2},
        {"Ivy", 9, {{"Physics", 102, "Dr. B"}, {"Computer", 301, "Dr. F"}}, 2},
        {"Jack", 10, {{"History", 202, "Ms. E"}, {"English", 302, "Ms. G"}}, 2}
    	};

	FILE *file = fopen("Students_data.txt", "w");
	if(file == NULL){
		printf("Couldn't open file");
		return 0;
	}
	int j = 0;
	int i = 0;
	/*printf("%s\n", (char *)students[0].name);
	fprintf(file, "%s\n",students[0].name);
	fprintf(file, "%d\n", students[0].roll_num);
	fprintf(file, "%s\n", students[0].my_coruses[0].name);
	fprintf(file, "%d\n", students[0].my_coruses[0].code);
	fprintf(file, "%s\n", students[0].my_coruses[0].instructor);*/

	fprintf(file, "%s\n", "*");
	for(i=0;i < 10; i++){
		printf("Student name is %s and roll_num is %d\n", students[i].name,students[i].roll_num );
		
		fprintf(file, "%s\n",students[i].name);
		fprintf(file, "%d\n", students[i].roll_num);

		
		for(j=0; j< students[i].course_len; j++){
			fprintf(file, "%s\n", students[i].my_coruses[j].name);
			fprintf(file, "%d\n", students[0].my_coruses[j].code);
			fprintf(file, "%s\n", students[0].my_coruses[j].instructor);
		}
		fprintf(file, "%s\n", "*");
	}

	fclose(file);
	return 0;
}