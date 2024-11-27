#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	int score;
};

void main(void){
	struct student s[STUDENTNUM];
	int totalscore = 0;
	int highestscore = 0;
	int highestID = 0;
	
	for(int i=0; i<STUDENTNUM; i++){
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
        scanf("%d", &s[i].score);
        
        totalscore += s[i].score;
        
        if (s[i].score > highestscore) {
            highestscore = s[i].score;
            highestID = s[i].ID;
        }
	}
	
	double averagescore = (double)totalscore / STUDENTNUM;
	
	printf("The average of the score: %f\n", averagescore);
    printf("The highest score - ID: %d, score: %d", highestID, highestscore);
    
}
