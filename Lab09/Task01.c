#include <stdio.h>
#include <string.h>
int main(){
	
	int is_palindrome = 1;
	int start, end;
	int word_arr[5][20] = {'\0'};
	int i,j;
	for(i=0;i<5;i++){
		printf("Enter any word: ");
		gets(word_arr[i]);
	}
	
	// going through each word
	for(i=0;i<5;i++){
		end = strlen(word_arr[i]) - 1;
		start = 0;
		// going through each letter in word
		while(start < end){
			// get out of loop if word not palindrome
			printf("Condition: %d\n", (char)word_arr[i][start] != (char)word_arr[i][end]);
			if((char)word_arr[i][start] != (char)word_arr[i][end]) {
			    is_palindrome = 0;	
				printf("%s is not a palindrome\n", word_arr[i]);	
				break;
			}
			start++;
			end--;	
		}
		if(is_palindrome == 1) printf("%s is a palindrome\n", word_arr[i]);	
	}
	
	
	
	return 0;
}
