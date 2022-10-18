#include <stdio.h>

int main()
{
    int i=0,j=0,A,B,U,num,temp,a[50],b[50],u[50],c[100],d[100];
    do
    {
        printf("Enter the No. of Elements for Your Universal Set: ");
        scanf("%d",&U);
        printf("Enter the Elements of Universal Set: ");
        for(int i=0;i<U;i++)
        {
            scanf("%d",&u[i]);
        }
        printf("Enter the No. of Elements for Set A: ");
        scanf("%d",&A);
        printf("Enter the Elements of Set A: ");
        for(int i=0;i<A;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the No. of Elements for Set B: ");
        scanf("%d",&B);
        printf("Enter the Elements of Set B: ");
        for(int i=0;i<B;i++)
        {
            scanf("%d",&b[i]);
        }
        printf("\n------Menu------\n1. A Union B\n2. A Intersection B\n3. A Compliment\n4. End Program\n\n");
        printf("Enter Your Choice: ");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                for(int i=0;i<A;i++)
                {
                    c[i]=a[i];
                }
                for(int i=0;i<B;i++)
                {
                    c[i+A]=b[i];
                }
                for(int i=0;i<(A+B);i++)
                {
                    for(int j=0;j<(A+B)-i-1;j++)
                    {
                        if(c[j]>c[j+1])
                        {
                            temp=c[j];
                            c[j]=c[j+1];
                            c[j+1]=temp;
                        }
                    }
                }
                j=0;
                for(int i=0;i<(A+B);i++)
                {
                    if(c[i]!=c[i+1])
                    {
                       d[j]=c[i];
                       j++;
                    }
                }
                printf("A Union B: ");
                for(int i=0;i<j;i++)
                {
                    printf("%d ",d[i]);
                }
                printf("\n\n");
                break;
            case 2:
                for(int i=0;i<A;i++)
                {
                    c[i]=a[i];
                }
                for(int i=0;i<B;i++)
                {
                    c[i+A]=b[i];
                }
                for(int i=0;i<(A+B);i++)
                {
                    for(int j=0;j<(A+B)-i-1;j++)
                    {
                        if(c[j]>c[j+1])
                        {
                            temp=c[j];
                            c[j]=c[j+1];
                            c[j+1]=temp;
                        }
                    }
                }
                j=0;
                for(int i=0;i<(A+B);i++)
                {
                    if(c[i]==c[i+1])
                    {
                       d[j]=c[i];
                       j++;
                    }
                }
                printf("A Intersection B: ");
                for(int i=0;i<j;i++)
                {
                    printf("%d ",d[i]);
                }
                printf("\n\n");
                break;
            case 3:
                 for(int i=0;i<U;i++)
                {
                    c[i]=u[i];
                }
                for(int i=0;i<A;i++)
                {
                    c[i+U]=a[i];
                }
                for(int i=0;i<(U+A);i++)
                {
                    for(int j=0;j<(U+A)-i-1;j++)
                    {
                        if(c[j]>c[j+1])
                        {
                            temp=c[j];
                            c[j]=c[j+1];
                            c[j+1]=temp;
                        }
                    }
                }
                j=0;
                for(int i=0;i<(U+A);i++)
                {
                    if(c[i]!=c[i+1])
                    {
                        d[j]=c[i];
                        j++;
                    }
                    else
                        i++;
                }
                printf("A Compliment: ");
                for(int i=0;i<j;i++)
                {
                    printf("%d ",d[i]);
                }
                printf("\n\n");
                break;
            case 4:
                printf("\nThank You For Using Our Service");
                break; 
        }
    }while(num!=4);
    return 0;
}
