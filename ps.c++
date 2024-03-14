#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A,P;
    vector <long long> D;
    scanf("%d %d",&A,&P);

    D.push_back(A);
    int i=1;
    int idx=0;
    while(1)
    {
        double sum=0;
        int num = D[i-1];
        while(num)
        {
          sum += pow(num%10,P);
          num/=10;
        }

        if(find(D.begin(),D.end(),sum) != D.end()) //값이 있으면
        {
            idx = find(D.begin(),D.end(),sum) - D.begin();
            break;
        }
        D.push_back(sum);
        i++;


    }
    cout<<idx<<endl;
}
 