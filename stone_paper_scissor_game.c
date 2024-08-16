#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>\

int game(char you, char computer){
    if(you==computer){
        return -1;
    }
    if(you=='s' && computer=='p'){
        return 0;
    }
    else if(you=='p' && computer=='s'){
        return 1;
    }

    if(you=='s' && computer=='z'){
        return 1;
    }
    else if(you=='z' && computer=='s'){
        return 0;
    }

    if(you == 'p' && computer=='z'){
        return 0;
    }
    else if(you=='z' && computer=='p'){
        return 1;
    }
}

int main(){
    int n;
    char you,computer,result;

    srand(time(NULL));

    n=rand()%100;

    if(n<33 && n>66 ){
        computer ='r';
    }
    else if(n<33){
        computer ='p';
    }
    else{
        computer ='s';
    }
    printf("\n\n\n\n\t\t\t\t\tWELCOME TO STONE PAPER AND SCISSORS\n\t\t\t\t\t\t\t");
    printf("\n\n\n\n\t\t\t\tEnter z for SCISSOR , p for PAPER and s for STONE\n\t\t\t\t\t\t\t");

    scanf("%c",&you);

    result = game(you, computer);

    if(result == 1){
        printf("\n\n\n\n\t\t\t\t\tCongratulations!!! , You have won\n\t\t\t\t\t\t\t ");
    }  
    else if(result == -1){
        printf("\n\n\n\n\t\t\t\t\tIt is a tie\n\t\t\t\t\t\t\t ");
    }  
    else{
        printf("\n\n\n\n\t\t\t\t\tOh No!!!,You have lost\n\t\t\t\t\t\t\t");
    } 
    printf("\n\n\n\n\t\t\t\t\tYou chose: %c and computer chose: %c",you,computer);

    
    return 0;
}