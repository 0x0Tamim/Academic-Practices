    #include <stdio.h>

int main()
{ float p,t,r,si;
    printf("Enter principle:");
scanf("%f",&p);
 printf("Enter time:");
scanf("%f",&t);
 printf("Enter rate:");
scanf("%f",&r);
si=(p*t*r)/100;
printf("Simple interest = %f",si);

    return 0;
}
