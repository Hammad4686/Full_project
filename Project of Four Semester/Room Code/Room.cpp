#include <iostream>
#include <string>
using namespace std;
int Select;
class Room
{
    const int Normal = 10000, Luxuary = 40000, Family = 50000;
    int Person, Days, N_Person, L_Person, F_member,ind=0 , x=0;
    string Name[100];
    int Age[];
    
public:
    void Catagories()
    {
        cout << endl
             << endl;
        cout << "We Provide three types of catagories of Room" << endl;
        cout << "--->Normal" << endl;
        cout << "--->Luxuary" << endl;
        cout << "--->Family" << endl
             << endl;
    }
    void Options()
    {
        cout << "What Do you Want to Select..." << endl;
        cout << "   1.--->Normal" << endl;
        cout << "   2.--->Luxuary" << endl;
        cout << "   3.--->Family" << endl;
        cout << "   4.--->Normal and Luxuar" << endl;
        cout << "   5.--->Luxuar and Family" << endl;
        cout << "   6.--->Normal and Family" << endl;
        cout << "   7.--->All" << endl;
        cout << "Select According to Number : ";
        cin>>Select;
        cout << endl;
    }
    void Person_Fun()
    {
        cout << "How many Persons...Enter the Number : ";
        cin >> Person;
        cout << "How many Days You will stay here : ";
        cin >> Days;
    }
    void SwitchCaseInfo()
    {
        switch (Select)
        {
        case 1:
            cout << endl;
            for (int i = 0; i < Person; i++)
            {
                cout << "   Enter a " << i + 1 << " Person Name : ";
                cin >> Name[i];
                cout << "   Enter a " << i + 1 << " Age : ";
                cin >> Age[i];
            }
            break;
        case 2:
            cout << endl;
            for (int i = 0; i < Person; i++)
            {
                cout << "   Enter a " << i + 1 << " Person Name : ";
                cin >> Name[i];
                cout << "   Enter a " << i + 1 << " Age : ";
                cin >> Age[i];
            }
            break;
        case 3:
            for (int i = 0; i < Person; i++)
            {
                cout << "   Enter a " << i + 1 << " Person Name : ";
                cin >> Name[i];
                cout << "   Enter a " << i + 1 << " Age : ";
                cin >> Age[i];
            }
            break;
        case 4:
            cout << "How many Person will in Normal Room : ";
            cin >> N_Person;
            L_Person = Person - N_Person;
            cout << "These People will Live in Luxuay Room : " << L_Person << endl;
            
            
            cout << "Enter The Name and Age of Persons who stay in Luxuary Room " << endl;
            for (int i = 0; i < L_Person; i++)
            {
                cout << "   Enter a " << i + 1 << " Person Name : ";
                cin >> Name[i];
                cout << "   Enter a " << i + 1 << " Age : ";
                cin >> Age[i];
                ind++;
            }
            cout<<endl<<"Enter the Info about people who stay in Normal Room"<<endl;
            for (int i = 0; i < N_Person; i++)
            {
                cout << "   Enter a " << ind+i+1 << " Person Name : ";
                cin >> Name[ind+i];
                cout << "   Enter a " << ind+i+1 << " Age : ";
                cin >> Age[ind+i];
            }
            

            break;
        case 5:
            cout << "How many Person will in Luxuary Room : ";
            cin >> L_Person;
            F_member = Person - L_Person;
            cout << "Enter The Name and Age of Persons who live in Luxuary Room " << endl;
            for (int i = 0; i < L_Person; i++)
            {
                cout << "   Enter a " << i + 1 << " Person Name : ";
                cin >> Name[i];
                cout << "   Enter a " << i + 1 << " Age : ";
                cin >> Age[i];
                ind++;
            }
            cout << "These Persons Will stay in Family Room : " << F_member << endl;
            for (int i = 0; i < F_member; i++)
            {
                cout << "   Enter a " << ind+i+1 << " Person Name : ";
                cin >> Name[ind+i];
                cout << "   Enter a " << ind+i+1 << " Age : ";
                cin >> Age[ind+i];
            }
            break;
        default:
            cout << "Enter Valid Input ";
             
        }
    }
    void Display()
    {
      for (int i = 0; i < Person; i++)
      {
        cout << "This is " << i + 1 << " Name : " << Name[i] << endl;
            cout << "This is " << i + 1 << " Age : " << Age[i] << endl;
      }
      
        
        // for (int i = 0; i < F_member; i++)
        // {
        //     cout<<"This is "<<i+1<<" Name : "<<Name[i]<<endl;
        //     cout<<"This is "<<i+1<<" Age : "<<Age[i]<<endl;
        // }
    }
};

int main()
{
    Room r;
    r.Catagories();
    r.Options();
    r.Person_Fun();
    r.SwitchCaseInfo();
    r.Display();
    return 0;
}