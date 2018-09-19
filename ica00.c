//

#define _CRTDBG_MAP_ALLOX
#include <stdlib.h>

#include <crtdbg.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	//creating an array 
	//type_name[size] = {set, of, initial, values}

	int values[5] = { 1,2,3,4,5 };
	printf("\%i", values[2]);
	  

	char Name[] = { 'B', 'o','b',0 };
	char sameName[] = "Bob";


	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	printf("My very first C program! Well, at least for CNT.");
	printf("\n\n");
	fflush(stdout);

	int *p = (int *)malloc(sizeof(int));

	*p = 10;
	printf("\nI'm trying to leak %d bytes of memory\n Anarchy now!\n", sizeof(*p));


	system("pause");


	system("pause");


	return 0;
}