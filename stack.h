int push(char a[], int *t, char e, int n){        

	if(*t>=n){
		printf("Stack Overflow..!\n");
		return 0;
	}
	else{
		*t = *t + 1 ;
		a[*t] = e;
		return 1;
	}
}
	
char pop(char a[], int *t){                 // returns a character
	
	if(*t == 0){
		printf("Stack Underflow..!\n");
	}
	else{
		*t = *t - 1;
		return a[*t+1];
	}
}

char peep(char a[], int *t, int i){         // returns a character

	if((*t - i + 1) <= 0){
		printf("Stack Underflow..!");
		return '0';
	}
	else{
		return a[*t - i + 1];
	}
}

void change(char a[], int *t, char z, int i){    // returns nothing
	
	if((*t - i + 1) <= 0){
		printf("Stack Underflow..!\n");
	}
	
	a[*t - i + 1] = z;
	printf("Changes Done");
}


