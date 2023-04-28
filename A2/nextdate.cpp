#include <stdio.h>
int day, month, year;//input variables
int f_day, f_month, f_year;// final output varibles
bool leapyear;// check leap year variable


// to check the defined constraints on day,month,year
bool check(int x,int y,int z){
    bool m,n,o,p;
    
    if(((rangecheck(x,1,31)) && (rangecheck(y,1,12))&&(rangecheck(z,1900,2025)))==true){
      m=true;
    }
    m=false;
    return m;
}
bool rangecheck(int x,int y,int z){
    bool m;
    if(((x-y)*(x-z))<=0){
        m=true;
    }
    return m;
}

//main function
int main (){
    printf("enter day, month, year: ");
    scanf("%d/%d/%d",&day, &month, &year);
    
    
    if(check(day, month, year)== true){
        // leap year detection
      if (leapyear % 4 == 0) {
        leapyear = true;
     }
      // checking for psuedo century leap year
      if (leapyear % 100 == 0) {
        leapyear = false;
      }
      // century leap year condition
      if (leapyear % 400 == 0) {
        leapyear = true;
      }
    
      // assigning the values and updating further
      f_month = month;
      f_day=day;
      f_year= year;
    
      // MONTH DEFINING
      // checking for MONTHS specific
      if ( ( month == 1 || month == 3 || month == 5 
           || month == 7 || month == 8 || month == 10|| month==12 )) {  
          if(day==31){
            // 31 december condition
            if(f_month==12){
                 f_day=1; f_month= 1;f_year= year+1;
            }
            f_month=f_month+1;f_day =1;
        }
         else{
            f_day= f_day+1;
        }
      }

      if ( (month == 4 || month == 6 || month == 9 || month == 11 
           )) {
            
          if(day==30){
            f_day = 1;
            f_month = month+1;
          }
          else{
            f_day++;
          }
        }


      // february checking
      if ((leapyear) && (month == 2 )) {
        
        if(day==29){
            f_day= 1;
            f_month=f_month+1;
        }
        else{
            f_day++;
        }

      } 
       else {
       if((leapyear == false) && (month == 2)){
        // not a leap year but month of feb
        if(day==28){
            f_day= 1;
            f_month = f_month +1;
        }
        else{
            f_day +=1;
        }
      }
      }
      printf ("The date of the next day is: %d/%d/%d", f_day, f_month, f_year);
    }
    else{
      printf("invalid input, please check");
    }
}