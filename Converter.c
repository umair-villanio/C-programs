#include <stdio.h>

double celsius (double);

double meter (double);

double pounds (double);

int main (void){

    int a;

    double one;

    char two;

    double result;

    scanf("%d",&a);

    for (int i=0;i<a;i++){
scanf("%lf %c",&one,&two);

        if (two == 'c'){result = celsius (one);

            printf("%lf f\n",result);

        }

        else if (two == 'm'){result = meter(one);

            printf("%lf ft\n",result);

        }

        else if (two == 'g'){result = pounds(one);

            printf ("%lf lbs\n",result);

        }

    }

    
    return 0;

}


double celsius (double c)
{
    double f = 32+(1.8*c);

    return f;

}


double meter(double feet){

    double ft =  3.2808 * feet;

    return ft;

}


double pounds (double w){

    double lbs = 0.002205 * w;

    return lbs;

}
