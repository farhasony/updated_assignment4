#include <stdio.h>
 
int main()
{
  	char str[100], word[100];
  	int i, j, Flag;
 
  	printf("\n Please Enter any String :  ");
  	//gets(str);
  	fgets(str,100,stdin);
  	str[strlen(str)-1]=0;
  	
	printf("\n Enter the Word that you want to Search for :  ");
  	//gets(word);
  	fgets(word,100,stdin);
  	word[strlen(word)-1]=0;
	     	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == word[0])
		{
			Flag = 1;
			for(j = 0; word[j] != '\0'; j++)
			{
				if(str[i + j] != word[j])
				{
					Flag = 0;
					break;
				}
			}	
		}
		if(Flag == 1)
		{
			break;
		} 
	}
	if(Flag == 0)
  	{
  		printf("\n  We haven't found the Word '%s' ", word);
	}
	else
	{
		printf("\n We found '%s' at position %d ", word, i + 1);
	}	
	
  	return 0;
}
