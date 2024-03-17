#include<stdio.h>
#include<stdlib.h>
float total,no,no1,no2,no3,no4,no5,no6,no7;
float pl,pl1,pl2,pl3,pl4,pl5,pl6,pl7;
float acc,acc1,acc2,acc3,acc4,acc5,acc6,acc7;
 char ch2,ch;
 int ch1;
int bureger();
int noodles();
int sandwich();
int pasta();
int menu();
int rice();
int pizza();
int roll();
int juice();
int bill();
int main(){
     printf("\t\t\t\t\t\t\t\t\n\n...........wellcom to the B TO B Cafe...........\n\n");
    printf(" Hello sir Tell me sir what did you want to ask for...? ( y/n ) :- ");
    scanf("%c",&ch);
   if (ch == 'y'){
    menu();
   }
    else if (ch == 'n'){
        printf("\nThank you sir If you need anything, please let me know ");
        exit(0);
    }
    
}
int menu(){
    
    printf("\n\n | press 1 for .....Bureger\n");
    printf(" | press 2 for .....Noodles\n");
    printf(" | press 3 for .....Sandwich\n");
    printf(" | press 4 for .....Pasta\n");
    printf(" | press 5 for .....Pizza\n");
    printf(" | press 6 for .....Rice\n");
    printf(" | press 7 for .....Roll\n");
    printf(" | press 8 for .....Juice\n");
    printf(" | press 9 for .....Bill\n");
    printf(" | press 10 for .....exit\n");
    printf ("\n\nPlease Enter your choice sir if you want to order :- ");
    scanf ("%d",&ch1);
    
    switch(ch1){
        case 1:
        bureger();
        break;
        case 2:
        noodles();
        break;
        case 3:
        sandwich();
        break;
        case 4:
        pasta();
        break;
        case 5:
        pizza();
        break;
        case 6:
        rice();
        break;
        case 7:
        roll();
        break;
        case 8:
        juice();
        break;
        case 9:
        bill();
        break;
        case 10:
        exit(0);
        default:
        printf ("\n please enter a valid number ");
    } 
}
int bureger(){
    printf("\n|  1 Paneer and Green Peas Burger____________ ₹80");
    printf("\n|  2 Pizza Burger Bowl_______________________ ₹120");
    printf("\n|  3 Spicy Paneer Burger_____________________ ₹50");
    printf("\n|  4 Vegetable Burger________________________ ₹65");
    printf("\n|  5 Veg Cheese Bueger_______________________ ₹85");
    printf("\n|  6 Mushroom Burger_________________________ ₹150");
    printf ("\n\n Sir would you like to do it ? :- ");
    scanf("%f", &no);
    if (no == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl);
        acc = pl*80;
        
    }
    else if (no == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl);
        acc = pl*120;
        
         
    }
       else if (no == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl);
        acc = pl*50;
        
       
    }
       else if (no == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl);
        acc = pl*65;
        
    }
       else if (no == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl);
        acc = pl*85;
        
    }
       else if (no == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl);
        acc = pl*150;
        
    }
    else {
        printf ("\n\nInvalid number please try again :- ");
    }
    menu();
}
int noodles(){
    
    printf("\n|  1 Veg Noodels___________________________ ₹30");
    printf("\n|  2 Paneer Noodles________________________ ₹50");
    printf("\n|  3 Spicy Noodels_________________________ ₹45");
    printf("\n|  4 Vegetable Noodels_____________________ ₹70");
    printf("\n|  5 Cheese Noodels _______________________ ₹65");
    printf("\n|  6 Hakka Noodles_________________________ ₹220");
    printf ("\n\n Sir would you like to do it ? :-");
    scanf("%f", &no1);
    if (no1 == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl1);
        acc1 = pl1*30;
        
         
    }
    else if (no1 == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl1);
        acc1 = pl1*50;
        
       
    }
       else if (no1 == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl1);
        acc1 = pl1*45;
        
    }
       else if (no1 == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl1);
        acc1 = pl1*70;
        
    }
       else if (no1 == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl1);
        acc1 = pl1*65;
        
    }
       else if (no1 == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl1);
        acc1 = pl1*220;
        
    }
    else {
        printf ("\n\nInvalid number please try again :- ");
    }
    menu();
   
}
int sandwich(){
   
    printf("\n|  1 Massala Sandwich______________________ ₹50");
    printf("\n|  2 Chees Sandwich________________________ ₹65");
    printf("\n|  3 Double Chees Sandwich_________________ ₹130");
    printf("\n|  4 Vegetable Sandwich____________________ ₹55");
    printf("\n|  5 Chocolate Sandwich____________________ ₹75");
    printf("\n|  6 Paneer Sandwich_______________________ ₹65");
    printf ("\n\n Sir would you like to do it ? :- ");
    scanf("%f", &no2);
    if (no2 == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl2);
        acc2 = pl2*50;
        
    }
    else if (no2 == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl2);
        acc2 = pl2*65;
        
    }
       else if (no2 == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl2);
        acc2 = pl2*130;
        
    }
       else if (no2 == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl2);
        acc2 = pl2*55;
        
    }
       else if (no2 == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl2);
        acc2 = pl2*75;
        
    }
       else if (no2 == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl2);
        acc2 = pl2*65;
        
    }
    else {
        printf ("\n\nInvalid number please try again :- ");
    }
    menu();

}
int pasta(){
   
    printf("\n|  1 Massala Pasta______________________ ₹50");
    printf("\n|  2 Chees Pasta________________________ ₹100");
    printf("\n|  3 Double Chees Pasta_________________ ₹200");
    printf("\n|  4 Vegetable Pasta____________________ ₹75");
    printf("\n|  5 Spicy Pasta________________________ ₹30");
    printf("\n|  6 Paneer Pasta_______________________ ₹85");
    printf ("\n\n Sir would you like to do it ? :- ");
    scanf("%f", &no3);
    if (no3 == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl3);
        acc3 = pl3*50;
        
    }
    else if (no3 == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl3);
        acc3 = pl3*100;
        
    }
       else if (no3 == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl3);
        acc3 = pl3*200;
        
    }
       else if (no3 == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl3);
        acc3 = pl3*75;
        
    }
       else if (no3 == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl3);
        acc3 = pl3*30;
        
    }
       else if (no3 == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl3);
        acc3 = pl3*85;
        
    }
    else {
        printf ("\n\nInvalid number please try again :- ");
    }
   menu();

}
int pizza(){
   
    printf("\n|  1 Capsicum Pizza______________________ ₹295");
    printf("\n|  2 Tomato Pizza________________________ ₹220");
    printf("\n|  3 Onion Pizza_________________________ ₹255");
    printf("\n|  4 Chilli Pizza________________________ ₹245");
    printf("\n|  5 Capsicum Onion Pizza________________ ₹499");
    printf("\n|  6 Paneer Pizza________________________ ₹230");
    printf("\n|  7 Big Mix Pizza_______________________ ₹699");
    printf ("\n\n Sir would you like to do it ? :-");
    scanf("%f", &no4);
    if (no4 == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl4);
        acc4 = pl4*295;
        
    }
    else if (no4 == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl4);
        acc4 = pl4*220;
        
    }
       else if (no4 == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl4);
        acc4 = pl4*255;
        
    }
       else if (no4 == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl4);
        acc4 = pl4*245;
        
    }
       else if (no4 == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl4);
        acc4 = pl4*499;
        
    }
       else if (no4 == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl4);
        acc4 = pl4*230;
        
    }
    else if (no4 == 7  ){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl4);
        acc4 = pl4*699;
        
    }
    else {
        printf ("\n\nInvalid number please try again :- \n\n");
    }
    menu();

}
int rice(){
    
    printf("\n|  1 Fried Rice_________________________ ₹30");
    printf("\n|  2 Jeera Rice_________________________ ₹45");
    printf("\n|  3 Paneer Fried Rice__________________ ₹55");
    printf("\n|  4 Vegetable Fried Rice_______________ ₹85");
    printf("\n|  5 Rice ___________________ ₹");
    printf("\n|  6 Paneer Sandwich____________________ ₹");
    printf ("\n\n Sir would you like to do it ? :-");
    scanf("%f", &no5);
    if (no5 == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl5);
        acc5 = pl5*30;
        
    }
    else if (no5 == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl5);
        acc5 = pl5*45;
        
    }
       else if (no5 == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl5);
        acc5 = pl5*55;
        
    }
       else if (no5 == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl5);
        acc5 = pl5*85;
        
    }
       else if (no5 == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl5);
        acc5 = pl5*499;
        
    }
       else if (no5 == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl5);
        acc5 = pl5*230;
        
    }
    else {
        printf ("\n\nInvalid number please try again :- \n");
    }
    menu();
}

int roll(){
    
    printf("\n|  1 Veg Roll________________________ ₹30");
    printf("\n|  2 Paneer Roll_____________________ ₹45");
    printf("\n|  3 Chees Roll______________________ ₹65");
    printf("\n|  4 Vegetable Roll__________________ ₹75");
    printf("\n|  5 Noodles Roll____________________ ₹55");
    printf("\n|  6 Mix Roll________________________ ₹99");
    printf ("\n\n Sir would you like to do it ? :-");
    scanf("%f", &no6);
    if (no6 == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl6);
        acc6 = pl6*30;
        
    }
    else if (no6 == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl6);
        acc6 = pl6*45;
        
    }
       else if (no6 == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl6);
        acc6 = pl6*65;
        
    }
       else if (no6 == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl6);
        acc6 = pl6*75;
        
    }
       else if (no6 == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl6);
        acc6 = pl6*55;
        
    }
       else if (no6 == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl6);
        acc6 = pl6*99;
     
    }
    else {
        printf ("\n\nInvalid number please try again :- ");
    }
    menu();

}

int juice(){
    
    printf("\n|  1 Cold Cofee_______________________ ₹80");
    printf("\n|  2 Apple Juice______________________ ₹55");
    printf("\n|  3 Lemonade_________________________ ₹45");
    printf("\n|  4 Pineapple Juice__________________ ₹30");
    printf("\n|  5 Grape Juice______________________ ₹35");
    printf("\n|  6 Cranberry Juice__________________ ₹65");
        printf ("\n\n Sir would you like to do it ? :-");
    scanf("%f", &no7);
    if (no7 == 1){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl7);
        acc7 = pl7*30;
        
    }
    else if (no7 == 2){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl7);
        acc7 = pl7*45;
        
    }
       else if (no7 == 3){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl7);
        acc7 = pl7*65;
        
    }
       else if (no7 == 4){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl7);
        acc7 = pl7*75;
        
    }
       else if (no7 == 5){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl7);
        acc7 = pl7*55;
        
    }
       else if (no7 == 6){
        printf("\n\nSir how many orders are there ? :- ");
        scanf ("%f",&pl7);
        acc7 = pl7*99;
        
    }
    else {
        printf ("\n\nInvalid number please try again :- ");
    }
    menu();
}
int bill(){
    float gst,sgst,cgst;
    printf("\nThe number of burger plates are :- %f",pl);
    printf ("\nThe  Amount is :-%f  ",acc);
    printf("\nThe number of noodles plates are :- %f\n",pl1);
    printf ("The  Amount is :-%f  ",acc1);
    printf("\nThe number of sandwich plates are :- %f\n",pl2);
    printf ("The  Amount is :-%f  ",acc2);
    printf("\nThe number of pasta plates are :- %f\n",pl3);
    printf ("The  Amount is :-%f  ",acc3);
    printf("\nThe number of pizza plates are :- %f\n",pl4);
    printf ("The  Amount is :-%f  ",acc4);
    printf("\nThe number of rice plates are :-  %f\n",pl5);
    printf ("The  Amount is :-%f  ",acc5);
    printf("\nThe number of roll plates are :- %f\n",pl6);
    printf ("The  Amount is :-%f  ",acc6);
    printf("\nThe number of juice plates are :- %f\n",pl7);
    printf ("The  Amount is :-%f  ",acc7);
    total = acc+acc1+acc2+acc3+acc4+acc5+acc6;
    printf ("\n\n********************Thank you**************************\n");
    printf("\nThe total amount is :- %f  ",total);
    sgst = (5.0/100)*total;
    cgst = (5.0/100)*total;
    gst = sgst+cgst; 
    printf("\nSGST (5%%) on :- %.2f",sgst);
    printf("\nCGST (5%%) on :- %.2f",cgst);
    printf("\nTotal GST are :- %f\n", gst);
    total = total + gst;
    printf("\nTotal ammount is  :- %f ",total);
    return total;
    menu();
}
