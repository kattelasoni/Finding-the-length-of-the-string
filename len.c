//program to find the length of the string

    #include <stdio.h>  
    #include <string.h>  
    int main()  
    {  
    char str1[50], temp;   
    int i = 0, j =0,count=0,len;  
    printf (" Enter a string : ");  
    scanf( "%s", str1); 
	len=strlen(str1);
	for(i=0;i<=len;i++)
	{
		count++;
	} 
    	j = strlen (str1) - 1;  
     printf (" The length of the string: %d",  count-1);  
    return 0;  
    }  
