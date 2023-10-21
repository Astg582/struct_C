#include<stdio.h>
#include<stdlib.h>
#include "boo_car.h"
#include<stdbool.h>

//prototypes
book* libr(int);
void print(book*, int);
void A_search(book*, int);
car* garage(int);
void console( car*, int);
bool str_CH(char*, char*);

int main()
{
printf("enter to numer of car\n");
int s = 0;
scanf("%d", &s);

car* cars = garage(s);
console(cars, s);


free(cars);
//free(books);
}


car* garage(int s)
{
    car* cars = (car*) malloc(sizeof(car) * s);
    for(int i = 0; i < s; ++i)
    {
        printf("enter to car brend\n");
        scanf("%s", cars[i].brend);
        printf("enter to model\n");
        scanf("%s", cars[i].model);
        printf("enter to year\n");
        scanf("%d", &cars[i].year);
    }
    return cars;
}

void console( car* cars, int s)
{
	char* merc = "merc";

	for(int i = 0; i < s; ++i)
	{
	
		if(str_CH(cars[i].brend, merc))
		{
			printf("car produced in %d year is a mercedes\n", cars[i].year);
		}

	}	
}

bool str_CH(char* str1, char* str2)
{
	int i = 0;

	while(str1[i] != '\0')
	{
		while(str2[i] !='\0')
		{
			if(str1[i] == str2[i])
			{
				++i;
			}else {
				return 0;
			}
			++i;
		}	
		return 1;	
	}
	return 0;
}

book* libr(int s){
    book* books = (book*) malloc(sizeof(book) * s);
    for(int i = 0; i < s; ++i)
    {
        printf("enter to name of book\n");
        scanf("%s", books[i].name);
        printf("enter to afrer name\n");
        scanf("%s", books[i].aftr_name);
        printf("enter year\n");
        scanf("%d", &books[i].year);
    }
    return books;
}


void A_search(book* books, int s)
{
    for(int i = 0; i < s; ++i)
        {
            if('A' == books[i].name[0])
            {
                printf("%s\n", books[i].name);
                printf("%s\n", books[i].aftr_name);
                printf("%d\n", books[i].year);
            }
        }
}

void print(book* books, int s)
{
    for(int i = 0; i < s; ++i)
    {
        printf("%s\n", books[i].name);
        printf("%s\n", books[i].aftr_name);
        printf("%d\n", books[i].year);
    }
}
