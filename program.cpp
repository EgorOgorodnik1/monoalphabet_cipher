#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void encrypt(const string &alphabet_start, const string &alphabet_shifr, string &user_text, int &count_first, int &count_second)
{//Шифрование
	for (count_first = 0; count_first < user_text.length(); count_first++)
	{
		for (count_second = 0; count_first < alphabet_start.length(); ++count_second)
		{
			if (user_text[count_first] == alphabet_start[count_second])
			{
				user_text[count_first] = alphabet_shifr[count_second];

				break;
			}
		}
	}
}

void decrypt(const string& alphabet_start, const string& alphabet_shifr, string& user_text, int& count_first, int& count_second)
{//Дешифрование
	for (count_first = 0; count_first < user_text.length(); count_first++)
	{
		for (count_second = 0; count_second < alphabet_shifr.length(); ++count_second)
		{
			if (user_text[count_first] == alphabet_shifr[count_second])
			{
				user_text[count_first] = alphabet_start[count_second];

				break;
			}
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    string alphabet_start = "QWERTYUIOPASDFGHJKLZXCVBNM01234567890qwertyuiopasdfghjklzxcvbnmЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮюбьтимсчяэждлорпавыфъхзщшгнекуцйёЁ~`!.,@#$%^&?*()_-+=<>{}[]:;/| ";
    string alphabet_shifr = "ЙФЯЦЫЧУВСКАМЕПИНРТГОЬШЛБЩДЮЗЖЭХЪЁюбьтимсчяфывапролджэъхзщшгнеку]|QWERTYUIOPASDFGHJKLZXCVBNM~`!@#$%^&?()_-+=№;:/*,. {}<>[цй0123456789mnbvcxzasdfghjklpoiuytrewq'";
	string user_text;
	int count_first = 0, count_second = 0;

	getline(cin,user_text);

	//Тест одноалфавитного шифрования
	encrypt(alphabet_start, alphabet_shifr, user_text, count_first, count_second);
	cout << "Encryption:"<< user_text << endl;
	decrypt(alphabet_start, alphabet_shifr, user_text, count_first, count_second);
	cout << "Decryption:" << user_text << endl;
	
	return 0;
}
