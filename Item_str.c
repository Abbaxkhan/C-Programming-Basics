// program to illustrate passing structure to function in c


#include <stdio.h>

struct stores 
{
    char name[20];
    int quantity;
    float price;
};
int main()
{
    struct stores item;
    printf("Enter item name, quantity and price: ");
    scanf("%s %d %f", item.name, &item.quantity, &item.price);
    item=update(item,2,50,5);
    printf("Updated item details: %s, %d, %.2f\n", item.name, item.quantity, item.price);
    return 0;
}

struct stores update(struct stores p, float inc, int q, )
{
    p.price+= inc;
    p.quantity+= q;
    return p;
}