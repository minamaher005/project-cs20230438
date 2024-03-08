#include<iostream>
#include<string>
using namespace std;
    string bin="";
    string original_bin="";
int check(){
   return bin==original_bin;
}
int main()
{
    cout<<"hello "<<endl;
    long long num;
    cin >>num;

    while(num > 0)
        {
            long long x=num%2;
            original_bin = to_string(x) + original_bin;
            num/=2;
        }
        cout<<original_bin<<"\n";
    long long i= original_bin.length();
    while(i>=0)
        {
            bin=bin+original_bin[i];
            i=i-1;

        }
        cout<<bin<<"\n";
    if (check())
        {
            cout<<"yes";
        }
        else {   cout<<"no";
        }
return 0;  
}