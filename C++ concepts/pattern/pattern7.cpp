#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;

for(i=1; i<=n; i++){

for(j=1; j<=i; j++){
    cout<<"*";
}
int space=n*2-2*i;
for ( j = 1; j <= space; j++)
{
   cout<<" ";
}
for(j=1; j<=i; j++){
    cout<<"*";
}
cout<<endl;
}

for(i=n; i>=1; i--){

for(j=1; j<=i; j++){
    cout<<"*";
}
int space=n*2-2*i;
for ( j = 1; j <= space; j++)
{
   cout<<" ";
}
for(j=1; j<=i; j++){
    cout<<"*";
}
cout<<endl;
}




}