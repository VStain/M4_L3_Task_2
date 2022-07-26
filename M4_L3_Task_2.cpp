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
    void Increase(int user_input)
    {
        this->user_input += 1;
    }
    void Decrease(int user_input)
    {
        this->user_input -= 1;
    }
    int Show(int user_input)
    {
        return this->user_input;
    }
    /*void Exit(char exit)
    {
        if (exit == 'x')
        {
            cout << "До свидания!";
        }
    }*/
private:

    int user_input;
};

char Case_commands(char command)
{
    /*switch (command)
    {
    case Commands::Increment: counter.increment(); break;
    case Commands::Decremenet: counter.decrement(); break;
    case Commands::Show: cout << counter.getValue() << endl; break;*/
}

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
        cout << endl << "Введите команду('+', '-', '=' или 'x') : ";
        cin >> command;
        if (command == 'x')
        {
            cout << "До свидания!" << endl;
            break;
        }
        cout << Case_commands(command);
    } while (command != 'x');
    //counter.Increase(user_input);
    //cout << counter.Show(user_input) << endl;

    return 0;
}
