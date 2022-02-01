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
	void Print(); //����� ������ �� �����
	void PrintLn();//����� ������ �� ����� � ��������� ������� �� ��������� ������
	void GetLine(); // ���� ������ � ����������
	const char* GetCharArray() const; //������� ������������ ��������� �� ������ �������� ������
	int CompareTo(String& other); // ��������� ���� �����
	int CompareTo(char* text); // ��������� ����� ������ � �������� �������� 
	void Concat(String& other); // ���������� ���� �����
	void Concat(char* tmp); // ���������� ������ � �������� ���� ���

	bool Contains(String& other); // ������� � ������ �������� ������ ������
	bool EndsWith(String& other); // ������ ������������� ������ �������
	bool StartsWith(String& other); // ������ ���������� ������ �������

	int IndexOf(char ch); // ���������� � ������ �������
	int LastIndexOf(char ch);

	void Remove(int index); // �������� ���� �������� �� ����� ������, ������� �� ����������� �������
	void Remove(int start, int count); // �������� count ��������, ������� �� ������� start
	void Replace(char R, char Z); // ������ � ������ ��� ��������� ������� R �� ���������� ������ Z
	String& ToLower(); // ������ � ������� ��������(� ��� ����� � ��� �������� ������)
	String& ToUpper(); // ������ � �������� ��������(� ��� ����� � ��� �������� ������)
	void Trim(); // ������� ������ ������� � ������ � � ����� ������
	void Reverse(); // ��������������� ������

	void SortAZ(); //���������� ���� �������� ������ � ���������� ������� �� � �� �
	void SortZA();

	void Shuffle(); // ��������� ����������� ��������� � �������
	void RandomFill(); // ���������� ������ ���������� ���������(�� ���� capacity)
};

