#include <iostream>
using namespace std;

/*
возможность увеличить своё значение на 1
возможность уменьшить своё значение на 1
возможность посмотреть своё текущее значение
возможность создания экземпляра класса с начальным значением по умолчанию (1)
возможность создания экземпляра класса с инициализирующим начальным значением
*/

class Counter
{
public:
    int Set_by1(int user_input)
    {
        user_input = 1;
        this->user_input = user_input;
        return user_input;
    }
    int Set_by_user(int user_input)
    {
        this->user_input = user_input;
        return user_input;
    }
    int Increase(char command)
    {
        if (command == '+')
        {
            user_input =+ 1;
        } 
        return user_input;
    }
    void Decrease(char command)
    {
        if (command == '-')
        {
            user_input - 1;
        }
    }
    void Show(int user_input)
    {
        cout << user_input << endl;
    }
    void Exit(char exit)
    {
        if (exit == 'x')
        {
            cout << "До свидания!";
        }
    }
private:
    char increase = '+';
    char decrease = '-';
    char show = '=';
    char exit = 'x';
    int user_input;
};

void Screen_output(double num1, double num2)
{
    Counter screen;
    //cout << endl << "num1 + num2 = " << screen.add(user_input) << endl;

}


int main()
{
    setlocale(LC_ALL, "Ru");

    Counter counter;

    int user_input = 0;
    char command = {};

    //cout << "Вы хотите указать начальное значение счётчика?"
    cout << "Введите свое число: ";
    cin >> user_input;
    counter.Set_by_user(user_input);
    cout << "Введите команду + : ";
    cin >> command;
    counter.Increase(command);
    counter.Show(user_input);
}
