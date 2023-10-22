#include <stdio.h>
#include <stdlib.h>


typedef struct
{
int day;
int munt;
int year;
}data;

typedef struct
{
char name[20];
char l_name[20];
data* d;
}piple;

void fiil(piple* arr,  int s);
void pri(piple* arr, int s);

int main()
{
	int e = 0;
	int s  = 0;
	printf("enter the s\n");
	scanf("%d", &s);
	while((e = getchar()) != '\n' && e != EOF);

	piple* arr = (piple*) calloc(sizeof(piple), s);	
	
	fiil(arr, s);
	pri(arr, s);

	for(int i = 0; i < s; ++i)
	{
		free(arr[i].d);
	}
free(arr);
}

void pri(piple* arr, int s)
{
	int index = 0;
	int max = arr[0].d->year;
	for(int i = 0; i < s; ++i)
	{
		if(arr[i].d->year < max)
		{
                        max = arr[i].d->year;
			index = i;
		}
	}
	 
         
                printf("The name %s\n", arr[index].name);
                printf("the last name %s\n", arr[index].l_name);
                printf("the bird day %d %d %d", arr[index].d->day, arr[index].d->munt, arr[index].d->year);
         

}	

void fiil(piple* arr,  int s)
{
	
	for(int i = 0; i < s; ++i)
	{
	        arr[i].d = (data*) malloc(sizeof(data));	
		printf("enter to name\n");
		fgets(arr[i].name, 20, stdin);
		printf("enter to last name\n"); 
		fgets(arr[i].l_name, 20, stdin);
		printf("enter to bird day\n");
	        scanf("%d %d %d", &arr[i].d->day, &arr[i].d->munt, &arr[i].d->year);
	       int e = 0;
	       while((e = getchar()) != '\n' && e != EOF);
	}
}
