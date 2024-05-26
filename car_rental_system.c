#include<stdio.h>

void main()
{
    int u,d,r,l;
   
    printf("\n CAR RENTAL APPLICATION \n");
    printf("\n ----------------------- \n");
    printf("\n Press 1 for Deluxe Vehicles \n");
    printf("\n Press 2 for Long or Road Trip Vehicles \n");
    printf("\n Press 3 for Luxury Vehicle \n");
    printf("\n ---------------------------- \n");
    printf("\n Press any Option: \n");
    scanf("%d", &u);
    switch(u)
    {
        case 1:
        printf("\n You have chosen Deluxe Vehicles \n");
        printf("\n Deluxe Vehicle Available are \n");
        printf("\n Maruti CITY, OMNI, V.POLO \n");
        printf("\n ------------------------------ \n");
        printf("\n do u want to hire, Press 1 | CITY, 2 | OMNI, 3 | POLO \n");
        scanf("%d", &d);
        switch(d)
        {
            case 1:
            printf("\n You have selected CITY | Cost 2000rs per day \n");
            break;

            case 2:
            printf("\n You have selected OMNI | Cost 5000rs per day \n");
            break;

            case 3:
            printf("\n You have selected Volkswagen Polo | Cost 15,000 per day \n");
            break;
        }
        break;

        case 2:
        printf("\n You have chosen Long Trip Vehicles \n");
        printf("\n Vehicles Available are \n");
        printf("\n TATA SUMO, TAVERA, TOOFAN \n");
        printf("\n ----------------------------- \n");
        printf("\n do u want to hire , press 1 | TATA, 2 | TAVERA, 3 | TOOFAN \n");
        scanf("%d", &r);
        switch (r)
        {
            case 1:
            printf("\n You have selected TATA SUMO | Cost 6000rs per day \n");
            break;

            case 2:
            printf("\n You have selected TAVERA | Cost 8,000rs per day \n");
            break;

            case 3:
            printf("\n You have selected TOOFAN | Cost 9,000rs per day \n");
            break;

        }
        break;

        case 3:
        printf("\n You have chosen Luxury Cars");
        printf("\n Luxury Vehicles Available are \n");
        printf("\n FERRARI, BMW, AUDI \n");
        printf("\n ------------------------------ \n");
        printf("\n Do u want to hire, Press 1 | FERRARI, 2 | BMW, 3 | Audi \n");
        scanf("%d", &l);
        switch(l)
        {
            case 1:
            printf("\n You have selected FERRARI | Cost 20,000rs per day \n");
            break;

            case 2:
            printf("\n You have selected BMW | Cost 25,000rs per day \n");
            break;

            case 3:
            printf("\n You have selected Audi | Cost 30,000rs per day \n");
            break;
        }
        break;
    }
   
}
