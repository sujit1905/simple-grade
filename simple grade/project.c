#include<stdio.h>

int main()
{
	int score;
	char grade;
	
	// Input the score from user
	printf("Enter your score : ");
	scanf("%d",&score);
	
	// grade using ternary operator
	grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : 
	        (score >= 60) ? 'D' : (score >= 40) ? 'E' : 'F';

	printf("Your grade is %c. ", grade);
	
	// Show message based on grade
	switch(grade){
		case 'A':
			printf("Excellent Work! \n");
			break;
		case 'B':
			printf("Well done \n");
			break;
		case 'C':
			printf("Good Job \n");
			break;
		case 'D':
			printf("You Passed, but you could do better \n");
			break;
		case 'E':
			printf("Needs improvement! \n");
			break;
		case 'F':
			printf("Sorry, you failed. \n");
			break;
	}

	// Eligibility check for next level
	if(grade == 'F'){
		printf("Please try again next time.");
	}
	else{
		printf("Congratulation! You are eligible for the next level.");
	}
	
	return 0;
}
