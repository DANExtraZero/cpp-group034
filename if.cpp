#include <iostream>
using namespace std;

int main()
{
    //***УСЛОВИЯ***
    int a;
    cin >> a;
    //x % y возвращает остаток от деления x на y
    if (a % 2 == 0) cout << "a is even" << '\n';  //что делать, когда условие истинно
    else cout << "a is odd" << "\n\n";  //что делать в противном случае
    //базовый синтаксис такой. Если мы не хотим ничего делать, когда условие ложно, else можно не писать

    //если в случае истинности условия мы хотим написать несколько строк кода, блок кода заключается в {}.
    //То же касается else
    if (a % 2 == 0) {
        cout << "a is even\n";
        cout << "ass we can\n\n";
    }


    //Тернарный оператор. Если условие и код в результате проверки не слишком громоздкие, можно упростить
    //себе жизнь, используя тернарный оператор. Синтаксис у него такой:
    //  условие ? команда, если условие истинно : команда, если ложно
    cout << "a is " << (a % 2 == 0 ? "even" : "odd") << "\n\n";
    //приоритет тернарного оператора ниже, чем приоритет оператора <<, поэтому его здесь необходимо взять в скобки.
    //Если этого не сделать, выведется "a is 1" или "a is 0", так как 1 или 0 - результат логического выражения,
    //стоящего в условии. Потом уже выполнится тернарный оператор, который от безысходности ничего не выведет,
    //так как cout << уже выполнился


    //switch. Иногда мы хотим проверить одну переменную или выражение на соответствие нескольким условиям.
    //Конечно, это можно сделать комбинацией нескольких if/else. Например:
    int x;
    cin >> x;
    if (x % 10 == 1)
        cout << 1 << '\n';
    else if (x % 10 == 2)
        cout << 2 << '\n';
    else if (x % 10 == 3)
        cout << 3 << '\n';
    else if (x % 10 == 4)
        cout << 4 << '\n';  //выясняем, какая у числа последняя цифра.
    else if (x % 10 == 5)   //Только в реальном коде такое не напишите, очень вас прошу
        cout << 5 << '\n';
    else if (x % 10 == 6)
        cout << 6 << '\n';
    else if (x % 10 == 7)
        cout << 7 << '\n';
    else if (x % 10 == 8)
        cout << 8 << '\n';
    else if (x % 10 == 9)
        cout << 9 << '\n';
    else
        cout << 0 << '\n';

    //всё это непотребство можно записать иначе при помощи оператора switch. На вход подаётся переменная или выражение,
    //которое проверяется на равенство со значениями, указанными после лейблов case. На вход нельзя подавать числа с
    //плавающей точкой. Как мы убеждались ранее, когда говорили про типы данных, у них особые отношения с оператором ==

    switch (x % 10) {
        case 1:
            cout << 1 << '\n';
            break;
        case 2:
            cout << 2 << '\n';
            break;
        case 3:
            cout << 3 << '\n';
            break;
        case 4:
            cout << 4 << '\n';
            break;
        case 5:
            cout << 5 << '\n';
            break;
        case 6:
            cout << 6 << '\n';
            break;
        case 7:
            cout << 7 << '\n';
            break;
        case 8:
            cout << 8 << '\n';
            break;
        case 9:
            cout << 9 << '\n';
            break;
        default:   //команда по умолчанию. Выполняется, если не сработал ни один из кейсов.
            cout << 0 << '\n';  //Если default не нужен, его можно не писать
            break;
    }
    //switch имеет одну проблему. Если условие истинности один раз сработало, то он выполнит вообще все команды,
    // которые идут в case далее, даже если для них условие не выполняется. Чтобы избежать этого,
    // его надо останавливать командой break. Например, последняя цифра 8. Тогда без break он выведет 8, 9 и 0.
    // (в общем-то, я поэтому switch ни разу не использовал в нормальном коде). Я бы посоветовал вам не забывать
    //писать break, но лучше посоветую не использовать эту гадость

    switch(x) {
        case 1:
        case 2:  //это я к тому, что если результат разных кейсов одинаков, можно сделать вот так.
        case 3:  //при х, равном 1, 2 или 3, выведется abc
            cout << "abc" << '\n';
            break;
        case 4:
            cout << "qwe" << '\n';
            break;
    }
}