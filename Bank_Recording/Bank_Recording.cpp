// Bank_Recording.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
//고객정보 구조체

struct Account_Customer
{
    int Account_Number;

    string Customer_Name;

    int Account_Balance;

    Account_Customer() {
        Account_Number = -1;
        Customer_Name = "";
        Account_Balance = 0;
    }
};

//관리 객체.
class Bank_Record
{
    map<int,Account_Customer> Accounts;

    string Data_Path;

    Bank_Record();
    ~Bank_Record();

    void save_Record();

    void print_Record();

    Account_Customer search_Record(int an);

    void update_Record();

    void delete_Record();
};
//https://www.geeksforgeeks.org/csv-file-management-using-c/
//CSV file management using C++
Bank_Record::Bank_Record()
{
    fstream fin;
    fin.open(Data_Path,ios::in);
    //파일이 끝날때까지
    while (!fin.eof()) {
        //파일에서 읽어온 데이터를 
        //맵에 저장.
    }

    fin.close();
}

Bank_Record::~Bank_Record()
{
}

void Bank_Record::save_Record()
{
}

void Bank_Record::print_Record()
{
}

Account_Customer Bank_Record::search_Record(int an)
{
    return Account_Customer();
}

void Bank_Record::update_Record()
{
}

void Bank_Record::delete_Record()
{
}


int main()
{
    std::cout << "Hello World!\n";
}
