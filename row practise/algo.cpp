#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rub, cub;
    cin >> rub >> cub;
    int a[rub][cub];
    for (int i = 0; i < rub; i++)
    {
        for (int j = 0; j < cub; j++)
        {
            cin >> a[i][j];
        }
    }
    // for (int i = 0; i < rub; i++)
    // {
    //     for (int j = 0; j < cub; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
     int mm[rub],flag=1;

     int k=2;
     while(k--){
        for(int r=0;r<rub;r++){
            mm[r]=a[r][0];
            for(int c=1;c<cub;c++){
                if(flag*mm[r]<flag*a[r][c])
                 mm[r]=a[r][c];
            }
        }
        for(int c=0;c<cub;c++){
           int value = a[0][c];
            for(int r=1;r<rub;r++){
                if(value*flag > flag*a[r][c])
                  value = a[r][c];
            }
            for(int r=0;r<rub;r++){
                if(value==a[r][c] && value == mm[r]){
                    cout<<value<<" ";
                }
            }
        }
        flag = -1;
     }

}