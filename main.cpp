#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
   string pass ="";
   char ch;
   int caz;
   char response;
   cout << "Enter pass\n";
   ch = _getch();
   while(ch != 13)
{//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
}
   if(pass == "123")
{
    cout << "\nAcces realizat!\n";
    cout<<"Continuati? Y/N: "; cin>>response;
    if (response=='y')
    {
        cout<<"Alegeti urmatoarele operatiuni: 1, 2 sau 3! \n "; ///Urmeaza o lista cu instructiuni si secvente de cod;
        cout<<"1. zzz \n";
        cout<<"2. zsszz \n";
        cout<<"3. zzsssz \n";
        cout<<"Raspuns?: ";
        cin>>caz;
        switch(caz)
        {
            case 1 : cout<<"sd1"; break;
            case 2 : cout<<"sd2"; break;
            case 3 : cout<<"sd3"; break;
            default : cout<<"sorry, I must exit!!!!";
        }
        }
        else
            {
        cout<<"sad sdfsd";}

   }else{
      cout << "\nAccesul interzis sau parola gresita...\n";
}
system("PAUSE");
return EXIT_SUCCESS;
}
