#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sn, en;
    /*sn -> starting Number
      en -> ending Number*/
    printf("Enter Starting Number : ");
    scanf("%d",&sn);

    printf("\nEnter Ending Number : ");
    scanf("%d",&en);

    printf("\nAnswer is : %d \n",(en+sn)*(en/2));

    return 0;
}
