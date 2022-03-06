#include<stdio.h>
#include"stack.h"

int main(){

	int n, top=0, count = 0, choice, i, index;
	char s[n+1];	
	char x, y, z, p;
	
	while(1){
	
		printf("1. Push\n2. Pop\n3. Peep\n4. Change\n5. Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		
		if(choice<=5){
			
			switch(choice){
			
				case 1:
					printf("Enter total push : ");
					scanf("%d",&n);
					
					while(count != n){
					printf("Enter an element to push\n");
					scanf("%c",&x);
					scanf("%c",&y);
					
					int i = push(s, &top, x, n);
					
					if (i==1){
						printf("Push Done\n\n");
					}
					else{
						printf("Push Failed\n\n");
					}
					
					count++;
				}
				break;
				
				case 2:
				
					pop(s, &top);
					
				break;
				
				case 3:
				
					printf("Enter the index to peep to : \n");
					scanf("%d", &i);
					p = peep(s, &top, i);
					printf("%c\n", p);
					
				break;
				
				case 4:
				
					printf("Enter Element to be changed : \n");
					scanf("%c", &z);
					printf("enter the index of element to be changed : \n");
					scanf("%d", &i);
					change(s, &top, z, index);
				break;
			}
			
			if(choice == 5){
				break;
			}
			
		}
	}
	
	
	

return 0;
}
