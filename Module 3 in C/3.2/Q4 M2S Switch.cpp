 #include <stdio.h>
main(){
        int day;
        printf("\n _____________");
        printf("\n 1 Monday");
        printf("\n 2 Tuesday");
        printf("\n 3 Wednesday");
        printf("\n 4 Thursday");
        printf("\n 5 Friday");
        printf("\n 6 Saturday");
        printf("\n 7 Sunday");
        printf("\n _____________");
        printf("\n Enter a day:");
        scanf("%d",&day);
        switch(day)
        {
            case 1:
                printf("Monday");
                break;
            case 2:
                printf("Tuesday");
                break;
            case 3:
                printf("Wednesday");
                break;
            case 4:
                printf("Thursday");
                break;
            case 5:
                printf("Friday");
                break;
            case 6:
                printf("Saturday");
                break;
            case 7:
                printf("Sunday");
                break;
            default:
                printf("Invalid Input");
                break;
        }
    }
