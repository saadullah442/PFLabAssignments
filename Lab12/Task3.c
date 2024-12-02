#include <stdio.h>

int find_length(char ptr[]){
	int count = 0;
	while(*(ptr + count) != '\0'){
		count++;
	}
	return count;
}


void reverse_str(char ptr[]){

	int len = find_length(ptr);
	char temp;
	int i = 0; int j = len;
	while(*(ptr + i) != '\0'){
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + j);
		*(ptr + j) = temp;
		i++;
		j--;
	}	
}

void concat_str(char str1_ptr[], char str2_ptr[]){

	int str1_len = find_length(str1_ptr);
	int str2_len = find_length(str2_ptr);
	printf("str1_len: %d\n", str1_len);
	printf("str2_len: %d\n", str2_len);
	printf("str2_ptr: %s\n", str2_ptr);

	char concatenated_str[str1_len + str2_len];
	int i;
	int j = 0;
	for(i=0;i <str1_len + str2_len;i++){
		if(i <= str1_len - 1) {
			*(concatenated_str + i) = *(str1_ptr + i);
		}
		else{
			 *(concatenated_str + i) = *(str2_ptr + j);
			j++;
		}
	
	}
	concatenated_str[i] = '\0';
	printf("%s\n", concatenated_str);
}

int main(){

	char mystr[] = "Hello World";	
	int len = find_length(mystr);
	printf("Length is: %d\n", len);
	reverse_str(mystr);
	printf("Reverse str: %s\n", mystr);
	concat_str("Hello", "World");
	return 0;
}
