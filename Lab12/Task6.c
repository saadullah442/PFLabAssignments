#include <stdio.h>
#include <stdlib.h>
int main(){
	char *buffer = (char *)malloc(25 * sizeof(char));
	//count freq[] = {0};
	FILE *file = fopen("random.txt", "r");
	while(feof(file) == 0){
		fread(buffer, sizeof(char), 25, file);
		printf("Buffer Val: %s\n", buffer);
		//buffer = realloc(buffer, 25*sizeof(char));			
	}
	printf("End of file reached\n");
	fclose(file);
	return 0;
}