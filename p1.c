#include<stdio.h>

int main()
{

    printf("********** WELCOME TO CAFE ROBUSTA **********\n");
    int ch;
    int sub_total;
    int grand_total;
    int espress0_qty=0,croissant_qty=0,aflredo_pasta_qty=0,muffin_qty=0,pizza_qty=0;
    float gst;
    int Payment;
    label:
    printf("Here's the menu ,what do you want to order\n");
    printf("1.ESPRESSO = RS.100/- \n");
    printf("2.CROISSANT = RS.150/- \n");
    printf("3.ALFREDO_PASTA = RS.200/- \n");
    printf("4.MUFFIN = RS.250/- \n");
    printf("5.PIZZA = RS.300/- \n");
    printf("6. CHECKOUT AND EXIT\n");

    do
    {   
        menu_loop:

        printf("ENTER YOUR CHOICE: \n");
        scanf("%d",&ch);


    switch(ch)
    {

        case 1: 
                printf("You Ordered ESPRESSO\n");
                sub_total = sub_total + 100;
                espress0_qty++;
                break;
          
        case 2: 
                printf("You Ordered CROISSANT\n");
                sub_total = sub_total + 150;
                croissant_qty++;
                break;

        case 3: 
                printf("You Ordered ALFREDO_PASTA\n");
                sub_total = sub_total + 200;
                aflredo_pasta_qty;
                break;

        case 4: 
                printf("You Ordered MUFFIN\n");
                sub_total = sub_total + 250;
                muffin_qty;       
                break;

        case 5: 
                printf("You Ordered PIZZA\n");
                sub_total = sub_total + 300;
                pizza_qty;
                break;
        
        case 6:
                printf("Exit\n");
                goto checkout;
        default:
                printf("INVALID CHOICE! Please selecet from the menu \n"); 
        goto label;  
        
    }
    
    }
while(ch != 5);
    printf(".........You have Ordered......\n");
    if(espress0_qty > 0)
        printf("ESPRESSO: %d\n", espress0_qty);

    if(croissant_qty > 0)
        printf("CROISSANT: %d\n", croissant_qty);

    if(aflredo_pasta_qty > 0)
        printf("ALFREDO_PASTA: %d\n", aflredo_pasta_qty);

    if(muffin_qty > 0)
        printf("MUFFIN: %d\n", muffin_qty);

    if(pizza_qty > 0)
        printf("PIZZA: %d\n", pizza_qty);


    checkout:
    // Calculate 18% GST on SUB_TOTAL         
    gst = sub_total * 0.18;

    // ADD GST and SUB_TOTAL to get the final bill(grand_total)
    grand_total = sub_total + gst;


    printf("''''''''INVOICE'''''''''\n");
    printf("-----------------------------\n");
    printf("'''''SUB_TOTAL = RS. %d /-'''''\n",sub_total);
    printf("-----------------------------\n");
    printf("'''''GST = RS. %f /-'''''\n",gst);
    printf("-----------------------------\n");
    printf("'''''GRAND TOTAL = RS. %d /- '''''\n",grand_total);
    printf("------------------------------\n");
    
    

    printf(" Please choose the mode of 'Payment'\n");
    printf("''''1.CASH''''\n");
    printf("''''2.UPI''''\n");
    printf("''''3.CARD''''\n");
    scanf("%d",&Payment);

    switch(Payment)
    {
        case 1:
            printf("Piad by CASH\n");
            break;

        case 2:
            printf("Paid by UPI\n");
            break;
    
         case 3:
            printf("Paid by CARD\n");
            break;

        default:
            printf("Invalid !!!");
    }
    
    printf("\nThank you for ordering with CAFE ROBUSTA  , Please visit again\n");

    return 0;
}