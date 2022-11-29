#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    {
        setlocale(0, ".1251");
    }
    {
        std::cout << "Завдання 1" << '\n';
        {
            std::cout << "Задача 1" << '\n';
            float a;
            float b;
            float c;
            float p;
            float s;
            std::cout << "Введіть значення бокової строни ділянки:";
            std::cin >> a;
            std::cout << "Введіть значення верхньої строни ділянки:";
            std::cin >> b;
            std::cout << "Введіть значення нижньої строни ділянки:";
            std::cin >> c;
            p = a + a + b + c;
            s = (((static_cast<float>(c)) + b) / 4) * sqrt((4 * pow(a, 2)) - pow((c - b), 2));
            std::cout << "Периметр ділянки =" << " " << p << '\n';
            std::cout << "Площа ділянки =" << " " << s << '\n';
        }
        {
            std::cout << "Задача 2" << '\n';
            float m1;
            float m2;
            float m3;
            auto s1 = 8.5;
            auto s2 = 2.4;
            auto s3 = 4.1;
            std::cout << "Введіть к-ть масла у кг:";
            std::cin >> m1;
            std::cout << "Введіть к-ть сметани у кг:";
            std::cin >> m2;
            std::cout << "Введіть к-ть вершків у кг:";
            std::cin >> m3;
            auto maslo = m1 * s1;
            auto smetana = m2 * s2;
            auto vershky = m3 * s3;
            auto vse = maslo + smetana + vershky;
            std::cout << maslo << " " << "гривень потрібно для закупівлі" << " " << m1 << " " << "кілограмм масла." << '\n';
            std::cout << smetana << " " << "гривень потрібно для закупівлі" << " " << m2 << " " << "кілограмм сметани." << '\n';
            std::cout << vershky << " " << "гривень потрібно для закупівлі" << " " << m3 << " " << "кілограмм вершків." << '\n';
            std::cout << vse << " " << "гривень потрібно для закупівлі всього." << '\n';
        }
    }
    {
        std::cout << "Завдання 2" << '\n';
        {
            std::cout << "Варіант 17" << '\n';
            auto Ax = 0;
            auto Ay = 0;
            auto Bx = 17;
            auto By = 16;
            auto Cx = -17;
            auto Cy = 18;
            auto AB = sqrt(Bx + By);
            auto AC = sqrt((Cx * -1) + Cy);
            auto BC = sqrt((Cx * -2) + Cy);
            auto medi = (sqrt(2 * pow(AB, 2) + (2 * pow(BC, 2)) - (pow(AC, 2)))) / 2;
            auto p = (AB + AC + BC) / 2;
            auto r = sqrt(((p - AB) * (p - AC) * (p - BC)) / p);
            std::cout << "Медіана = " << medi << '\n';
            std::cout << "Радіус вписаного кола = " << r << '\n';
        }
    }
    {
        std::cout << "Завдання 3" << '\n';
        {
            std::cout << "Варіант 17" << '\n';
            std::cout << "Введіть значення m:";
            float m;
            std::cin >> m;
            auto Z1 = (sqrt(pow(3 * m + 2, 2) - 24 * m)) / (3 * sqrt(m) - (2 / sqrt(m)));
            auto Z2 = -sqrt(m);
            std::cout << "Z1 = " << Z1 << '\n';
            std::cout << "Z2 = " << Z2 << '\n';
        }
    }
    {
        std::cout << "Завдання 4" << '\n';
        {
            std::cout << "Варіант 17" << '\n';
            auto b = 3;
            std::cout << "Введіть значення X:";
            float x;
            std::cin >> x;
            auto t = pow(b, 2) + sqrt(b * x);
            auto a = log(t + pow(b, 2));
            auto y = exp(a + b);
            std::cout << "Y = " << y;
        }
    }
    {
        std::cout << "Завдання 5" << '\n';
        {
            std::cout << "Варіант 17" << '\n';
            std::cout << "Введіть значення m: ";
            float m;
            std::cin >> m;
            std::cout << "Введіть значення y: ";
            float y;
            std::cin >> y;
            auto rez = (pow(m, 2) + 2.8 * m + 0.355) / (cos(2 * y) - 1);
            std::cout << "Відповідь: " << rez;
        }
    }
}