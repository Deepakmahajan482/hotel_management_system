#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int nok=20,nos=20,not=20,tot_reserve=0;
  struct reservation{
    char name[30],roomtype;
    int perday;
    int persons;
    int reservation_id;
    int no_of_room;
    int bill;


    
}reserve[90];
typedef struct restaurent{
     
  
    char food[100];
    int price;
    int quantity;
    }restaurent;
    
  int items;
  char name[100];
  int sum;
char any;
int food;
int choose;
char india;

void ender(){
        printf("______________________________________________________________________________________________________________________\n");
        printf("                                     Visit : www.DeepakHotelInn.com\n");
    }

void header(){
    printf("          +============================================================+\n");
    printf("          ||                   HOTEL DEEPAK INN                       ||\n");
    printf("          +============================================================+\n");

}




int about(){
    // system("CLS");
    printf("\n");
    header();
    printf("                    WELCOMES YOU.......\n");
    printf("HOTEL Deepak Inn is one of the newest hotel in Amritsar city\nThe has well furnished room along with\n rooms providing the veiw of the city");
    printf("It is near the GOLDEN TEMPLE\n In this hotel we provide all types of facilities\n");
    printf("                    AMENITIES.......\n");
    printf("                   1. 100% battery backup\n");
    printf("                   2. Automatic lift\n");
    printf("                   3. Free internet service\n");
    printf("                   4. 24 hours rooms service.\n");
    printf("                   5. Laundary service");
    printf("Press any character to continue...");
    scanf("%c",&any);

    printf("\n\n\n");
    printf("                 :::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("                 ::                                         ::\n");
    printf("                 ::            WELCOMES YOU TO              ::\n");
    printf("                 ::                                         ::\n");
    printf("                 ::               DEEPAK INN                ::\n");
    printf("                 ::                                         ::\n");
    printf("                 :::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("                          Choose the category:\n                                       1. Check Availability\n                                       2. Features of rooms\n                                       3. Room allocation\n                                       4. show costumer details\n                                       5. Restaurant\n                                       6. Exit\n");
    scanf("%d",&choose);
    printf("\n\n\n\n");
    return choose;
    }


    void features(){
        int feature;
        header();
        printf("Enter the type of Room for know the Features\n");
        printf("       Enter 1 for King Room Features\n");
        printf("       Enter 2 for Small Room Features\n");
        printf("       Enter 3 for Traveler Room Features\n");
        scanf("%d",&feature);
        switch(feature){
            case 1: printf("       +----------------------------------------------------------+\n");
                    printf("       :               1.King Size Bed                            :\n");
                    printf("       :               2.Fully Air Conditioner                    :\n");
                    printf("       :               3.24 hours Service                         :\n");
                    printf("       :               4.Fully Furnished                          :\n");
                    printf("       :               5.Internet service                         :\n");
                     printf("      +----------------------------------------------------------+\n");
                     break;
            case 2: printf("       +----------------------------------------------------------+\n");
                    printf("       :              1.Small Size Bed                            :\n");
                    printf("       :              2.Fully Air Conditioner                    :\n");
                    printf("       :              3.12 hours Service                         :\n");
                    printf("       :              4.Only Almirah                             :\n");
                    printf("       :              5.Internet service                         :\n");
                    printf("       +---------------------------------------------------------+\n"); 
                     break; 
            case 3:printf("        +---------------------------------------------------------+\n");
                    printf("       :              1.Single Size Bed                          :\n");
                    printf("       :              2.Fully Air Conditioner                    :\n");
                    printf("       :              3.Internet service                         :\n");
                    printf("       :              4. Almirah Not Given                       :\n");   
                     printf("      +---------------------------------------------------------+\n"); 
                     break;  

        }
        ender();
    }

void avaliability(){
    // system("CLS");
  
    header();
    printf("+----------------------------------------------------------+\n");
    printf(":             There are %d King room available             :\n",nok);
    printf("+----------------------------------------------------------+\n");
    printf(":             There are %d Small room available            :\n",nos);
    printf("+----------------------------------------------------------+\n");
    printf(":             There are %d Traveler room available         :\n",not);
    printf("+----------------------------------------------------------+\n");
    printf(":             Total Reserve Room is %d                     :\n",tot_reserve);
    printf("+----------------------------------------------------------+\n");
    ender();
}

  int no_of_room; 
  int damt; 
  int price;


    void reservation(){
        // system("CLS");
        header();
        
        time_t t;
        time(&t);  
        
 
        
        printf("Enter Your Name :");
        scanf("%s",reserve[tot_reserve].name);
        printf("Date :%s",ctime(&t));
        printf("Enter No Days:");
        scanf("%d",&reserve[tot_reserve].perday);
        printf("Enter Room Type(S/K/T):  ");fflush(stdin);
        scanf("%c",&reserve[tot_reserve].roomtype);
        printf("Enter No of Persons :");
        scanf("%d",&reserve[tot_reserve].persons);
        char type[40];
        if(reserve[tot_reserve].persons==1){
             reserve[tot_reserve].no_of_room=1;
        }
        else{
         reserve[tot_reserve].no_of_room = reserve[tot_reserve].persons/2;  
        }
        
        
        switch(reserve[tot_reserve].roomtype){
        case 'S' :  strcpy(type,"Small");
        damt=5000;
        nos=nos-reserve[tot_reserve].no_of_room;
        
        break;
        case 'K' : strcpy(type,"King");
        damt=10000;
         nok=nok-reserve[tot_reserve].no_of_room;
        
        break;
        case 'T' : strcpy(type,"Travelers");
        damt=2500;
         not=not-reserve[tot_reserve].no_of_room;
        
        break;
    }
    price=reserve[tot_reserve].no_of_room*damt;
     reserve[tot_reserve].bill = price*reserve[tot_reserve].perday;
    printf("\n\n\n");
    printf("Bill :\n");
    printf("+---------------------------------------------------------------+\n");
    printf(":  Room Type  :  Total Days  :  Per days : No. of Rooms : Price :\n");
    printf("+---------------------------------------------------------------+\n");
    
    printf(":  %s      :     %d        :     %d   :       %d     :%d :\n",type,reserve[tot_reserve].perday,damt,reserve[tot_reserve].no_of_room,price);
    printf("+---------------------------------------------------------------+\n");
    
    printf(": Total Bill                                             %d  :\n",reserve[tot_reserve].bill);
    printf("+---------------------------------------------------------------+\n");
    srand(time(0));
    reserve[tot_reserve].reservation_id=rand()%100+1;
    printf("Reservation ID = %d",reserve[tot_reserve].reservation_id);
    tot_reserve=tot_reserve+reserve[tot_reserve].no_of_room;

    printf("\n\n\n");
    printf("\n\n\n");
    printf("\n\n\n");
    printf("\n\n\n");
    printf("\n\n\n"); 
    ender();
    }
    void report(){

        header();

       
    if(tot_reserve==0){
        printf("\nNO RESERVATION TODAY\n"); 
    }
    else{
        for(int i =0;i<tot_reserve;i++){
            printf("\n          ID : %04d              Name:%s\n",reserve[i].reservation_id,reserve[i].name);
            printf("          Days:%d              Room : %c\n",reserve[i].perday,reserve[i].roomtype);
            printf("        Person :%d        No. of Rooms :%d       Amt:%d\n",reserve[i].persons,reserve[i].no_of_room,reserve[i].bill);
            printf("+============================================================+");

        }
    }
}
    void menu(){
        restaurent arr[items];
       
            printf("+---------------------------------------------------+\n");
            printf(":         Masala Dosa --> 120                       :\n");
            printf(":         Dal Makhani --> 220                       :\n");
            printf(":         Vada Pav --> 80                           :\n");
            printf(":         Roti --> 10                               :\n");
            printf(":         Barfi per Pcs -->40                       :\n");
            printf(":         Aloo Tikki per pcs --> 50                 :\n");
            printf("+---------------------------------------------------+\n");
            scanf("%c",&india);fflush(stdin);
       
            printf("PLEASE ENTER THE NAME OF THE CUSTOMER: ");
    scanf("%s",&name);fflush(stdin);
   printf("-------------------------------------------------------------\n");
            printf("PLEASE ENTER THE NUMBER OF ITEMS\n");
    scanf("%d",&items);
 for(int i =0;i<items;i++){
        printf("PLEASE ENTER THE ITEM %d:             ",i+1);fflush(stdin);
        scanf("%s",arr[i].food);
        printf("PLEASE ENTER THE UNIT PRICE:           ");fflush(stdin);
        scanf("%d",&arr[i].price);
        printf("PLEASE ENTER THE QUANTITY:             ");fflush(stdin);
        scanf("%d",&arr[i].quantity);
        printf("-------------------------------------------------------------\n");
}
        printf("              ADV.RESTAURANT\n");
        printf("              --------------\n");
        time_t t;
    time(&t);
     
        printf("DATE:%s\n",ctime(&t));
        printf("INVOICE TO:%s\n",name);
        printf("-------------------------------------------------------------\n");
        printf("ITEMS                QTY                       TOTAL\n");
        printf("-------------------------------------------------------------\n");     
        for(int i =0;i<items;i++){
        printf("%s                     %d                         %d\n",arr[i].food,arr[i].quantity,arr[i].quantity*arr[i].price);
         sum=0;
        sum=sum+(arr[i].quantity*arr[i].price);
        }
        printf("-------------------------------------------------------------\n");
        printf("SUBTOTAL                                             %d\n",sum);
        float DISCOUNT=(sum*(0.1));
        printf("DISCOOUNT @10PERCENT                             %f\n",DISCOUNT);
        printf("-------------------------------------------------------------\n");
        float net=sum-DISCOUNT;
        printf("NET TOTAL                                                %f\n",net);
        float GST=(net*0.09);
        printf("CGST @9PERCENT                                           %f\n",GST);
        printf("SGST @9PERCENT                                           %f\n",GST);
        printf("-------------------------------------------------------------------------------\n");
        float total=net+GST+GST;
        printf("GRAND TOTAL                                              %f\n",total);
        printf("-------------------------------------------------------------------------------\n");

        




    

        }
        
    





    



int main(){
    while(1){
        
        about();
        switch(choose){

            case 1: system("CLS");
            avaliability();
            break;
            case 2:system("CLS");
            features();
            
            break;
            case 3:system("CLS");
             reservation();
             
            break;
            case 4:system("CLS");
             report();
             break;
             case 5:system("CLS");
             menu();
             break;

            case 6: exit(0);
            printf("The program is over\n");
            break;
        }

    
    }
}
