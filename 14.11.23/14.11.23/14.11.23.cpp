#include <iostream>
using namespace std;

// проверка почты

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	bool flag = 0;
//	const char* login[4] = { ("@"),("."),("gmail"),("com") };
//	char* email = new char[100];
//	cout << "Введите почту: ";
//	gets_s(email, 100);
//	for (int i = 0; i < strlen(email); i++)
//	{
//		if (email == login[i] and strlen(email) > 5)
//		{
//			cout << "Почта корректна";
//			flag = true;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	if (flag == false)
//	{
//		cout << "Почта некорректна" << "\n";
//	}
//}

// генерация пароля

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(time(NULL));
//    int a;
//    cout << "Размер пароля: ";
//    cin >> a;
//    char* password = new char[a];
//    cout << "Пароль: ";
//    for (int f = 0; f < a; f++)
//    {
//        password[f] = 'a' + rand() % 26;
//        cout << password[f];
//    }
//    delete[] password;
//    return 0;
//}

// проверка на слова в предложении
int main()
{
	setlocale(LC_ALL, "Russian");
	int length;
	length = 50;
	char symbol;
	int word = 0;
	char* name = new char[length] {};
	cout << name;
	cout << "Введите текст: ";
	gets_s(name, length);
	cout << "Введите слово: ";
	cin >> symbol;
	for (int i = 0; i < strlen(name); i++)
	{
		cout << name[i] << "";
		if (name[i] == symbol)
		{
			word++;
		}
	}
	cout << "\n";
	cout << "Слово: " << word << "\n";

	delete[] name;
}