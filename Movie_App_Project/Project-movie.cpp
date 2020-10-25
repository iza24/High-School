#include <iostream>
#include <fstream>
#include <cstring>
#include <Windows.h>
#include <conio.h>
using namespace std;
ifstream in("detalii.txt");
struct filme
{
    char nume[256], gen[256], regizor[256], actor[256];
    int anul;
};

void citire(filme v[100], int& n)
{
    int i;
    in >> n;
    in.get();
    for (i = 1; i <= n; i++)
    {
        in.getline(v[i].nume, 256);
        in.getline(v[i].gen, 256);
        in.getline(v[i].regizor, 256);
        in.getline(v[i].actor, 256);
        in >> v[i].anul;
        in.get();
    }
}

void afisare(filme v[100], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "Numele filmului este:  " << v[i].nume << endl;
        cout << "Genul filmului este:  " << v[i].gen << endl;
        cout << "Regizorul acestui film se numeste:  " << v[i].regizor << endl;
        cout << "Un actor principal se numeste:  " << v[i].actor << endl;
        cout << "Anul aparitiei al acestui film este:  " << v[i].anul << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
    }
}
void ordonare(int n, filme v[100])
{
    filme aux;
    int j;
    for (int i = 1; i < n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (strcmp(v[i].nume, v[j].nume) > 0)
            {
               aux=v[i];
               v[i]=v[j];
               v[j]=aux;
            }
        }
    }
}

int prim(int x)
{
    int d;
    for (d = 2; d <= x / 2; d++)
        if (x % d == 0)
            return 0;
    return 1;
}

void vocala(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (strchr("AEIOUaeiou", v[i].regizor[0]) != 0)
            cout << v[i].regizor << endl;
}

void filme_aparute_ianinte_de_2015(int n, filme v[100])
{
    int c = 2015;
    for (int i = 1; i <= n; i++)
        if (v[i].anul < c)
            cout << v[i].nume << "  care a aparut in anul:  " << v[i].anul << endl;
}

void dragoste(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (strcmp(v[i].gen, "Dragoste") == 0)
        {
            cout << v[i].nume << endl;
        }
}

void groaza(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (strcmp(v[i].gen, "Groaza") == 0)
        {
            cout << v[i].nume << endl;
        }
}

void SF(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (strcmp(v[i].gen, "SF") == 0)
        {
            cout << v[i].nume << endl;
        }
}

void comedie(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (strcmp(v[i].gen, "Comedie") == 0)
        {
            cout << v[i].nume << endl;
        }
}

void actiune(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (strcmp(v[i].gen, "Actiune") == 0)
        {
            cout << v[i].nume << endl;
        }
}

void drama(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (strcmp(v[i].gen, "Drama") == 0)
        {
            cout << v[i].nume << endl;
        }
}

void numar_par(int n, filme v[100])
{
    for (int i = 1; i <= n; i++)
        if (v[i].anul % 2 == 0)
            cout << v[i].nume << endl;
}
int stergere(int& n, filme v[100], int an)
{
    int i,j,g=0;
    i = 1;
    while(i<=n)
    {
        if (an == v[i].anul)
        {
            g = 1;
            for (j = i; j < n; j++)
            {
                v[j] = v[j + 1];
            }
            n--;
        }
        i++;
    }
    for (i = 1; i <= n; i++)
    {
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "Numele filmului este:  " << v[i].nume << endl;
        cout << "Genul filmului este:  " << v[i].gen << endl;
        cout << "Regizorul acestui film se numeste:  " << v[i].regizor << endl;
        cout << "Un actor principal se numeste:  " << v[i].actor << endl;
        cout << "Anul aparitiei al acestui film este:  " << v[i].anul << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
    }
    return g;
}
void actualizare(int n, filme v[100])
{
    int i;
    in.close();
    ofstream out("detalii.txt");
    out << n<<endl;
    for (int i = 1; i <= n; i++)
    {
        out << v[i].nume << endl << v[i].gen << endl << v[i].regizor << endl << v[i].actor << endl << v[i].anul <<endl;
    }
}
void adugare(int& n, filme v[100])
{
    int an,i;
    char nume[256], gen[256], regizor[256], actor[256];
    cout << "Nume: "<<endl;
    cin.get();
    cin.getline(nume, 256);
    cout << "Gen: " << endl;
    cin.getline(gen, 256);
    cout << "Regizor: " << endl;
    cin.getline(regizor, 256);
    cout << "Actor: " << endl;
    cin.getline(actor, 256);
    cout << "An: " << endl;
    cin >> an;
    n++;
    strcpy(v[n].nume, nume);
    strcpy(v[n].gen, gen);
    strcpy(v[n].regizor, regizor);
    strcpy(v[n].actor, actor);
    v[n].anul = an;
    for (i = 1; i <= n; i++)
    {
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "Numele filmului este:  " << v[i].nume << endl;
        cout << "Genul filmului este:  " << v[i].gen << endl;
        cout << "Regizorul acestui film se numeste:  " << v[i].regizor << endl;
        cout << "Un actor principal se numeste:  " << v[i].actor << endl;
        cout << "Anul aparitiei al acestui film este:  " << v[i].anul << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
    }
}
int main()
{
    int j, ct = 0;
    filme v[100];
    int n, i;
    char aux[100];
    citire(v, n);
    afisare(v, n);
    int op;
    do {
        system("Color B");
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "<<<<<-----------------------------------MENIU----------------------------------->>>>>" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "1.Afisarea filmelor aparute inaintea anului 2015,de asemenea si afisarea" << endl;
        cout << "a anului de aparitie a acestora." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "2.Afisarea filmelor in functie de genul ales." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "3.Afisarea filmelor al caror an de aparitie este numar par." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "4.Afisarea actorilor al caror nume contine o litera citita de la tastatura." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "5.Afisarea regizorilor al caror nume incepe cu o vocala." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "6.Afisarea actorilor si a anilor din filmele care au suma cifrelor anului de" << endl;
        cout << "aparitie numar palindrom,daca nu exista sa se afiseze un mesaj corespunzator." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "7.Afisarea in ordine crescatoare a tuturor filmelor." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "8.Afisarea filmelor a caror ani au produsul cifrelor numar impar." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "9.Afisarea regizorilor din filmele a caror an de aparitie este numar prim,daca nu" << endl;
        cout << "exista sa se afiseze un mesaj corespunzator." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "10.Stergeti din fisier filmele in functie de anul citit de la tastatura." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "11.Adaugati un nou film." << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "12.Actualizare de fisier."<<endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "0.Exit" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "Alege o comanda:" << endl;
        cin >> op;
        switch (op)
        {
        case 1: {
            cout << "Filmele care au aparut inaintea anului 2015 sunt: " << endl;
            cout << "------------------------------------------------------------" << endl;
            filme_aparute_ianinte_de_2015(n, v);
            system("pause");
            break;
        }
        case 2: {
            int op1;
            do {
                system("Color A");
                cout << "-------------------------" << endl;
                cout << "-----Genuri de filme-----" << endl;
                cout << "-------------------------" << endl;
                cout << "1.1. Filme de dragoste" << endl;
                cout << "1.2. Filmele de groaza" << endl;
                cout << "1.3. Filmele Sf" << endl;
                cout << "1.4. Filmele de comedie" << endl;
                cout << "1.5. Filmele de actiune" << endl;
                cout << "1.6. Filme de drama" << endl;
                cout << "0. Exit" << endl;
                cout << endl;
                cout << "Alege o comanda: " << endl;
                cin >> op1;
                switch (op1)
                {
                case 1: {
                    int ct = 0;
                    cout << "-----------------------------------" << endl;
                    cout << "Lista de filme:" << endl;
                    cout << "-----------------------------------" << endl;
                    dragoste(n, v);
                    cout << "-----------------------------------" << endl;
                    system("pause");
                    break;
                }
                case 2: {

                    cout << "-----------------------------------" << endl;
                    cout << "Lista de filme:" << endl;
                    cout << "-----------------------------------" << endl;
                    groaza(n, v);
                    cout << "-----------------------------------" << endl;
                    system("pause");
                    break;
                }
                case 3: {

                    cout << "-----------------------------------" << endl;
                    cout << "Lista de filme:" << endl;
                    cout << "-----------------------------------" << endl;
                    SF(n, v);
                    cout << "-----------------------------------" << endl;
                    system("pause");
                    break;
                }
                case 4: {
                    cout << "-----------------------------------" << endl;
                    cout << "Lista de filme:" << endl;
                    cout << "-----------------------------------" << endl;
                    comedie(n, v);
                    cout << "-----------------------------------" << endl;
                    system("pause");
                    break;
                }
                case 5: {
                    cout << "-----------------------------------" << endl;
                    cout << "Lista de filme:" << endl;
                    cout << "-----------------------------------" << endl;
                    actiune(n, v);
                    cout << "-----------------------------------" << endl;
                    system("pause");
                    break;
                }
                case 6: {
                    cout << "-----------------------------------" << endl;
                    cout << "Lista de filme:" << endl;
                    cout << "-----------------------------------" << endl;
                    drama(n, v);
                    cout << "-----------------------------------" << endl;
                    system("pause");
                    break;
                }
                case 0: {
                    cout << "Exit" << endl;
                    break;
                }
                default:cout << "Optiune incorecta" << endl;
                    system("pause");
                }
            } while (op1 != 0);
            system("pause");
            break;
        }
        case 3: {
            cout << "Filmele al caror an de aparitie este numar par sunt: " << endl;
            cout << "------------------------------------------------------" << endl;
            numar_par(n, v);
            cout << "------------------------------------------------------" << endl;
            system("pause");
            break;
        }
        case 4: {
            char litera;
            cout << "Citeste litera: ";
            cin >> litera;
            int g = 0;
            cout << "-----------------------------------------------------------------" << endl;
            cout << "Actorii care contin litera citita de la tastatura sunt urmatorii:" << endl;
            cout << "-----------------------------------------------------------------" << endl;
            for (int i = 1; i <= n; i++)
            {
                if (strchr(v[i].actor, litera) || strchr(v[i].actor, toupper(litera)) || strchr(v[i].actor, tolower(litera)))
                {
                    g = 1;
                    cout << v[i].actor << endl;
                }
            }
            if (g == 0)
                cout << "Nu sunt actori cu litera: " << litera << endl;
            cout << "-----------------------------------------------------------------" << endl;
            system("pause");
            break;
        }
        case 5: {
            cout << "Regizorii al caror nume incepe cu o vocala sunt:  " << endl;
            cout << "-----------------------------------------------------------------" << endl;
            vocala(n, v);
            cout << "-----------------------------------------------------------------" << endl;
            system("pause");
            break;
        }
        case 6: {
            int okk = 1, x, y;
            cout << "Acorii care apar in filmele a caror ani de lansare au suma cifrelor numar palindrom sunt: " << endl;
            cout << "------------------------------------------------------------------------------------------" << endl;
            for (i = 1; i <= n; i++)
            {
                int sum = 0;
                x = v[i].anul;
              while (x)
                {
                    sum = sum + (x % 10);
                    x = x / 10;
                }
                int inv = 0;
                y = sum;
                while (sum != 0)
                {
                    inv = inv * 10 + (sum % 10);
                    sum = sum / 10;
                }
                if (inv == y)
                {
                    cout << "-------------------------------------------------" << endl;
                    cout << v[i].actor << " " << v[i].anul << endl;
                    cout << "Palindrom: " << inv << endl;
                    okk = 1;
                }
            }
            if (okk == 0)
                cout << "Nu exista niciun an de aparitie a carui suma a cifrelor sa fie numar palindrom" << endl;
            cout << "------------------------------------------------------------------------------------------" << endl;
            system("pause");
            break;
        }
        case 7: {
            cout << "------------------------------------------------------" << endl;
            cout << "Ordonarea filmelor in ordine crescatoare este aceasta:" << endl;
            cout << "------------------------------------------------------" << endl;
            ordonare(n, v);
            for (i = 1; i <= n; i++)
                cout << v[i].nume << endl;
            system("pause");
            break;
        }
        case 8: {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Filmele a caror ani de lansare au produsul cifrelor numar impar sunt:" << endl;
            cout << "---------------------------------------------------------------------" << endl;
            int x;
            for (i = 1; i <= n; i++)
            {
                int produs = 1;
                x = v[i].anul;
                while (x != 0)
                {
                    produs = produs * (x % 10);
                    x = x / 10;
                }
                if (produs % 2 != 0)
                {
                    cout << "Nume film: " << v[i].nume << endl;
                    cout << "An lansare: " << v[i].anul << endl;
                    cout << "Produs cifre: " << produs << endl;
                    cout << "--------------------------------------" << endl;
                }
            }
            system("pause");
            break;
        }
        case 9: {
            int m, sem = 0;
            cout << "Regizorii din filmele al caror an de aparitie este numar prim sunt:" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            for (i = 1; i <= n; i++)
            {
                int ok = 0;
                m = v[i].anul;
                if (prim(m) == 1)
                    ok = 1;
                if (ok == 1)
                {
                    cout << v[i].regizor << endl;
                    cout << "----------------------------------------------" << endl;
                    sem = 1;
                }
            }
            if (sem == 0)
                cout << "Nu exista niciun an care sa fie numar prim" << endl;
            system("pause");
            break;
        }
        case 10:
        {
            cout << "Anul: ";
            int an,g;
            cin >> an;
            g=stergere(n, v, an);
            if (g == 0)
                cout << "Nu s-a sters nimic;"<<endl;
            system("pause");
            break;
        }
        case 11:
        {
            adugare(n, v);
            system("pause");
            break;
        }
        case 12:
        {
            actualizare(n, v);
            system("pause");
            break;
        }
        case 0:
        {
            cout << "Exit" << endl;
            break;
        }
        default:cout << "Optiune incorecta" << endl;
            system("pause");
        }
    } while (op != 0);
    cout << endl;
}

