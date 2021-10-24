// #include <iostream>
// using namespace std;

// int facto(int n)
// {
//     int fact = 1, i;
//     for (i = 2; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = facto(n);
//     cout << ans;

//     return 0;
// }

#include <iostream>
using namespace std;

int fact(int num)
{
      int fac=1;
    for(int i=1; i<=num; i++)
    {
      fac*=i;
    }
    return fac;
}
int main() {
	int t;
	while(t--)
	{
	    int n;
	   cin >> n;
	   int ans=fact(n);
	    cout <<  ans << endl;
	    
	  
	}
	return 0;
}
