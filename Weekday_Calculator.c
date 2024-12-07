#include<stdio.h>

 int main(){
    typedef struct date{
        int day;
        int month;
        int year;
        int ew;
    }date;
    date a;
    //date input by the user
    printf("enter day: ");
    scanf("%d",&a.day);
    printf("enter month: ");
    scanf("%d",&a.month);
    printf("enter year: ");
    scanf("%d",&a.year);
    
    
    
    
    
    if(a.year%4==0){
        if (a.day>31||a.month>12||a.year<0)
        {
          printf("Your input date is invalid");
          return 0;
        }
        
    int p = (a.year/100);
    if (a.year==p*100)
    {
       if (a.year%400!=0)
       {
        if(a.month==2&&a.day==29){
            printf("Your input date is invalid");
        return 0;
        }
        
       }
       
    }
    }
    
     if(a.year%4!=0){
        if(a.month==2&&a.day>28){
            printf("Your input date is invalid");
            return 0;
        }
        else if(a.day>31||a.month>12||a.year<0){
        printf("The date which you input is incorrect");
        return 0;

    }
        
    }
    
    
    //let a.year=2024
    a.ew = a.year - 1;//2023
    int x= a.ew%100;//x=23
    int centuary=a.ew-x;//centuary=2000
    int ly=x/4;//ly=5
    int ny=x-ly;//ny=17
    int od1=ly*2;//od1=10
    int od2=ny;//od2=17
    int od3=(od1+od2)%7;//total odd day of 23 years,6;
    // printf("%d\n",od3);
    //let's find odd day of the remaining centuary
    int centuary1;
    if(centuary>=400){centuary1=centuary/100;}
    int seq=centuary1%4;
    int od4;
    if(seq==0){od4=0;}
    if(seq==1){od4=5;}
    if(seq==2){od4=3;}
    if(seq==3){od4=1;}
    
    //od4=0;
    int od5=od3+od4;
    int od6=od5%7;// till now thhis is all odd days
    //check if the year is leap year or not
    int l;
    if (a.year%100==0)
    {
        if(a.year%400==0){
            l=1;
            
        }
        if(a.year%400!=0){
            l=0;
        }
    }
    
    else if (a.year%400==0)
    {
       l=1;
    }
    
    else if(a.year%4==0){
        l=1;
    }
   
    if(a.year%4!=0){l=0;}
    //now let's find out the present year's past month's odd days
    int od7;
    if (a.month==1)
    {
       od7=a.day%7;
    }//January
    if (a.month==2)
    {
       od7=(a.day%7)+3;
    }//February
    if (a.month==3)
    {
        od7=(a.day%7)+3+l;
    }//March
    if (a.month==4)
    {
        od7=(a.day%7)+3+l+3;
    }//April
    if (a.month==5)
    {
        od7=(a.day%7)+3+l+3+2;
    }//May
    if (a.month==6)
    {
        od7=(a.day%7)+3+l+3+2+3;
    }//june
    if (a.month==7)
    {
       od7=(a.day%7)+3+l+3+2+3+2;
    }//july
    if (a.month==8)
    {
       od7=(a.day%7)+3+l+3+2+3+2+3;
    }//august
    if (a.month==9)
    {
       od7=(a.day%7)+3+l+3+2+3+2+3+3;
    }//september
    if (a.month==10)
    {
       od7=(a.day%7)+3+l+3+2+3+2+3+3+2;
    }//october
    if (a.month==11)
    {
        od7=(a.day%7)+3+l+3+2+3+2+3+3+2+3;
    }//novenber;
    if (a.month==12)
    {
        od7=(a.day%7)+3+l+3+2+3+2+3+3+2+3+2;
    }//december

    //now find out the actual total number of odd days
    int od8=(od7+od6)%7;
    if (od8==0)
    {
       printf("your input date is Sunday");
    }
    if (od8==1)
    {
       printf("your input date is Monday"); 
    }
    if (od8==2)
    {
        printf("your input date is Tuesday");
    }
    if (od8==3)
    {
        printf("your input date is wednesday");
    }
    if (od8==4)
    {
       printf("your input date is Thursday");
    }
    if (od8==5)
    {
        printf("your input date is Friday");
    }
    if (od8==6)
    {
        printf("your input date is Saturday");
    }  

    //
      
    

    return 0;
 }