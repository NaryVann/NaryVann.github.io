#include <stdio.h>
#include <math.h>
int choice();
int computer();
int main()
{
	printf("Enter your choice\n");
	printf("Play or Leave?(y/l)");
	game();
	return 0;
}
int game(){
	char c;
	scanf(" %c", &c);
	switch(c){
		case 'y':
			choice();
			break;
		case 'l':
			printf("OK bye then~~");
			break;
		default:
			printf("please input different choice\n");
			game();
	}
}
int choice(){
	int a,pc;
	printf("Enter your choice for Rock(1),Paper(2),Scissors(3): \n ");
	scanf(" %d", &a);
	if(a==1||a==2||a==3){
		pc=computer();
		switch(pc){
			case 1:
				printf("Computer chooses Rock\n");
				break;
			case 2:
				printf("Computer chooses Paper\n");
				break;
			case 3:
				printf("Computer chooses Scissors\n");
				break;
			default:
				printf(" Eww! LOoK aT tHe InTrOdUcTiOn AgAin :\n");
		}

		if(a==1 && pc==1){
			printf("Draw");
		}
		else if(a==1 && pc==2){
			printf("You choose Rock\n");
			printf("Computer Win!");
		}
		else if(a==1 && pc==3){
			printf("You choose Rock\n");
			printf("You Wins!");
		}
		else if(a==2 && pc==1){
			printf("You choose Rock\n");
			printf("You Win!");
		}
		else if(a==2 && pc==2){
			printf("You choose Paper\n");
			printf("Draw");
		}
		else if(a==2 && pc==3){
			printf("You choose Paper\n");
			printf("Computer Wins!");
		}
		else if(a==3 && pc==1){
			printf("You choose Scissors\n");
			printf("Computer Wins!");
		}
		else if(a==3 && pc==2){
			printf("You choose Scissors\n");
			printf("You Win!");
		}
		else if(a==3 && pc==3){
			printf("You choose Scissors\n");
			printf("Draw");
		}	
		else {
			printf("Error 404");
		}
	}
	printf("\n");
	choice(); 	
}
int computer()
{
	return rand()%3 +1;
}


