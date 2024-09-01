#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**********1.Write a C program to print all natural numbers from 1 to n using loop.*************/
    /*
        int num ,i=1;
        printf("Input upper limit:");
        scanf("%d",&num);
        printf("Natural numbers from 1 to %d:",num);
        while(i<=num)
        {
            printf(" %d ",i);
            i++;
        }
        */
    /*************2.Write a C program to print all natural numbers in reverse from n to 1 using for loop.******************/
    /*
    int num ;
    printf("Input N:");
    scanf("%d",&num);
    printf("Natural numbers from %d-1 in reverse: ",num);
    while(num>=1)
    {
        printf("%d ",num);
        num--;
    }   */
    /*****************3.Write a C program to print alphabets from a to z using for loop.***************/
    /*
    char alpha;
    printf("Alphabets:");
    for(alpha ='a' ; alpha<='z' ; alpha++)
    {
        printf("%c ",alpha);
    }
     */
     /*****************4.Write a C program to print all even numbers from 1 to n using for loop. ******************/
     /*
     int num;
     printf("Input upper range:");
     scanf("%d",&num);
     printf("Even numbers between 1 to %d:",num);
     for(int i=0;i<=num;i+=2)
     {
         printf("%d ",i);
     }      */
     // another method
     /*
     int num;
     printf("Input upper range:");
     scanf("%d",&num);
     printf("Even numbers between 1 to %d:",num);
     for(int i=0;i<=num;i++)
     {
         if(i%2==0)
         printf("%d ",i);
     }
     */

     /*****************5.Write a C program to print all odd numbers from 1 to n using for loop************/
    /*
     int num;
     printf("Input upper range:");
     scanf("%d",&num);
     printf("Even numbers between 1 to %d:",num);
     for(int i=0;i<=num;i++)
     {
         if(i%2!=0)
         printf("%d ",i);
     }
    */
    /************6.Write a C program to find the sum of all natural numbers between 1 to n using for loop.*************/
    /*
    int num ,sum=0;
     printf("Input upper limit:");
     scanf("%d",&num);
     printf("Sum of natural numbers 1- %d:",num);
     for(int i=0;i<=num;i++)
     {
         sum+=i;
     }
     printf("%d",sum);
     */

     /***************7.Write a C program to input number from user and find sum of all even numbers between 1 to n***********/
    /*
    int num ,sum=0;
     printf("Input upper limit of number:");
     scanf("%d",&num);
     printf("Sum of even numbers between 1 to %d:",num);
     for(int i=0;i<=num;i++)
     {
         if(i%2==0)
            sum+=i;
     }
     printf("%d",sum);
      */
      /***********8.Write a C program to find sum of all odd numbers from 1 to n using for loop*************/
       /*
     int num ,sum=0;
     printf("Input upper limit number:");
     scanf("%d",&num);
     printf("Sum of odd numbers between 1 to %d:",num);
     for(int i=0;i<=num;i++)
     {
         if(i%2!=0)
            sum+=i;
     }
     printf("%d",sum);
     */

     /**************9.Write a C program to input a number from user and print multiplication table of the given number using for loop. *****************/
        /*
     int num ,sum=0;
     printf("Input num:");
     scanf("%d",&num);
     for(int i=0;i<=10;i++)
     {
         sum = num*i;
     printf("%d * %d = %d \n",num,i,sum);
     }
   */

   /*************10.Write a C program to input a number from user and count number of digits in the given integer using loop.****************/
   /*
   int num , count=0;
   printf("Input num:");
   scanf("%d",&num);
   printf("Number of digits:");
   for(;num!=0;)
   {
       num/=10;
       count++;
   }
     printf("%d",count);
  */
  /**************11.Write a C program to input a number from user and find first and last digit of number using loop.*****************/
   /*
  int num , first ,last;
  printf("Input number:");
  scanf("%d",&num);         //1234
  last =num%10;             //4
  first=num;
  while(first>=10)
  {
       first /=10;    //123  , 12  , 1
  }
  printf("First digit: %d\n",first);
  printf("Last digit: %d\n",last);
   */


   /************12.Write a C program to input a number and find sum of first and last digit of the number using for loop.***************/
/*
     int num , first ,last ,sum;
  printf("Input number:");
  scanf("%d",&num);         //1234
  last =num%10;             //4
  first=num;
  while(first>=10)
  {
       first /=10;    //123  , 12  , 1
  }
  sum=first+last;
  printf("Sum of first and last digit: %d\n",sum);
*/
   /***************13.Write a C program to input a number from user and swap first and last digit of the given number. *******************/
      /*
  int num , first ,last ,temp,swap,divis=1;
  printf("Input number:");
  scanf("%d",&num);         //1234
  last =num%10;             //4
  temp=num;
  while(temp>=10)
  {
      temp/=10;            //1
      divis*=10;           //10 , 100, 1000
  }
  first=temp;
  //swap first digit with last digit
  swap = last*divis +(num%divis)-last +first;
  printf("Number after swapping first and last digit: %d",swap);

  */
  /****************14.Write a C program to input a number and calculate sum of digits using for loop.********************/
  /*
  int num,sum=0;
  printf("Input number:");
  scanf("%d",&num);         //1234
  for(;num!=0;)
  {
       sum+=num%10;    //4+3 +2 +1
       num/=10;         //123 ,12 ,1
  }
  printf("Sum of first and last digit: %d\n",sum);
   */
   /***************15.Write a C program to input a number from user and calculate product of its digits.***************/
  /*
  int num,mul=1;
  printf("Input number:");
  scanf("%d",&num);         //1234
  for(;num!=0;)
  {
       mul*=num%10;    //4+3 +2 +1
       num/=10;         //123 ,12 ,1
  }
  printf("Product of digits: %d\n",mul);
  */
  /**************16.Write a C program to input a number from user and find reverse of the given number using for loop****************/
  /*
  int num,rev=0;
  printf("Input number:");
  scanf("%d",&num);      //1234
  for(;num!=0;)
  {
      rev= (rev*10) +(num%10);   //0+4  +=>4*10+3  +=>43*10+2   +=>432*10+1
      num/=10;                   //123   12          1
  }
  printf("Reverse = %d",rev);
  */

  /***************17.Write a C program to input number from user and check number is palindrome or not using loop.*************/
  /*
  int num,numCopy,rev=0;
  printf("Input number:");
  scanf("%d",&num);      //1234
  numCopy =num;
  for(;num!=0;)
  {
      rev= (rev*10) +(num%10);   //0+4  +=>4*10+3  +=>43*10+2   +=>432*10+1
      num/=10;                   //123   12          1
  }
 if(rev == numCopy)
    printf("%d is palindrome",numCopy);
 else
    printf("%d is not palindrome",numCopy);
    */
    /*************18.Write a C program to count frequency of digits in a given number.********************/
    /*
    int num , numC ,dig ,freq[10] ;
    printf("Input any number:");
    scanf("%d",&num);
    numC =num;
     //initial freq of array
    for(int i=0;i<10;i++)
    {
        freq[i]=0;
    }
    while(numC!=0)
    {
        dig = numC%10;         //last digit
        numC/=10;             //remove last digit
        freq[dig]++;
    }
    for(int i=0;i<10;i++)
    {
        printf("Frequency of %d = %d\n",i,freq[i]);
    }
    */


    /***************19.Write a C program to input a number from user and print it into words.**********************/
   /*
    int num,numC=0;
    printf("Input number:");
    scanf("%d",&num);
    while(num!=0)
    {
       numC =(numC*10) +(num%10);
       num/=10;
    }
    while(numC!=0)
    {
        switch(numC%10)
        {
           case 0:
                printf("Zero ");
                break;
           case 1:
                printf("One ");
                break;
           case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        numC/=10;
    }
    */

    /**************20.Write a C program to print ASCII values of all characters using for loop.********************/
   /*
    int num;
    for(num=0;num<=255;num++)
    {
        printf("ASCII value of character  %c =%d \n",num,num);
    }

    */

    /************21.Write a C program to find power of a number using for loop. How to find power of a number *************/
    /*
    int base,exp;
    long long power =1;
    printf("Input base: ");
    scanf("%d",&base);
    printf("Input exponent:");
    scanf("%d",&exp);
    for(int i=0;i<exp;i++)
    {
        power*=base;
    }
    printf("%d ^ %d = %lld",base,exp,power);
    */

    /************22.Write a C program to input a number from user and find all factors of the given number********************/

    /*Factor of any number is a whole number which exactly divides the number into a whole number without leaving any remainder.*/
     /*
    int num;
    printf("Input number:");
    scanf("%d",&num);
    printf("Factors of %d: ",num);
    for (int i=1;i<=num;i++)
    {
        if(num%i == 0)
            printf("%d ",i);
    }
    */


    /************23.Write a C program to input a number and calculate its factorial using for loop.**************************/
    /*
    int num , fact=1;
    printf("Input number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
            fact*=i;
    }
    printf("Factorial:%d",fact);

    */
    /**********24.Write a C program input two numbers from user and find the HCF using for loop.***********************/
   /*
    int num1,num2 ,HCF=0;
    printf("Input first number: ");
    scanf("%d",&num1);
    printf("Input secound number: ");
    scanf("%d",&num2);
    int min;
    if(num1<num2)
        min=num1;
    else if(num2<num1)
        min=num2;
    for(int i=1 ; i<=min ; i++)
    {
        if((num1%i ==0)&&(num2%i==0))
            HCF =i;
    }
    printf("HCF of %d and %d: %d",num1,num2,HCF);
    */

    /***************25.Write a C program to input two numbers from user and find LCM (Lowest Common Multiple) *******************/
  /*
   int num1,num2 ,LCM=0;
    printf("Input first number: ");
    scanf("%d",&num1);
    printf("Input secound number: ");
    scanf("%d",&num2);
    int max;
    if(num1>num2)
        max=num1;
    else if(num2>num1)
        max=num2;
    for( int i=max;i>0;i+=max)
    {
        if((i%num1==0) && (i%num2==0))
        {
            LCM=i;
            break;
        }
    }
    printf("%d",LCM);

    */

    /**************26.Write a program in C to input a number and check whether the number is prime number or not **************************/
   /*
    int num ,flag =1;
    printf("Input any number:");
    scanf("%d",&num);
    for (int i=2 ; i<=num/2 ; i++)
    {
        if (num%i==0)
            {
               flag=0;
               break;
            }
    }
    if(flag==1 && num>1)
        printf("%d  is prime number",num);
    else
        printf("%d is not prime number",num);
    */

    /*****************27.Write a C program to print all Prime numbers between 1 to n using loop. ***************/
    /*
    int numU , i , j ,flag;
    printf("Input upper limit: ");
    scanf("%d",&numU);
    printf("Prime numbers between 1-%d:",numU);
    for(i=2 ; i<=numU ; i++)       // find all number from 1 to numU
    {
        flag=1;
        for(j=2 ; j<=i/2 ; j++)     // find all prime nmber
        {
            if(i%j ==0)
            {
              flag =0;
              break;
            }
        }
        if(flag ==1)
            printf("%d ",i);
    }

      */
    /****************28.Write a C program to find sum of all prime numbers between 1 to n using for loop*********************/
    /*
    int numU , i , j ,flag , sum =0;
    printf("Input upper limit: ");
    scanf("%d",&numU);
    printf("Sum of prime numbers between 1-%d:",numU);
    for(i=2 ; i<=numU ; i++)       // find all number from 1 to numU
    {
        flag=1;
        for(j=2 ; j<=i/2 ; j++)     // find all prime nmber
        {
            if(i%j ==0)
            {
              flag =0;
              break;
            }
        }
        if(flag ==1)
            sum+=i;
    }
    printf("%d ",sum);

    */

     /*****************29.Write a C program to input a number from user and find Prime factors of the given number******************/
    /*
    int num , i, j, flag;
    printf("Input any number: ");
    scanf("%d",&num);
    printf("Prime factors of %d :",num);
    for (i=2;i<=num;i++)
    {
        if(num%i == 0)       // factor
        {
            flag =1;
            for(j=2 ; j<=i/2 ; j++)   // prime
            {
                if(i%j ==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%d ",i);
            }
        }
    }
    */

    /*************30.Write a C program to input a number from user and check whether given number is Armstrong number or not.*******************/

    /*An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits. For example – 371 = 33 + 73 + 13 = 371    */
    int num , mul=1 ,count =0 , res=0,digit;
    printf("Input number: ");
    scanf("%d",&num);    // 371
    int numC = num;
   // step 1: know how many digit in number
    while(numC!=0)
    {
        numC/=10;       // 371/10=>37  , 37/10=>3  , 3/10=>0
        count++;       // 1               2            3
    }
    // step 2: multiply each digit number of times
     int countC = count;
     numC =num;
     while(numC!=0)
     {
         digit = numC%10;       //371%10=>1   ,37%10=>7         ,3%10=>3
         while(countC!=0)
         {
             mul*=digit;    //1*1*1=>1     ,7*7*7=>343     ,3*3*3=>27
             countC--;      //3,2,1          3,2,1          3,2,1
          }
         res+=mul;         //1        ,1+343=>344         ,344+27=>371
         countC=count;
         numC/=10;           //37      ,3                   ,0
         mul=1;
     }
     //step3: will check if result equal number that user entered
     if(res ==num)
        printf("%d is an armstrong number",num);
    else
        printf("%d is not an armstrong number",num);

    return 0;
}
