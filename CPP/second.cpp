#include <iostream>

using namespace std;

int main ()

{

        int long long n = 0;
        int long long bound = 0;
        int long long k = 0;
        int long long answer = 0;
        int long long temp[10];

        cin >> n;

        temp[0] = n/2;
        temp[1] = temp[0] + 1;
        bound = temp[1]/2;
        temp[2] = n/3;
        
        temp[4] = (bound%1000000007) * ((bound + 1)%1000000007);
        temp[5] = - (((temp[0]%1000000007) * (bound%1000000007))%1000000007) + temp[2] - bound;
        answer = temp[4] + temp[5];
        k = temp[2]/2;
        
        answer += (((n+1)%1000000007)*(k%1000000007) - 3 * ((k%1000000007) * ((k+1)%1000000007))%1000000007)%1000000007;
        
        temp[3] = (n - (3*((2*k+1))))/2;
        temp[3] %= 1000000007;

        if (temp[2]%2 == 1)
        {
            answer += temp[3];
        }
        
       

        cout << answer%1000000007;
        return 0;
}


