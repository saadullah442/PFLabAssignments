#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
enum course_name {
		MATH,
		PHYSICS,
		CHEMISTRY,
		BIOLOGY,
		HISTORY,
		COMPUTER,
		ENGLISH
};	

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

void printing_course(char filename[10], int total_students[7], enum course_name student_courses);

int main(){

	struct student user_student;

	enum course_name student_courses;
	printf("MATH: %d\n", MATH);
	printf("PHYSICS: %d\n", PHYSICS);
	printf("CHEMISTRY: %d\n", CHEMISTRY);
	printf("BIOLOGY: %d\n", BIOLOGY);
	printf("HISTORY: %d\n", HISTORY);
	printf("COMPUTER: %d\n", COMPUTER);
	printf("ENGLISH: %d\n", ENGLISH);
	int total_students[7];
	for(int i =0; i< 7;i++){
		total_students[i] = 0;
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

	file = fopen("Students_data.txt", "a+");
	char buffer[30] = {'\0'};
	int buffersize = sizeof(buffer)/ sizeof(buffer[0]);
	
	printing_course("Students_data.txt", total_students, student_courses);

	// Modifying course details
	// Taking input from user
	printf("Enter the roll number of student you want to modify: ");
	scanf("%d", &user_student.roll_num);
	printf("Enter the number of courses you want to change: ");
	scanf("%d", &user_student.course_len);
	i = 0;
	for(;i < user_student.course_len;i++){
		printf("Enter the course you want to change: ");
		scanf("%s", &user_student.my_coruses[i].name);
	}
	// Updating file
	char roll_num_buffer[10];
	bool student_found = false;
	// Looping until EOF or student is found
	while((feof(file) == 0)){
		printf("%d\n", fscanf(file, "%*s %*s %s", roll_num_buffer));
		// Exit loop is student roll number is found
		if(atoi(roll_num_buffer) == user_student.roll_num){
			printf("Student found\n");
			student_found = true;
			break;
		}
		// Go to the end of student record
		while(roll_num_buffer[0] != '*') {
			fgets(roll_num_buffer, 10, file);
			printf("Nested while: %s\n", roll_num_buffer);
		}
	}
	// Replace the course of the student found
	if(student_found == true){
		printf("When student found\n");
		fpos_t ptr_to_rollnum;
		// Get position of roll number in file
		fgetpos(file, &ptr_to_rollnum);
		char changed_course[10];
		for(i=0;i<user_student.course_len;i++){
			printf("Enter replacement course: ");
			scanf("%s", changed_course);
			
			fscanf(file, "%s", buffer);
			printf("user_student.my_coruses[%d].name: %s\n",i, user_student.my_coruses[i].name);
			// Loop until you find the course to change or the end of student data have been reached
			while( (strcmp(buffer, user_student.my_coruses[i].name) != 0) && (buffer[0] != '*') ){
				fscanf(file, "%s", buffer);
				printf("Finding Course: %s\n", buffer);
			}
			// When Course is found change course name
			if(feof(file) == 0)
				printf("End of file not reached\n");
			if(buffer[0] != '*'){
				printf("Changing course\n");
				buffer[strlen(buffer)] = '\0';
				printf("Length of buffer: %d\n", strlen(buffer));
				printf("Current buffer value: %s", buffer);
				int written = fprintf(file, "%s", "Hello WOrld");
				printf("Number of characters written: %d\n", written);
			}else{
				printf("Course not found\n");
			}
			// Resetting file pointer to point at roll number of student
			fsetpos(file, &ptr_to_rollnum);
		}
	}
	fclose(file);
	
	printing_course("Students_data.txt", total_students, student_courses);
	return 0;
}


void printing_course(char filename[10], int total_students[7], enum course_name student_courses){
	FILE *file = fopen(filename, "r");
	// Extracting courses from file
	char buffer[30];
	int buffersize = sizeof(buffer) / sizeof(buffer[0]);
	while(feof(file) == 0) {
		fgets(buffer, buffersize , file);
		// Chekcing if new student record has started
		if(buffer[0] == '*') {
			fgets(buffer, buffersize , file);
			// printf("Student name is: %s", buffer);
			fgets(buffer, buffersize , file);
		} else {
			fgets(buffer, buffersize , file);
		}
		fgets(buffer, buffersize , file);
		if(buffer[0] != '*') {
			// printf("Course is: ");
			int i = 0;
			while(buffer[i] != '\0') {
				// printf("%c", buffer[i]);
				i++;
			}
			// removing \\n as last character
			buffer[i - 1] = '\0';
			
			if(!strcmp(buffer, "Biology")){
				// printf("Choose biology\n");
				total_students[BIOLOGY]++;
			} 	
			else if(!strcmp(buffer, "History")){
				// printf("Choose history\n");
				total_students[HISTORY]++;
				// printf("total_students[HISTORY]: %d\n", total_students[HISTORY]);
			} 
			else if(!strcmp(buffer, "English")){
				// printf("Choose english\n");
				total_students[ENGLISH]++;
				// printf("total_students[ENGLISH], %d\n", total_students[ENGLISH]);
			} 
			else if(!strcmp(buffer, "Physics")){
				// printf("Choose physics\n");
				total_students[PHYSICS]++;
				// printf("total_students[ENGLISH]: %d\n",total_students[ENGLISH]);
			} 
			else if(!strcmp(buffer, "Computer")){
				// printf("Choose computer\n");
				total_students[COMPUTER]++;
				// printf("total_students[COMPUTER]: %d\n",total_students[COMPUTER]);
			} 
			else if(!strcmp(buffer, "Chemistry")){
				// printf("Choose chemitry\n");
				total_students[CHEMISTRY]++;
				// printf("total_students[ENGLISH]: %d\n",total_students[ENGLISH]);
			} 
			else{
				// printf("Choose maths\n");
				total_students[MATH]++;
				// printf("total_students[MATH]: %d\n",total_students[MATH]);
			} 
		}
		// else printf("\n");
	}
	fclose(file);


	printf("Number of students in Math: %d\n", total_students[MATH]);
	printf("Number of students in Physics: %d\n", total_students[PHYSICS]);
	printf("Number of students in Chemistry: %d\n", total_students[CHEMISTRY]);
	printf("Number of students in Biology: %d\n", total_students[BIOLOGY]);
	printf("Number of students in History: %d\n", total_students[HISTORY]);
	printf("Number of students in Computer: %d\n", total_students[COMPUTER]);


}