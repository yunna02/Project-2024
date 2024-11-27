#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade;
};

int main(void){
	struct student s = {24, "Eunju", 4.2};
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f\n", s.grade);
	
}


/*struct student{
	int ID;
	char name[10];
	double grade;
};

int main(void){
	struct student s = {23, "John", 3.5};
	
	s.ID = 24;
	strcpy(s.name, "Eunju");
	s.grade = 4.2;
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f\n", s.grade);
	
}*/