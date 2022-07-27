#include <iostream>
#include <string>
using namespace std;

/*
Напишите код, демонстрирующий работу класса Counter. Спросите у пользователя, хочет ли он указать начальное значение для счётчика. 
Если хочет, дайте ему возможность это сделать. Затем предоставьте пользователю возможность вводить команды:

+: увеличьте счётчик на 1
-: уменьшите счётчик на 1
=: выведите текущее значение счётчика
x: завершите работу программы
*/


class Counter
{
public:
    void Set_by1()
    {
        this->user_input = 1;
    }
    int Set_by_user(int user_input)
    {
        this->user_input = user_input;
        return user_input;
    }
    int Increment(int user_input)
    {
        return this->user_input += 1;
    }
    int Decrement(int user_input)
    {
        return this->user_input -= 1;
    }
    int Get_value(int user_input)
    {
        return this->user_input;
    }

private:

    int user_input;
};

/*char Case_commands(char command)
{
    Counter commands;
    switch (command)
    {
    case '+':
    {
        return commands.Increment(); 
        break;
    }
    case '-':
    {
        return commands.Decrement();
        break;
    }
    case '=':
    {
        cout << commands.Get_value() << endl;
        break;
    }
}*/

int main()
{
    setlocale(LC_ALL, "Ru");

    Counter command_counter;

    int user_input = 0;
    char command = {};
    string answer;

    cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    cin >> answer;
    if (answer == "yes")
    {
        cout << "Введите свое число: ";
        cin >> user_input;
        command_counter.Set_by_user(user_input);
    }
    if (answer == "no")
    {
        command_counter.Set_by1();
    }

    do
    {
        cout << "Введите команду('+', '-', '=' или 'x') : ";
        cin >> command;
        if (command == '+')
        {
            command_counter.Increment(user_input);
        }
        if (command == '-')
        {
            command_counter.Decrement(user_input);
        }
        if (command == '=')
        {
            cout << command_counter.Get_value(user_input) << endl;
        }
        if (command == 'x')
        {
            cout << "До свидания!" << endl;
            break;
        }

    } while (command != 'x');

    /*cout << "Введите команду('+', '-', '=' или 'x') : ";
    cin >> command;

    while (command != 'x')
    {
        cout << endl << "Введите команду('+', '-', '=' или 'x') : ";
        cin >> command;
        if (command == '+')
        {
            command_counter.Increment(user_input);
        }
        if (command == '-')
        {
            command_counter.Decrement(user_input);
        }
        if (command == '=')
        {
            cout << command_counter.Get_value(user_input);
        }
        if (command == 'x')
        {
            cout << "До свидания!" << endl;
            break;
        }
    }*/

    return 0;
}
