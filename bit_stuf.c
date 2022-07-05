#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i=0, count = 0;
	int k,choice;
	char data[20];
	while(1){
		printf("\nEnter your choice:1.bit-stuff\t2.bit-destuff\t3.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter Data Bits: ");
 					 scanf("%s",data);
 
 					 for(i=0; i<strlen(data); i++)
                      {
                        if(data[i]=='1')
                         count++;
                        else
                           count=0;
                          printf("%c",data[i]);
                           if(count==5)
					      { 
					        printf("0");
					        count=0;
					      }
					   }
							break;
							printf("bit-stuff:");
			case 2: printf("enter data");
			        scanf("%s",data);
					count = 0;
					for(i=0;i<strlen(data);i++){
						if(data[i] == '1'){
							count++;
						}
						else { count = 0; }
						if (count == 5){
							i+=1;
							for(k=i;k<strlen(data);k++){
								data[k] = data[k+1]; }
								data[k] = '\0';
								i-=1;
						}
					}				
                     printf("data-unstuffed: %s",data);
                     break;
			case 3: exit(0);
		}
	}
}