#include <stdio.h>
#define ROWS 3
#define COLS 5 


void printArr(char arr[ROWS][COLS]) {


	//printf("배열의 상태 : \n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(void){



	char data[ROWS][COLS] = { 0 };
	char (*p)[COLS];

	p = data;

	printf("시작전");
	printArr(data);


	(*p)[1] = 3;
	(*(p + 1))[2] = 4;
	(*(p + 2))[4] = 5;

	printf(" plz any key to continue \n");
	getchar();

	p = data; 
	p++; 
	(*p)[0] = 7;
	(*p)[4] = 8;
	(*(p - 1))[3] = 9;
	printf("시작전 \n");
	printArr(data);

	char* ptr = &data[0][0];
	*(ptr + 6) = 10;
	*(ptr + 10) = 11;
	*(ptr + 14) = 28;

	printArr(data);

	char temp[COLS];
	for (int i = 0; i < COLS; i++) {
		temp[i] = data[0][i];
		data[0][i] = data[2][i];
		data[2][i] = temp[i];

	}

	printf(" 배열의 상태 \n");
	printArr(data);
	printf(" plz any key to continue \n");
	getchar();

	return 0;


}