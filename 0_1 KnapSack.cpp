#include <iostream>

using namespace std;
int Max(int x, int y);

int main()
{
    int wt[5]= {0,3,5,6,4};
    int p[5]= {0,2,4,1,3};

    int m=8,i,w,ar[5][9];
    for(i=0; i<=4; i++)
    {
        for(w=0; w<=m; w++)
        {
            if(i==0 || w==0)
                ar[i][w]=0;
            else if(wt[i]<=w)
                ar[i][w]=Max(p[i]+ar[i-1][w-wt[i]],ar[i-1][w]);
            else
                ar[i][w]=ar[i-1][w];
            cout<<ar[i][w]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Max profit "<<ar[i-1][w-1]<<endl;
    return 0;
}

int Max(int x, int y)
{
    return (x>y)?x:y;
}
