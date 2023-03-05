#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char Select(char car){
    int selected_car;
    printf("Please select the car you want to play.\n");
    printf("---------------------------------------\n");
    printf("        1-LAMBORGHİNİ GALLARDO\n");
    printf("Handling:+++++\n");
    printf("Speed:+++++++++++\n");
    printf("Acceleration:+++++++\n");
    printf("---------------------------------------\n");
    printf("        2-FORD MUSTANG GT\n");
    printf("Handling:++++++++\n");
    printf("Speed:++++++\n");
    printf("Acceleration:++++++\n");
    printf("---------------------------------------\n");
    printf("        3-NİSSAN GT-R\n");
    printf("Handling:+++++++++\n");
    printf("Speed:++++++++\n");
    printf("Acceleration:+++++++++\n");
    printf("---------------------------------------\n");
    scanf("%d",&selected_car);
    switch(selected_car){
        case 1: printf("You chose Lamborghini Gallardo.\n");
                return 'L';
                break;
        case 2: printf("You chose Ford Mustang GT.\n");
                return 'F';
                break;
        case 3: printf("You chose Nissan GT-R.\n");
                return 'N';
                break;
        default: printf("The number you entered is invalid. Please try again.\n");
                 Select(car);
    }
}
int main(){
    srand(time(0));
    int computer_location=1;
    int racer_location=1;
    int guess;
    int random;
    int j=1;
    char car;
    char Racer[30];
    printf("Welcome to the car racing game. Please enter your character's name (max 30 characters).\n");
    scanf("%s",Racer);
    car = Select(car);
    while(computer_location!=20 && racer_location!=20){
        computer_location++;
        random=rand()%3+1;
        while(j=1){
            printf("\nWrite a number from one to three.\n");
            scanf("%d",&guess);
            if(guess>3){
                printf("The number you entered is invalid. Please try again.\n");
            }
            else break;
        }
        if(guess==random){
            if(random==1){
                racer_location=racer_location+1;
            }
            if(random==2){
                racer_location=racer_location+2;
            }
            if(random==3){
                racer_location=racer_location+3;
            }
        }    
        else{
            printf("wrong\n");
        }
        for(int i=1;i<=20;i++){
            if(i==computer_location){
                printf("C");
            }
            else if(i==racer_location){
                printf("%c",car);
            }
            else if(i==computer_location && i==racer_location){
                printf("D");
            }
            else{
                printf("-");
            }
        }
    }
    if(computer_location==20){
        printf("\nThe computer won. You lost.\n");
    }
    else if(racer_location==20){
        printf("\n%s won. Congratulations.\n",Racer);
    }
    else{
        printf("\nLook at the chance. Draw.\n");
    }
return 0;
}
