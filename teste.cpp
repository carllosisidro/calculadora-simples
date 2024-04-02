#include <iostream>
#include <vector>
#include <string>
using  namespace std;
int main()
{
     int a1, a2, total;
 
 char op;
  cout<< "valor";
  cin>>a1; 

  cout<<"qual operacao vc quer: +, -, *, / ";
  cin>>op;
 
  cout<<"digite outro numero ";
  cin>>a2;
 
if (op == '+')
{
   total = a1 + a2;
}
else if (op == '-')
{
    total = a1 - a2;
}
if (op == '*')
{
   total = a1 * a2;
}
if (op == '/')
{
   total = a1 / a2;
}
 
  cout<<"o total e "<<total;
  


}
