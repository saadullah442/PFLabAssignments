#include <stdio.h>
#include <string.h>
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

	enum course {
		MATH,
		PHYSICS,
		CHEMISTRY,
		BIOLOGY,
		HISTORY,
		COMPUTER,
		ENGLISH
	};	
	enum course student_courses;
	int total_students[7];
	for(int i =0; i< 7;i++){
	 	total_students[0] = 0;
		printf("%d\n", total_students[0]);
	}
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
	// Inputing data in file
	for(i=0;i < 10; i++){
		fprintf(file, "%s\n", "*"); // * For Telling new student record
		// printf("Student name is %s and roll_num is %d\n", students[i].name,students[i].roll_num );	
		fprintf(file, "%s\n",students[i].name);
		fprintf(file, "%d\n", students[i].roll_num);
		for(j=0; j< students[i].course_len; j++){
			fprintf(file, "%s\n", students[i].my_coruses[j].name);
			fprintf(file, "%d\n", students[0].my_coruses[j].code);
			fprintf(file, "%s\n", students[0].my_coruses[j].instructor);
		}
		// if last student record is ended don't add newline after adding *
		if(i == 9) fprintf(file, "%s", "*");// * For telling student record has ended
		// if last student record is not ended add newline after adding *
		else fprintf(file, "%s\n", "*");
	}
	fclose(file);

	file = fopen("Students_data.txt", "r");
	char buffer[30] = {'\0'};
	int buffersize = sizeof(buffer)/ sizeof(buffer[0]);
	// Extracting courses from file
	while(feof(file) == 0) {
		fgets(buffer, buffersize , file);
		// Chekcing if new student record has started
		if(buffer[0] == '*') {
			fgets(buffer, buffersize , file);
			printf("Student name is: %s", buffer);
			fgets(buffer, buffersize , file);
		} else {
			fgets(buffer, buffersize , file);
		}
		fgets(buffer, buffersize , file);
		if(buffer[0] != '*') {
			printf("Course is: ");
			int i = 0;
			while(buffer[i] != '\0') {
				printf("%c", buffer[i]);
				i++;
			}
			buffer[i - 1] = '\0';
			// // printf("\n");
			// printf("i is: %d\n", i);
			// printf("After removing last index value\n");
			// printf("Course is: ");
			// i = 0;
			// while(buffer[i] != '\0') {
			// 	printf("%c", buffer[i]);
			// 	i++;
			// }
			// // printf("\n");
			// printf("i is: %d\n", i);
			// printf("strcmp(buffer, Biology): %d", strcmp(buffer, "Biology"));
			// Checking which course student is enrolled in
			if(!strcmp(buffer, "Biology")){
				printf("Choose biology\n");
				total_students[BIOLOGY]++;
			} 	
			else if(!strcmp(buffer, "History")){
				printf("Choose history\n");
				total_students[HISTORY]++;
				printf("total_students[HISTORY]: %d\n", total_students[HISTORY]);
			} 
			else if(!strcmp(buffer, "English")){
				printf("Choose english\n");
				total_students[ENGLISH]++;
				printf("total_students[ENGLISH], %d\n", total_students[ENGLISH]);
			} 
			else if(!strcmp(buffer, "Physics")){
				printf("Choose physics\n");
				total_students[PHYSICS]++;
				printf("total_students[ENGLISH]: %d\n",total_students[ENGLISH]);
			} 
			else if(!strcmp(buffer, "Computer")){
				printf("Choose computer\n");
				total_students[COMPUTER]++;
				printf("total_students[COMPUTER]: %d\n",total_students[COMPUTER]);
			} 
			else if(!strcmp(buffer, "Chemistry")){
				printf("Choose chemitry\n");
				total_students[CHEMISTRY]++;
				printf("total_students[ENGLISH]: %d\n",total_students[ENGLISH]);
			} 
			else{
				printf("Choose maths\n");
				total_students[MATH]++;
				printf("total_students[MATH]: %d\n",total_students[MATH]);
			} 
		}
		else printf("\n");
	}
	fclose(file);
	printf("MATH: %d\n", MATH);
	printf("BIOLOGY: %d\n", BIOLOGY);
	printf("HISTORY: %d\n", HISTORY);
	printf("PHYSICS: %d\n", PHYSICS);
	printf("COMPUTER: %d\n", COMPUTER);
	printf("CHEMISTRY: %d\n", CHEMISTRY);
	
	printf("Math: %d\n", total_students[i]);
	printf("Physics: %d\n", total_students[i]);
	printf("Chemistry: %d\n", total_students[i]);
	printf("Biology: %d\n", total_students[i]);
	printf("History: %d\n", total_students[i]);
	printf("Computer: %d\n", total_students[i]);
	
	
	
	
	
	return 0;
}