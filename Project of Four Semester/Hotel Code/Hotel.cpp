#include<iostream>
using namespace std;

class hotel{

    private:
    int select , Item , Time , total= 0 , Price = 0;
    int Bar = 230 , bur = 200 , Siri = 400 , dam = 500 , Juic = 120;

    public:
        void Menu();
        int GetVal();
        int calVal();

};

void hotel::Menu(){
    cout<<"********************************"<< endl;
    cout<<"********** Menu List ***********"<<endl;
    cout<<"********************************"<< endl  <<  endl;
    cout<<"     1-->Baryani Rs = 230"<<endl;
    cout<<"     2-->Burger Rs = 200"<<endl;
    cout<<"     3-->siri paie Rs = 400"<<endl;
    cout<<"     4-->dam wala qeemah Rs = 500"<<endl;
    cout<<"     5-->Juices Rs = 120"<<endl;
}

int hotel::GetVal(){
    cout<<"How many items do you want to get? : ";
    cin>>select;
    for (int i = 1; i <= select; i++)
    {
        cout<<"Enter the "<<i<<" item you want to get : ";
        cin>>Item;
        
        if (Item == 1)
        {
            cout<<"-->You want a Buryani : "<<endl;
            cout<<"-->How many times do you want it : ";
            cin>>Time;
            Price = Bar * Time;
        }else if (Item == 2){

            cout<<"-->You want a Burger : "<<endl;
            cout<<"-->How many times do you want it : ";
            cin>>Time;
            Price = bur * Time;
        }else if (Item == 3){
            cout<<"-->You want a siri paie : "<<endl;
            cout<<"-->How many times do you want it : ";
            cin>>Time;
            Price = Siri * Time;
        }else if (Item == 4){
            cout<<"-->You want a dam wala qeemah : "<<endl;
            cout<<"-->How many times do you want it : ";
            cin>>Time;
            Price = dam * Time;
        }else if (Item == 5){
            cout<<"-->You want a Juices : "<<endl;
            cout<<"-->How many times do you want it : ";
            cin>>Time;
            Price = Juic * Time;
        }
        total = total + Price;
        
    }
    return total;
}

int main(){
    hotel h;
    h.Menu();
    h.GetVal();
    return 0;
}