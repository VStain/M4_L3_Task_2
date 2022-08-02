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
    /*void Set_by1()
    {
        this->user_input = 1;
    }
    int Set_by_user(int user_input)
    {
        this->user_input = user_input;
        return user_input;
    }*/
    void Increment()
    {
        this->user_input += 1;
    }
    void Decrement()
    {
        this->user_input -= 1;
    }
    int Get_value()
    {
        return this->user_input;
    }
    Counter(int user_input)
    {
        this->user_input = user_input;
    }
    Counter()
    {
        user_input = 1;
    }

private:

    int user_input;
};

enum class Commands
{
    Increment = '+',
    Decrement = '-',
    Get_value = '=',
};



int main()
{
    setlocale(LC_ALL, "Ru");

    Counter command_counter;

    int user_input = 0;
    char command = {};
    string answer;

    while (answer != "yes" && answer != "no")
    {
        cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
        cin >> answer;
        if (answer == "yes")
        {
            cout << "Введите свое число: ";
            cin >> user_input;
            Counter Counter(user_input);
            //command_counter.Set_by_user(user_input);
        }
        if (answer == "no")
        {
            Counter Сounter();
            //command_counter.Set_by1();
        }
    }


    do
    {
        cout << "Введите команду ('+', '-', '=' или 'x') : ";
        cin >> command;
        if (command != '+' && command != '-' && command != '=' && command != 'x')
        {
            cout << "Неправильная команда!\t";
        }
        if (command == 'x')
        {
            cout << "До свидания! ";
        }
        else
        {
            switch (static_cast<Commands>(command))
            {
            case Commands::Increment:
            {
                command_counter.Increment();
                break;
            }
            case Commands::Decrement:
            {
                command_counter.Decrement();
                break;
            }
            case Commands::Get_value:
            {
                cout << command_counter.Get_value() << endl;
                break;
            }
            }
        }
    } while (command != 'x');

    /* ВАРИАНТ С ЦИКЛОМ DO WHILE
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

    } while (command != 'x');*/

    /* ВАРИАНТ С WHILE
    cout << "Введите команду('+', '-', '=' или 'x') : ";
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
