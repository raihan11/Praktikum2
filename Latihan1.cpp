#include <conio.h>
#include <iostream.h>
main()
{
int a,b,c;
cout<<“Masukkan Nilai Bilangan a : “;
   cin>>a;
   cout<<“Masukkan Nilai Bilangan b : “;
   cin>>b;
   cout<<“Masukkan Nilai Bilangan c : “;
   cin>>c;
   cout<<endl;
   if (a > b)
         if (a > c)
         cout<<a<<” Lebih Besar Dari “<<c<<” dan “<<b<<endl;
      else
         cout<<c<<” Lebih Besar Dari “<<a<<” dan “<<b<<endl;
   else
         if (b > c)
         cout<<b<<” Lebih Besar Dari “<<a<<” dan “<<c<<endl;
      else
         cout<<c<<” Lebih Besar Dari “<<a<<” dan “<<b<<endl;
   getch();

}

