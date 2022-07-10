#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int divide_number(int divided_number[],int input)	
{
	int ten_multiple;
	int cipher=0;
	
	for(ten_multiple=1 ;  ; ten_multiple*=10)  //Convert to a multiple of 10
	{
		if(ten_multiple>input)
			break;
	}
	ten_multiple/=10; 
	
	for(ten_multiple ; ten_multiple>0 ; ten_multiple/=10)	//divide number
	{
		divided_number[cipher]=input/ten_multiple;
		divided_number[cipher]%=10;
		cipher++;
	}
	return cipher; //return cipher
}

bool solution(int x) 
{
    bool answer = true;
    int divided_number[5]={0,};
    int cipher;
    int i,sum=0;
    
    cipher=divide_number(divided_number,x);
	for(i=0;i<cipher;i++)
    {
    	sum+=divided_number[i];
	}
	if(x%sum!=0)
		answer = false;
    
    
    return answer;
}

int main(void)
{
	unsigned input_value;
	bool result;
	
	scanf("%d",&input_value);
	
	result=solution(input_value);
	
	if(result==true)
		printf("true");
	else
		printf("false");
	
	
}
