#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"

void string_copy(const char source[], char destination[], int n){
	int i;
	for(i = 0; i < n-1 && source[i] != '\0'; i++){
		destination[i] = source[i];

	}
	destination[i] = '\0';

	return;
	
    
}
