#include <iostream>
using namespace std;

int main()
{
    //***ТИПЫ ДАННЫХ***

    /*(это комментарий на несколько строк)
     * bool - логический тип данных. Принимает два значения - true и false.
     * true и false эквивалентны значениям 1 и 0. По ситуации они будут автоматически конвертироваться
     * в логические значения. Но с точки зрения кодстайла (и здравого смысла) лучше так всё-таки не делать.
     */
    bool f = true;
    bool g = false;
    // && - логическое "и"
    // || - логическое "или"
    cout << (f && g) << '\n'; // 0
    cout << (f || g) << "\n\n"; // 1
    // обратите внимание, что операторы && и || взяты в скобки. Дело в том, что они имеют достаточно низкий приоритет,
    //и поэтому компилятор может понять запись без скобок иначе. x << y - вполне нормальный оператор, вы с ним ещё
    //познакомитесь. Так что у компилятора хватает способов неправильно понять вашу идею - выражайтесь точнее.


    // int - целочисленный тип данных. Тут вроде всё понятно, так что поговорим про память. Числа в компьютере
    //представлены двоичном виде. В одном бите может лежать 0 или 1. Таким образом, например, в одном байте (8 бит)
    //может теоретически находиться 2^8 чисел. Так и живём.

    short int a1;  // 2 байта, целое число в диапазоне от –32768 до 32767
    int a2 = 2;  // обычно 4 байта (то же, что и long), но бывает и 2 (то же, что и short)
    long int a3;  // 4 байта, целое число в диапазоне от −2 147 483 648 до 2 147 483 647
    long long int a4; // 8 байт, целое число в диапазоне от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807
    // int можно опускать при записи и писать просто short, long и так далее
    unsigned int a5 = 10; //типы данных, начинающиеся с unsigned, используют память немного иначе. Память,
    //которую занимали отрицательные числа, используется для того, чтобы увеличить диапазон положительных чисел вдвое
    signed int a6 = 0; //signed - параметр по умолчанию, его можно не писать, антоним unsigned

    //немного об арифметике. Для упрощения жизни в плюсах существует несколько разных способов записывать арифметические
    //операции. Если мы хотим провести над переменной какую-то операцию так, чтобы результат оказался в этой же
    //переменной, можно использовать подобные конструкции:
    a5 += 3; //то же, что и a5 = a5 + 3;
    a2 /= 2; // a2 = a2 / 2;
    // Инкремент и декремент. Увеличить или уменьшить целочисленную переменную на 1 можно операциями x++ и x--
    // соответственно. Фирменная фишка плюсов, название отсюда же. Также существуют операции --x и ++x. Первый случай
    // называется постфиксным инкрементом/декрементом, а второй - префиксным. Разница в том, что префиксные операции
    // выполняются в тот момент, когда они встретились, а постфиксные - после остальных действий с переменной. Иными
    // словами, у ++х максимальный приоритет, а у х++ - минимальный. Пример:
    a1 = 1;
    a2 = 1;
    cout << ++a1 << ' '; // 2
    cout << a2++ << '\n'; // 1
    //при этом итоговое значение во всех переменных равно 2
    cout << a1 << ' ' << a2 << "\n\n";


    //числа с плавающей точкой. Вдаваться в подробности представления дробных чисел в компьютере не будем, ибо я уже
    //несколько часов пишу этот конспект и порядком устал. Лишь скажем, что, очевидно, невозможно честно представить в
    //компьютере, например, периодическую дробь - никакой памяти не хватит. Так что все дробные числа представлены в
    //компьютере с некоторой точностью и округляются после какого-то знака после запятой.
    float b1 = 14.88; // 4 байта
    double b2 = 9.11; // 8 байт => выше точность
    a1 = b1;
    cout << a1 << '\n'; // 14. При преобразовании в int дробная часть отбрасывается (не округляется!)
    cout << (0.1 + 0.2 == 0.3) << "\n\n"; // 0 (то есть, false) Почему? Всё дело как раз в точности. Если загуглить
    // "0.1 + 0.2 == 0.3", найдёте целый сайт, посвящённый исключительно этой проблеме. Там всё в подробностях расписано


    //char - символьный тип данных. Суть его в том, что в переменной лежит код символа в таблице ASCII, который,
    //собственно, превращается в этот символ при выполнении программы. Занимает 1 байт
    char c = 'F';
    cout << c << '\n'; //на часах уже 6 утра. Посвящается моему сну после написания конспекта
    cout << (int) c << '\n'; //70 - получили код символа 'F'
    cout << c + 2 << '\n'; //72 - char ведёт себя, как число
    cout << (char) (c + 2) << '\n'; //H - теперь вполне себе символ
    cout << (char) (c + 'a' - 'A') << '\n'; //f. Разберём это подробнее. В таблице ASCII алфавит прописных букв
    //находится отдельно от алфавита строчных. Не так важно, как они расположены друг относительно друга, главное,
    //что внутри алфавитов буквы идут строго по порядку. Поэтому расстояние между F и f такое же, как между A и a.
    //Пользуясь этой логикой, мы можем превратить любую прописную букву в строчную.
}