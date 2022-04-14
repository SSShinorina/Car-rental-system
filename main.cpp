#include <iostream>

using namespace std;

void customerData();
int carCount();
int custCount();
int rate(int ,int);
void newCustData();
void newCarData();
void admin();
void user();
void menu();
void fullscreen();
void art();
void exitArt();
void delCar();
void nweCarData();
void displayCar();
void existingCar();
void load();
void loadCheck();
void gotoxy(int, int);
void time();
void border();
void countUser();

struct car{
    char plate_num[10];
    char brand[20];
    char model[20];
    float capacity;
    char colour[20];
    float rate_per_hour;
    float rate_per_half;
    float rate_per_day;
    char transmission[6];


};

struct customer{
    int id;
    char name[100];
    char phone[20];
    char ic[20];
    char address[2000];
};

struct pass{
    int ID;
    char passWord[20];
};
pass userPass[1000];
car rent[1000];
customer cust[1000];
car avail[1000];




int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

void fullscreen(){
    keybd_event(VK_MENU,0*38,0,0)
    keybd_event(VK_RETURN,0*1c,0,0)
}
