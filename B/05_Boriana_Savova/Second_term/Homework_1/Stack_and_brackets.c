#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10
int is_balanced = 0;

char string[MAX_SIZE] = {'{','}','{','{', };
int first_atm = 0;

char *strrchr(const char *str, int search_for_ch);

int is_correct ( char *str1, int search_for_ch1){
	char *found;	
	found = strrchr( str1, search_for_ch1);
	first_atm++;
	if ( found == 0 ){
		return 0;
	}else{	
		string[first_atm]= ' ';
		string[*found]= ' ';
		return 1;
	}
}

int main(){
	int i_count;
	if(string[0] == '}' || string[0] == ']' || string[0] == ')')
	{
		is_balanced = -1;
		printf( "%d", is_balanced);
	}else
	 { 
		while(is_balanced == 0 && i_count<=10)
		{
			if(string[first_atm] == '{' && string[first_atm+1] =='}'){
				string[first_atm]= ' ';
				string[first_atm+1]= ' ';
				first_atm=first_atm+2;
			
			}else{
							
				if (string[first_atm]=='}'){
					is_balanced = -1;
					printf( "%d", is_balanced);
				}else{
					if( is_correct ( string, '}') ){
						first_atm++;		
					} else{
						is_balanced=-1;
						printf("%d",is_balanced);
					}	
				}
			}
			i_count++;
		}
	if(i_count>=10) printf("%d", is_balanced);
	}	
	return 0;
}


