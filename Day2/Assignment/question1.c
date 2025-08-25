#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);


int main(){

    int choice;
    struct Date date;
    struct Date *datePointer = &date;
    
    do{
        printf("Select your choice:\n");
        printf("1.Init Date.\n 2.Print Date on console.\n 3.Accept Date from console.\n 4.Exit \n");
    
        scanf("%d", &choice);
        switch(choice){
                case 1: 
                    initDate(datePointer); 
                    break;
                case 2: 
                    printDateOnConsole(datePointer); 
                    break;
                case 3: 
                    acceptDateFromConsole(datePointer); 
                    break;
                default:
                    printf("Wrong choice! Try Again!\n");
            
        }
    }while(choice!=4);


    return 0;
}

void acceptDateFromConsole(struct Date* ptrDate){
    int day, month, year;
    printf("Enter the day; ");
    scanf("%d", &day);
    printf("Enter the month; ");
    scanf("%d", &month);
    printf("Enter the year; ");
    scanf("%d", &year);


    ptrDate->day = day;
    ptrDate->month =month;
    ptrDate->year = year;
    
    
    printf("Input successfully recorded!\n");

}

void initDate(struct Date* ptrDate){
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2025;
}

void printDateOnConsole(struct Date* ptrDate){
     printf("%d/%d/%d \n", ptrDate->day, ptrDate->month, ptrDate->year);
}