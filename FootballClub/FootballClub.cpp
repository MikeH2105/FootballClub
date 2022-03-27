/* Реалізуйте клас «Футбольний клуб». Необхідно зберігати в змінних-членах класу Назву команди,
назву домашнього стадіону, презедента клубу, капітана команди, середня кількість відвідувань домашнього матчу.
Реалізуйте функцію, яка перевіряє на який з трьох футбольних клубів ходить більше вболівальників.*/
#include <iostream>
using namespace std;
class FootballClub {
public:
    string ClubName;
    string HomeStadium;
    string ClubPresident;
    string ClubKapitan;
    int MiddleVisitor;

    void Input() {
        cout << "Input Club Name:" << endl;
        cin >> ClubName;
        cout << "Input Home Stadium`s Name:" << endl;
        cin >> HomeStadium;
        cout << "Input Club President`s Name:" << endl;
        cin >> ClubPresident;
        cout << "Input Club Kapitan`s Name:" << endl;
        cin >> ClubKapitan;
        cout << "Enter the number of fans:" << endl;
        cin >> MiddleVisitor;
    }


};

void Sort(int arr[], int& a, int& b, int& c)
{

    for (int j = 0; j < 3 - 1; j++)
    {
        for (int i = 0; i < 3 - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}



int main()
{
    FootballClub firstClub;
    firstClub.Input();
    cout << endl;
    FootballClub secondClub;
    secondClub.Input();
    cout << endl;
    FootballClub thirdClub;
    thirdClub.Input();
    cout << endl;
    int a = firstClub.MiddleVisitor;
    int b = secondClub.MiddleVisitor;
    int c = thirdClub.MiddleVisitor;
    int place = 0;
    int arr[3] = { a, b, c };

    cout << "Sort Football Clubs by the number of fans:" << endl;
    Sort(&arr[3], a, b, c);

    for (int i = 0; i < 3; i++)
    {
        place++;
        cout << " ";
        cout << arr[i];

        if (arr[i] == a)
            cout << " " << firstClub.ClubName << endl;
        if (arr[i] == b)
            cout << " " << secondClub.ClubName << endl;
        if (arr[i] == c)
            cout << " " << thirdClub.ClubName << endl;
        cout << endl;

    }




}
