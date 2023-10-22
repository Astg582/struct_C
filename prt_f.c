#include <stdio.h>
#include <stdbool.h>


bool zuig(int);
void tpel(bool(*zuig)(int), int*, int);

int main()
{
	int s = 10;
	int arr[s];
	for(int i = 0; i < s; ++i)
	{
		scanf("%d", (arr + i));
	}	
	
	tpel(zuig, arr, s); 
}

bool zuig( int a)
{
	if(!(a % 2))
	{
		return 1;
	}
	return 0;
}

void tpel(bool(*zuig)(int), int* arr, int s)
{
	for(int i = 0; i < s; ++i)
	{
		if(zuig(arr[i])){
			printf("%d\n", arr[i]);
		}
	}	

}
