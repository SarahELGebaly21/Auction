#include <iostream>
using namespace std;
int seller_or_buyer;
int bools;
int num_of_cars = -1;
int num_of_clothes = -1;
int num_of_another = -1;
struct Members
{
    string name, password, e_mail, delivery_address;
    int age, ID;
    string phone_number;
};
struct Cars
{
    double started_bid_price;
    int item_number, day1, month1, year1;
};
struct Clothes
{
    double started_bid_price;
    int item_number, day1, month1, year1;
};
struct Another
{
    double started_bid_price;
    int item_number, day1, month1, year1;
};

Members member[4];
Cars car[5];
Clothes cloth[5];
Another another[5];

void kind();
void check(string check_e_mail, string check_password, bool checked);
void seller();

int main()
{
    member[0].name = "sarah adel elgebaly";
    member[0].e_mail = "sarahelgebaly0@auction.com";
    member[0].password = "sarah0";
    member[0].delivery_address = "0";
    member[0].age = 18;
    member[0].ID = 15871855313;
    member[0].phone_number = "0115484768";

    member[1].name = "sama ahmed mohamed";
    member[1].e_mail = "samaahmed1@auction.com";
    member[1].password = "sama1";
    member[1].delivery_address = "1";
    member[1].age = 25;
    member[1].ID = 48545646;
    member[1].phone_number = "015687968";

    member[2].name = "rawan mohamed ibrahim";
    member[2].e_mail = "rawanmohamed2@auction.com";
    member[2].password = "rawan2";
    member[2].delivery_address = "2";
    member[2].age = 35;
    member[2].ID = 1552527458;
    member[2].phone_number = "01354968";

    member[3].name = "shrouk osama mohamed";
    member[3].e_mail = "shroukosama3@auction.com";
    member[3].password = "shrouk3";
    member[3].delivery_address = "3";
    member[3].age = 30;
    member[3].ID = 155468475;
    member[3].phone_number = "01154788";

    string check_e_mail1, check_password1;
    bool checked1{};
   check(check_e_mail1, check_password1, checked1);
    if (bools == 1)
        kind();
    else
    {
        cout << " Wrong E-Mail or password" << endl;
      check(check_e_mail1, check_password1, checked1);
    }
    if (seller_or_buyer == 3)
    {
        kind();
    }


    return 0;
}

void check(string check_e_mail, string check_password, bool checked)
{
    checked = 0;
    cout << "Enter your E-mail" << endl;
    cin >> check_e_mail;
    cout << "Enter your password" << endl;
    cin >> check_password;
    for (int i = 0; i < 4; i++)
    {
        if (member[i].e_mail == check_e_mail && member[i].password == check_password)
        {
            cout << "Hello" << " " << member[i].name;
            checked = 1;
        }
    }
    if (checked == 1)
    {
        bools = 1;
    }
}

void kind()
{
    int what_kind;
    seller_or_buyer = 0;

    cout << endl;
    cout << "what do you want to do sell or buy ?" << endl;
    cout << "for selling enter 1" << endl << "for buying enter 2" << endl;
    cin >> what_kind;
    if (what_kind == 1)
    {

        cout << "hii seller" << endl;
        seller_or_buyer = 1;
        string categorys;
        double started_bid_pricee;
        int item_numberr, dayy, monthh, yearr;
        seller();
        int result, f, d;
        cout << "do you want to continue" << endl << "enter 1 to continuo 2 for no";
        cin >> d;
        if (d == 1)
        {
            kind();
        }
        else if (d == 2)
        {
            cout << num_of_cars;
            for (int n = 0; n <= num_of_cars; n++)
            {
                cout << car[num_of_cars].item_number << endl;
                cout << car[num_of_cars].started_bid_price << endl;
                cout << car[num_of_cars].day1 << endl;
                cout << car[num_of_cars].month1 << endl;
                cout << car[num_of_cars].year1 << endl;
            }


        }
    }
    else if (what_kind == 2)
    {
        cout << "hii buyer";
        seller_or_buyer = 2;

    }
    else {
        cout << "wrong answer";
        seller_or_buyer = 3;
    }

}


void seller()
{

    cout << "what is your item category" << endl;
    cout << "enter 1 for cars" << endl << "enter 2 for clothes" << endl << "enter 3 for another" << endl;
    int num_of_category;
    cin >> num_of_category;

    if (num_of_category == 1)
    {
        num_of_cars++;
        cout << "enter item number of the car" << endl;
        cin >> car[num_of_cars].item_number;
        cout << "Enter the price" << endl;
        cin >> car[num_of_cars].started_bid_price;
        cout << "Enter the date of today" << endl;
        cout << "the day is  ";
        cin >> car[num_of_cars].day1;
        cout << "the month is  ";
        cin >> car[num_of_cars].month1;
        cout << "the year is  ";
        cin >> car[num_of_cars].year1;



    }
    if (num_of_category == 2)
    {
        num_of_clothes++;
        cout << "enter item number of the car" << endl;
        cin >> cloth[num_of_clothes].item_number;
        cout << "Enter the price" << endl;
        cin >> cloth[num_of_clothes].started_bid_price;
        cout << "Enter the date of today" << endl;
        cout << "the day is  ";
        cin >> cloth[num_of_clothes].day1;
        cout << "the month is  ";
        cin >> cloth[num_of_clothes].month1;
        cout << "the year is  ";
        cin >> cloth[num_of_clothes].year1;

    }
    if (num_of_category == 3)
    {
        num_of_another++;
        cout << "enter item number of the car" << endl;
        cin >> another[num_of_another].item_number;
        cout << "Enter the price" << endl;
        cin >> another[num_of_another].started_bid_price;
        cout << "Enter the date of today" << endl;
        cout << "the day is  ";
        cin >> another[num_of_another].day1;
        cout << "the month is  ";
        cin >> another[num_of_another].month1;
        cout << "the year is  ";
        cin >> another[num_of_another].year1;
    }

}
