#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    bool Func1=false, Func2=false, Func3=false, Func4=false, Func5=false, Func6=false, Func7=false,loop=false;
    int Selezione;
    do {
    system("clear");
    cout << "\t\t\tBlackHole Menu" << boolalpha
    <<"\n\tF. S. LA VIA \tEnterprise Trader Inc \t~PER UN MONDO LIBERO\n"
    <<"\n1.\tFUNZIONE\tStatus: " << Func1
    <<"\n2.\tFUNZIONE\tStatus: " << Func2
    <<"\n3.\tFUNZIONE\tStatus: " << Func3
    <<"\n4.\tFUNZIONE\tStatus: " << Func4
    <<"\n5.\tFUNZIONE\tStatus: " << Func5
    <<"\n6.\tFUNZIONE\tStatus: " << Func6
    <<"\n7.\tFUNZIONE\tStatus: " << Func7
    <<"\n\n\t\t\t Seleziona FUNZIONE : ";
    cin >> Selezione;
    switch(Selezione)
    {
    case 1 :
        {
            string Scelta;
            cout << "(si/no)\tEnable Func1 : ";
            cin >> Scelta;
            if (Scelta == "si") //Non funziona || linux
            {
                Func1 = true;
                loop = true;
            }else
            {
                Func1 = false;
                loop = true;
            }
        }
        break;
    case 2 :
        {
            string Scelta;
            cout << "(si/no)\tEnable Func2 : ";
            cin >> Scelta;
            if (Scelta == "si")
            {
                Func2 = true;
                loop = true;
            }else
            {
                Func2 = false;
                loop = true;
            }
        }
        break;
    case 3 :
        {
            string Scelta;
            cout << "(si/no)\tEnable Func3 : ";
            cin >> Scelta;
            if (Scelta == "si")
            {
                Func3 = true;
                loop = true;
            }else
            {
                Func3 = false;
                loop = true;
            }
        }
        break;
    case 4 :
        {
            string Scelta;
            cout << "(si/no)\tEnable Func4 : ";
            cin >> Scelta;
            if (Scelta == "si")
            {
                Func4 = true;
                loop = true;
            }else
            {
                Func4 = false;
                loop = true;
            }
        }
        break;
    case 5 :
        {
            string Scelta;
            cout << "(si/no)\tEnable Func5 : ";
            cin >> Scelta;
            if (Scelta == "si")
            {
                Func5 = true;
                loop = true;
            }else
            {
                Func5 = false;
                loop = true;
            }
        }
        break;
    case 6 :
        {
            string Scelta;
            cout << "(si/no)\tEnable Func6 : ";
            cin >> Scelta;
            if (Scelta == "si")
            {
                Func6 = true;
                loop = true;
            }else
            {
                Func6 = false;
                loop = true;
            }
        }
        break;
    case 7 :
        {
            string Scelta;
            cout << "(si/no)\tEnable Func7 : ";
            cin >> Scelta;
            if (Scelta == "si")
            {
                Func7 = true;
                loop = true;
            }else
            {
                Func7 = false;
                loop = true;
            }
        }
        break;
    default :
        {
            string Scelta;
            cout << "(si/no)\tReload? : ";
            cin >> Scelta;
            if (Scelta == "si")
            {
                loop = true;
            }else
            {
                loop = false;
            }
        }
    }
    }while(loop==true);
    return 0;
}
