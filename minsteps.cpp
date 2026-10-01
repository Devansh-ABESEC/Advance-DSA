#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int d;
    cout<<"Enter the destination distance: ";
    cin >> d;
   
    int sum = 0;
    int steps = 0;

    while (sum < d || (sum - d) % 2 != 0) {
        steps++;
        sum += steps;
    }

    cout <<"The number of steps required to reach destination: "<< steps << endl;

    return 0;
}
