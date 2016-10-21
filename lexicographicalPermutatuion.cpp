#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,k,len = -1,diff ,loc = -1, flag,j;
    int tmp;
    cin >> t;
    string str;
    while(t--)
    {
        cin >> str;
        len = str.length();
        int  min = str[len - 1];
        loc = len - 1;
        for(i = len - 2;i >= 0; i--)
        {
            if( min <= str[i])
            {
                min = str[i];
                loc = i;  // location of non - increasing suffix sequence

            }
            else
                break;
        }
        int pivot ;
        if(loc != 0)
        {
            pivot = loc - 1; //just before suffix head
        for(i = len - 1; i >= loc;i--)
        {
            if(str[i] > str[pivot])
            {
                tmp = str[i];
                str[i] = str[pivot];
                str[pivot] = tmp;
                break;

            }

        }
        int j = len - 1;     // now j will point to the last element
        i = loc;         // and i will point to the first element
        //Reversing the suffix
       while(i<j)
       {
           tmp = str[i];
          str[i] = str[j];
           str[j] = tmp;
           i++;
           j--;
       }
        cout << str <<endl;

        }
        else
            cout << "no answer" <<endl;
    }
      return 0;
}


