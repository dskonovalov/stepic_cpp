#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	//Ввод входной строки 
	string input_string;
	getline(cin, input_string);
	vector<string> arr;	
	int position = 0;
	//Создаем массив введённых слов
	for (int i = 0; i < input_string.size(); i++) {
		if (input_string[i] == 32)
		{
			string word = input_string.substr(position, i - position);
			arr.push_back(word);			
			position = i + 1;
		}
		//Считывание последнего слова
		else if (i == input_string.size() - 1)
		{
			string word = input_string.substr(position);
			arr.push_back(word);
		}
	}
	string result;
	int max = 0;
	//Поиск максимального слова
	for (int i = 0; i < arr.size(); i++)
		if (arr[i].size() > max)
			max = i;
	//Вывод найденного слова
	result = arr[max];
	cout << result;
	return 0;
}
