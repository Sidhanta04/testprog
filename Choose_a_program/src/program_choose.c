#include <program_choose.h>
#include<math.h>
int even(int flag_number)
{
    if(flag_number%2==0)
    return 1;
    else 
    return 0;
}

int odd(int flag_number)
{
    if(flag_number%2!=0)
    return 1;
    else 
    return 0;
}

int prime(int flag_number)
{
    int count=0,i;
    for(i=2;i<=flag_number/2;i++)
    {
        if(flag_number%i==0)
        count=count+1;
    }
    if(count==0)
    return 1;
    else 
    return 0;
}

int perfect(int flag_number)
{
    int sum=0,i;
    for(i=1;i<=flag_number;i++)
    {
        if(flag_number%i==0)
        sum=sum+i;
    }
    if(sum==flag_number)
    return 1;
    else 
    return 0;
}

int pallindrome(int flag_number)
{
    int dup=flag_number,count=0,reverse=0;
    while(dup>0)
    {
        count++;
        dup=dup/10;
    }
    dup=flag_number;
    while(count>=1)
    {
        reverse=reverse+(dup%10 * (10^count-1));
        dup=dup/10;
        count--;
    }
    if(reverse==flag_number)
    return 1;
    else
    return 0;
}

int factorial(int flag_number)
{
    int i,fact=1;
    for(i=2;i<=flag_number;i++)
    fact=fact*i;
    return fact;
}

int armstrong(int flag_number)
{
    int arm=0,rem,dup=flag_number;
    while(dup>0)
    {
        rem=dup%10;
        arm=arm+(rem*rem*rem);
        dup=dup/10;
    }
    if(arm==flag_number)
    return 1;
    else 
    return 0;
}

int strong(int flag_number)
{
    int dup=flag_number,sum=0;
    while(dup>0)
    {
        sum=sum+factorial(dup%10);
        dup=dup/10;
    }
    if(sum==flag_number)
    return 1;
    else
    return 0;
}

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    printf("Enter a choice\n");
    printf("Enter 1 to check even or not\n");
    printf("Enter 2 to check odd or not\n");
    printf("Enter 3 to check prime or not\n");
    printf("Enter 4 to check perfect or not\n");
    printf("Enter 5 to check pallindrome or not\n");
    printf("Enter 6 to check factorial or not\n");
    printf("Enter 7 to check armstrong or not\n");
    printf("Enter 8 to check strong or not\n");
    
    int choice,carryon=1,result;
    while(carryon==1)
    {
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: result=even(number);
                if(result==1)
                printf("%d is even\n",number);
                else
                printf("%d is not even\n",number);
                break;
                
        case 2: result=odd(number);
                if(result==1)
                printf("%d is odd\n",number);
                else
                printf("%d is not odd\n",number);
                break;
                
        case 3: result=prime(number);
                if(result==1)
                printf("%d is prime\n",number);
                else
                printf("%d is not prime\n",number);
                break;
                
        case 4: result=perfect(number);
                if(result==1)
                printf("%d is perfect\n",number);
                else
                printf("%d is not perfect\n",number);
                break;
        
        case 5: result=pallindrome(number);
                if(result==1)
                printf("%d is pallindrome\n",number);
                else
                printf("%d is not pallindrome\n",number);
                break;
                
        case 6: result=factorial(number);
                printf("factorial of %d is %d\n",number,result);
                break;
                
        case 7: result=armstrong(number);
                if(result==1)
                printf("%d is armstrong\n",number);
                else
                printf("%d is not armstrong\n",number);
                break;
                
        case 8: result=strong(number);
                if(result==1)
                printf("%d is strong\n",number);
                else
                printf("%d is not strong\n",number);
                break;
                
        default: printf("Enter a valid option between 1 to 8\n");
    }
    printf("Do you want to continue??\n Press 1 to continue\n Press 0 to discontinue\n");
    scanf("%d",&carryon);
    }
    if(carryon==0)
    {
    printf("Thank You!!\n");
    }
    return 0;
}
