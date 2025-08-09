#include <stdio.h>

int main()
{

  int productCount,quantity[100],i;
  double price[100],total=0;
  printf("Enter the number of products:");
  scanf("%d",&productCount);
  for(i=0;i<productCount;i++){
    printf("Enter the price and quantity of product %d:",i+1);
    scanf("%lf %d",&price[i],&quantity[i]);
  }

  printf("\nMoney Receipt\n--------------------------\n");
  for(i=0;i<productCount;i++){
  printf("Product %d:%lf tk\n",i+1,quantity[i]*price[i]);
  total+=price[i]*quantity[i];
  } printf("--------------------------\nTolal Amount:%lf tk\n",total);
    return 0;
}
