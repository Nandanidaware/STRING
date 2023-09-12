
//Concantnation two string
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="Nandani";
	char b[10]="Daware";
	strcat(a,b);
	printf("%s",a);
}
*/
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[] = "Hello World";

    printf("Original String: %s\n", inputString);

    // Convert to uppercase
    for (int i = 0; inputString[i] != '\0'; i++) {
        inputString[i] = toupper(inputString[i]);
    }
    printf("Uppercase String: %s\n", inputString);

    // Convert to lowercase
    for (int i = 0; inputString[i] != '\0'; i++) {
        inputString[i] = tolower(inputString[i]);
    }
    printf("Lowercase String: %s\n", inputString);

    return 0;
}

/*

//Remove Space in a string
#include <stdio.h>

int main() {
    printf("Enter: ");
    char c;
    while ((c = getchar()) != '\0') {
        if (c != ' ') {
            putchar(c);
        }
    }

    return 0;
}
*/
/*
//Count occurrences of a character:

#include<stdio.h>
#include<string.h>
int main()
{
	char A[20]="programming";
	char s='m';
	int c=0;
	for(int i=0;A[i]!='\0';i++)
	{
		if(s==A[i])
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}*/
/*
//Check for anagrams:

#include<stdio.h>
#include<string.h>
int main()
{
	char A[20]="silent";
	char B[]="listen";
	int found;
	for(int i=0;A[i]!='\0';i++)
	{
		for(int j=0;B[j]!='\0';j++)
		{
			if(A[i]==B[j])
			{
				found=1;
				break;
			}
			else
			{
					printf("NOt Anagaram");
			}
			break;
		}
		if(!found)
		{
			printf("Anagram");
			break;
		}
	}
	if(found)
	{
		printf("Anagram");
	}
	return 0;
}*/
































