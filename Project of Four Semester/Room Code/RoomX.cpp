#include <iostream>
#include <iomanip>
using namespace std;

class Room
{
    int L_person, family_m, option, N_person, Days;
    int total = 0;
    string Name[50];
    int Age[50];

public:
    // Family Functions *****
    int CalFamily();
    void FamilyMem();
    // Laxuay Functions *****
    void LaxuaryMem();
    int CalLaxuary();
    // Normal Functions *****
    void NormalMem();
    int CalNormal();
    void Display();
    void InfoRoom()
    {
        cout << endl
             << endl;
        cout << "We Provide three facilities" << endl
             << endl;
        cout << "   1.--->Laxuary Room" << endl;
        cout << "   2.--->Family Room" << endl;
        cout << "   3.--->Normal Room" << endl;
        cout << "Select an Option between 1 and 3 : ";
        cin >> option;
        cout << endl;
        if (option <= 3 && option >= 1)
        {
            if (option == 2)
            {
                cout << "How many Family members : ";
                cin >> family_m;
                cout << "How many Days You will stay here : ";
                cin >> Days;
                cout << endl
                     << endl;
                FamilyMem();
            }
            else if (option == 1)
            {
                cout << "How many person will stay in luxuary Room : ";
                cin >> L_person;
                cout << "How many Days You will stay here : ";
                cin >> Days;
                cout << endl
                     << endl;
                LaxuaryMem();
            }
            else if (option == 3)
            {
                cout << "How many person will stay in Normal Room : ";
                cin >> N_person;
                cout << "How many Days You will stay here : ";
                cin >> Days;
                cout << endl
                     << endl;
                NormalMem();
            }
        }
        else
        {
            cout << "Enter a Valid Input" << endl;
        }
    }
};
// ************** These are the Function for the family member **************
void Room::FamilyMem()
{
    for (int i = 0; i < family_m; i++)
    {
        cout << "--->Enter the " << i + 1 << " Family Member Name : ";
        cin >> Name[i];
        cout << "--->Enter the " << i + 1 << " Family Member Age : ";
        cin >> Age[i];
    }
    // cout << endl
    //      << "Total " << CalFamily();
}

int Room::CalFamily()
{
    int perday = 20000;
    total = family_m * perday * Days;
    return total;
}
// ************** These are the Function for the Laxuary member **************
void Room::LaxuaryMem()
{
    for (int i = 0; i < L_person; i++)
    {
        cout << "--->Enter the " << i + 1 << " Member Name : ";
        cin >> Name[i];
        cout << "--->Enter the " << i + 1 << " Member Age : ";
        cin >> Age[i];
    }
    // cout << endl
    //      << "Total " << CalLaxuary();
}
int Room::CalLaxuary()
{
    int perday = 40000;
    total = L_person * perday * Days;
    return total;
}

// ************** These are the Function for the Normal member **************
void Room::NormalMem()
{
    for (int i = 0; i < N_person; i++)
    {
        cout << "--->Enter the " << i + 1 << " Member Name : ";
        cin >> Name[i];
        cout << "--->Enter the " << i + 1 << " Member Age : ";
        cin >> Age[i];
    }
    // cout << endl
    //      << "Total " << CalNormal();
}
int Room::CalNormal()
{
    int perday = 15000;
    total = N_person * perday * Days;
    return total;
}

void Room::Display()
{
    

    if (option == 1)
    {
        cout << endl
         << "This Is your Bill " << endl;
    cout << setw(10) << "Name"
         << "              Age " << endl;
        for (int i = 0; i < L_person; i++)
        {
            cout << setw(10) << Name[i] << setw(16) << Age[i] << endl;
        }
        cout << "The Total Bill is : " << CalLaxuary() << endl;
    }
    else if (option == 2)
    {
        cout << endl
         << "This Is your Bill " << endl;
    cout << setw(10) << "Name"
         << "              Age " << endl;
        for (int i = 0; i < family_m; i++)
        {
            cout << setw(10) << Name[i] << setw(16) << Age[i] << endl;
        }
        cout << "The Total Bill is : " << CalFamily() << endl;
    }
    else if (option == 3)
    {cout << endl
         << "This Is your Bill " << endl;
    cout << setw(10) << "Name"
         << "              Age " << endl;
        {
            for (int i = 0; i < N_person; i++)
            {
                cout << setw(10) << Name[i] << setw(16) << Age[i] << endl;
            }
            cout << "The Total Bill is : " << CalNormal() << endl;
        }
    }
}

int main()
{
    Room r1;
    r1.InfoRoom();
    r1.Display();
    return 0;
}