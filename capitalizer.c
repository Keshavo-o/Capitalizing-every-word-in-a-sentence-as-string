#include<stdio.h>
#include<string.h>
#include "Ascii_code.c"
main()
{
    char str[100];
    printf("Enter a string\n");
    gets(str);
    //A-65   Z-90 
    //a -97  z-122
    char res[100];
    int len=strlen(str),i,j;
    //check first word
    if(Give_ascii_code(str[0])<=122 && Give_ascii_code(str[0]) >= 97)
    {
    	int temp=Give_ascii_code(str[0]) - 32;
    	res[0]=Ascii_code_check(temp);
    	//printf("%c",res[0]);
	}
	else
	{
		res[0]=str[0];
	}
	/*else
	{
		printf("%c",str[0]);
	}*/
	//checking rest code
    for(i=1;i<len;i++)
    {
        if(str[i]==' ')
        {
        	res[i]=' ';
        	printf("%c -> %c",str[i],res[i]);
        	if(Give_ascii_code(i + 1 < len && str[i+1])<=122 && Give_ascii_code(str[i+1]) >= 97)
        	{
        		int temp = Give_ascii_code(str[i+1])-32;
        		res[i+1] = Ascii_code_check(temp);
        		printf("%c -> %c",str[i],res[i]);
        		i++;//necessary step - skip next character as already processed
			}
        }
        else
        {
            res[i]=str[i];
            printf("%c -> %c\n",str[i],res[i]);
        }
    }
    res[i]='\0';
    printf("The final string is \n");
    puts(res);

}
