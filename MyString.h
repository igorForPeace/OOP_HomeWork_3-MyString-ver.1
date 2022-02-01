#pragma once
#include "All_libraries.h"
class String
{
private:
	char* text;
	unsigned int lenght;
	unsigned int capacity;
	void Initialize(const char* str, unsigned int capacity);
public:
	String(const char* text, unsigned int capacity );
	String();
	String(const char* text);
	explicit String(unsigned int capacity);
	String(const String& original);
	~String();
	const char* GetString() const;
	void SetString(const char* text);
	int GetLenght() const;
	int GetCapacity() const;
	void Clear();
	void ShringToFit();
	void ShowInfo() const;
	
	char GetCharAt(unsigned int index);
	void Print(); //показ строки на экран
	void PrintLn();//показ строки на экран с переводом курсора на следующую строку
	void GetLine(); // ввод строки с клавиатуры
	const char* GetCharArray() const; //возврат константного указателя на массив символов строки
	int CompareTo(String& other); // сравнение двух строк
	int CompareTo(char* text); // сравнение нашей строки с массивом символов 
	void Concat(String& other); // соединение двух строк
	void Concat(char* tmp); // соединение строки с массивом типа чар

	bool Contains(String& other); // наличие в строке элементы второй строки
	bool EndsWith(String& other); // строка заканчивается другой строкой
	bool StartsWith(String& other); // строка начинается другой строкой

	int IndexOf(char ch); // нахождение в строке символа
	int LastIndexOf(char ch);

	void Remove(int index); // удаление всех символов до конца строки, начиная от переданного индекса
	void Remove(int start, int count); // удаление count символов, начиная от индекса start
	void Replace(char R, char Z); // меняет в строке все найденные символы R на переданный символ Z
	String& ToLower(); // привод к нижнему регистру(в том числе и для русского текста)
	String& ToUpper(); // привод к верхнему регистру(в том числе и для русского текста)
	void Trim(); // убирает лишние пробелы в начале и в конце строки
	void Reverse(); // переворачивание строки

	void SortAZ(); //сортировка всех символов строки в алфавитном порядке от А до Я
	void SortZA();

	void Shuffle(); // случайное перемещение элементов в массиве
	void RandomFill(); // заполнение строки случайными символами(на весь capacity)
};

