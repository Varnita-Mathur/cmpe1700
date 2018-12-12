//

#define _CRTDBG_MAP_ALLOX
#include <stdlib.h>

#include <crtdbg.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	//creating an array 
	//type_name[size] = {set, of, initial, values}

	int values[5] = { 1,2,3,4,5 }; //array of 5 ints
	printf("%i", values[2]); //print 3rd element
	  

	char Name[] = { 'B', 'o','b',0 }; //char array Name and SameName are the same char array
	char sameName[] = "Bob";


	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); //check mem leaks


	printf("My very first C program! Well, at least for CNT.");
	printf("\n\n");
	fflush(stdout);

	int *p = (int *)malloc(sizeof(int)); //int pointer malloc

	*p = 10; //points to value 10
	printf("\nI'm trying to leak %d bytes of memory\n Anarchy now!\n", sizeof(*p));


	system("pause");


	


	return 0;
}
