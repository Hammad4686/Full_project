#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Room
{
    int L_person, family_m, N_person, Days;

    string Name[50];
    int Age[50];

public:
    int total = 0;
    int option;

    void InfoRoom();
    int CalFamily();
    void FamilyMem();
    int CalLaxuary();
    void LaxuaryMem();
    int CalNormal();
    void NormalMem();
    void Display();
};

void Room::InfoRoom()
{
    cout << endl
         << endl;
    cout << "We Provide three facilities" << endl
         << endl;
    cout << "   1. Laxuary Room" << endl;
    cout << "   2. Family Room" << endl;
    cout << "   3. Normal Room" << endl;
    cout << "Select an Option between 1 and 3: ";
    cin >> option;
    cout << endl;
    if (option <= 3 && option >= 1)
    {
        if (option == 2)
        {
            cout << "How many Family members: ";
            cin >> family_m;
            cout << "How many Days You will stay here: ";
            cin >> Days;
            cout << endl
                 << endl;
            FamilyMem();
        }
        else if (option == 1)
        {
            cout << "How many persons will stay in the luxury Room: ";
            cin >> L_person;
            cout << "How many Days You will stay here: ";
            cin >> Days;
            cout << endl
                 << endl;
            LaxuaryMem();
        }
        else if (option == 3)
        {
            cout << "How many persons will stay in Normal Room: ";
            cin >> N_person;
            cout << "How many Days You will stay here: ";
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

int Room::CalFamily()
{
    int perday = 20000;
    total = family_m * perday * Days;
    return total;
}

void Room::FamilyMem()
{
    for (int i = 0; i < family_m; i++)
    {
        cout << "--->Enter the " << i + 1 << " Family Member Name: ";
        cin >> Name[i];
        cout << "--->Enter the " << i + 1 << " Family Member Age: ";
        cin >> Age[i];
    }
}

int Room::CalLaxuary()
{
    int perday = 40000;
    total = L_person * perday * Days;
    return total;
}

void Room::LaxuaryMem()
{
    for (int i = 0; i < L_person; i++)
    {
        cout << "--->Enter the " << i + 1 << " Member Name: ";
        cin >> Name[i];
        cout << "--->Enter the " << i + 1 << " Member Age: ";
        cin >> Age[i];
    }
}

int Room::CalNormal()
{
    int perday = 15000;
    total = N_person * perday * Days;
    return total;
}

void Room::NormalMem()
{
    for (int i = 0; i < N_person; i++)
    {
        cout << "--->Enter the " << i + 1 << " Member Name: ";
        cin >> Name[i];
        cout << "--->Enter the " << i + 1 << " Member Age: ";
        cin >> Age[i];
    }
}

void Room::Display()
{
    ofstream out("Output.txt");
    if (option == 1)
    {
        out << endl;
        out << "********** ROOM BILL **********" << endl;
        out << "This Is your Bill " << endl;
        out << setw(10) << "Name"
            << "              Age " << endl;
        for (int i = 0; i < L_person; i++)
        {
            out << setw(10) << Name[i] << setw(16) << Age[i] << endl;
        }
        out << "The Total Bill is: " << CalLaxuary() << endl;
    }
    else if (option == 2)
    {
        out << endl;
        out << "********** ROOM BILL **********" << endl;
        out << "This Is your Bill " << endl;
        out << setw(10) << "Name"
            << "              Age " << endl;
        for (int i = 0; i < family_m; i++)
        {
            out << setw(10) << Name[i] << setw(16) << Age[i] << endl;
        }
        out << "The Total Bill is: " << CalFamily() << endl;
    }
    else if (option == 3)
    {
        out << endl;
        out << "********** ROOM BILL **********" << endl;
        out << "This Is your Bill " << endl;
        out << setw(10) << "Name"
            << "              Age " << endl;
        for (int i = 0; i < N_person; i++)
        {
            out << setw(10) << Name[i] << setw(16) << Age[i] << endl;
        }
        out << "The Total Bill is: " << CalNormal() << endl;
    }
    out.close();

    // Print the bill
    string printCommand;
#ifdef _WIN32                                                  // Windows platform
    printCommand = "print /D:\\<printer_name> \"Output.txt\""; // Replace "<printer_name>" with the name of your printer
#elif defined(__linux__)                                       // Linux platform
    printCommand = "lp -d <printer_name> \"Output.txt\"";                   // Replace "<printer_name>" with the name of your printer
#elif defined(__APPLE__)                                       // macOS platform
    printCommand = "lpr -P <printer_name> \"Output.txt\"";                   // Replace "<printer_name>" with the name of your printer
#else
#error Unsupported platform
#endif

    int result = system(printCommand.c_str());
    if (result == 0)
    {
        cout << "Print command executed successfully." << endl;
    }
    else
    {
        cout << "Failed to execute the print command." << endl;
    }
}

class Hotel
{
    int select, Item, Time, total = 0, Price = 0;
    int Bar = 230, bur = 200, Siri = 400, dam = 500, Juic = 120;

public:
    void Menu();
    int GetVal();
    int calVal();
    void PrintBill(int totalBill);
};

void Hotel::Menu()
{
    cout << "********************************" << endl;
    cout << "********** Menu List ***********" << endl;
    cout << "********************************" << endl
         << endl;
    cout << "     1. Baryani Rs = 230" << endl;
    cout << "     2. Burger Rs = 200" << endl;
    cout << "     3. Siri paie Rs = 400" << endl;
    cout << "     4. Dam wala qeemah Rs = 500" << endl;
    cout << "     5. Juices Rs = 120" << endl;
}

int Hotel::GetVal()
{
    cout << "How many items do you want to get? : ";
    cin >> select;
    for (int i = 1; i <= select; i++)
    {
        cout << "Enter the " << i << " item you want to get : ";
        cin >> Item;

        if (Item == 1)
        {
            cout << "-->You want a Biryani: " << endl;
            cout << "-->How many times do you want it : ";
            cin >> Time;
            Price = Bar * Time;
        }
        else if (Item == 2)
        {
            cout << "-->You want a Burger: " << endl;
            cout << "-->How many times do you want it : ";
            cin >> Time;
            Price = bur * Time;
        }
        else if (Item == 3)
        {
            cout << "-->You want a Siri Paie: " << endl;
            cout << "-->How many times do you want it : ";
            cin >> Time;
            Price = Siri * Time;
        }
        else if (Item == 4)
        {
            cout << "-->You want a Dam Wala Qeemah: " << endl;
            cout << "-->How many times do you want it : ";
            cin >> Time;
            Price = dam * Time;
        }
        else if (Item == 5)
        {
            cout << "-->You want a Juice: " << endl;
            cout << "-->How many times do you want it : ";
            cin >> Time;
            Price = Juic * Time;
        }
        total = total + Price;
    }
    cout << endl;
    return total;
}

void Hotel::PrintBill(int totalBill)
{
    // Construct the print command based on the platform
    string printCommand;
#ifdef _WIN32                                                                    // Windows platform
    printCommand = "print /D:\\<printer_name> \"" + to_string(totalBill) + "\""; // Replace "<printer_name>" with the name of your printer
#elif defined(__linux__)                                                         // Linux platform
    printCommand = "lp -d <printer_name> \"" + to_string(totalBill) + "\""; // Replace "<printer_name>" with the name of your printer
#elif defined(__APPLE__)                                                         // macOS platform
    printCommand = "lpr -P <printer_name> \"" + to_string(totalBill) + "\""; // Replace "<printer_name>" with the name of your printer
#else
#error Unsupported platform
#endif

    int result = system(printCommand.c_str());
    if (result == 0)
    {
        cout << "Print command executed successfully." << endl;
    }
    else
    {
        cout << "Failed to execute the print command." << endl;
    }
}

int main()
{
    int select;
    cout << endl;
    cout << "      *   Project Created   *" << endl;
    cout << "      ***********************" << endl;
    cout << "      *   WELCOME TO HOTEL  *" << endl;
    cout << endl;

    cout << "* We Provided Two facilities *" << endl;
    cout << "* 1. Hotel Management System   *" << endl;
    cout << "* 2. Room Management System    *" << endl;
    cout << "* 3. Room and Hotel Management *" << endl;
    cout << endl;
    cout << "* Please Select Your Option *" << endl;
    cin >> select;

    if (select == 1)
    {
        Hotel h;
        h.Menu();
        h.PrintBill(h.GetVal());
    }
    else if (select == 2)
    {
        Room r;
        r.InfoRoom();
        r.Display();
    }
    else if (select == 3)
    {
        Room r;
        r.InfoRoom();
        r.Display();

        Hotel h;
        h.Menu();
        h.PrintBill(r.total + h.GetVal());
    }

    return 0;
}
