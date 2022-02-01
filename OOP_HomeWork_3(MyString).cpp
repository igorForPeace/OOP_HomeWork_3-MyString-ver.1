#include "MyString.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	/*String a;
	cout << "============================" << endl;
	cout << a.GetString() << endl;
	cout << a.GetCapacity() << endl;
	cout << a.GetLenght() << endl;
	cout << "============================" << endl;
	String b("Hello world");
	String c = b;
	cout << a.GetString() << endl;
	cout << b.GetString() << endl;
	cout << c.GetString() << endl;
	cout << "============================" << endl;
	cout << b.GetString() << endl;
	cout << b.GetLenght() << endl;
	cout << b.GetCapacity() << endl;*/
	/*cout << "============================" << endl;
	a.SetString("nice weather!");
	cout << a.GetString() << endl;
	cout << a.GetLenght() << endl;
	cout << a.GetCapacity() << endl;
	cout << "============================" << endl;
	a.Clear();
	cout << a.GetString() << endl;
	cout << a.GetLenght() << endl;
	cout << a.GetCapacity() << endl;
	cout << "============================" << endl;
	a.ShringToFit();
	cout << a.GetLenght() << endl;
	cout << a.GetCapacity() << endl;
	cout << "============================" << endl;
	a.SetString("nice weather!");
	a.ShringToFit();
	cout << a.GetString() << endl;
	cout << a.GetLenght() << endl;
	cout << a.GetCapacity() << endl;*/



	/*cout << "============================" << endl;
	String b("Hello this world!");
	cout << b.GetString() << endl;
	cout << b.GetLenght() << endl;
	cout << b.GetCapacity() << endl;
	for (int i = 0; i < b.GetLenght(); i++)
	{
		cout << b.GetCharAt(i) << endl;
	}*/

	/*String B("Hello");
	B.PrintLn();*/


	/*String a;
	a.GetLine();
	a.PrintLn();
	cout << a.GetLenght() << endl;
	cout << a.GetCapacity() << endl;*/

	/*String a("Hello world!");
	a.PrintLn();
	cout << a.GetLenght() << endl;
	cout << a.GetCapacity() << endl;
	cout << a.GetCharArray() << endl;*/


	// сравнение строк 
	/*String a("Hello World!");
	String b("Hello World!");
	cout << boolalpha<< (bool)a.CompareTo(b) << endl;*/


	// сравнение строк char*
	/*String a("Hello World!");
	char* tmp = new char[80];
	strcpy_s(tmp, 79, "Hello World!");
	cout << boolalpha << (bool)a.CompareTo(tmp) << endl;
	delete[] tmp;*/


	// соединение двух строк
	/*String a("Hello");
	String b("World");
	a.PrintLn();
	b.PrintLn();
	a.Concat(b);
	a.PrintLn();
	a.ShowInfo();*/



	/*String a("Hello");
	a.ShowInfo();
	cout << "===========" << endl;
	char* tmp = new char[80];
	strcpy_s(tmp, 79, " World!");
	a.Concat(tmp);
	a.ShowInfo();
	delete[] tmp;*/


	/*нахождение в строке элементов другой строки
	*/




	/*String a("Perturbator");
	String b("turbe");
	cout << boolalpha << a.Contains(b) << endl;*/



	// нахождение в окончании строки другую строку
	/*String a("HelloWorld");
	a.ShowInfo();
	String b("ed");
	b.ShowInfo();
	cout << boolalpha << a.EndsWith(b) << endl;*/


	// строка начинаетс€ другой строкой

	/*String a("Hello World");
	String b("hello W");
	a.ShowInfo();
	b.ShowInfo();
	cout << boolalpha << a.StartsWith(b) << endl;*/

	// возврат индекса символа
	
	//String a("Hello World");
	//a.ShowInfo();
	//cout << a.IndexOf('w') << endl;

	/*String a("Hello World");*/
	/*a.ShowInfo();*/
	/*cout << a.LastIndexOf('r') << endl;*/


	//удаление всех символов до конца строки, начина€ от переданного индекса
	/*String a("Hello world!");
	a.ShowInfo();
	a.Remove(4);
	a.ShowInfo();*/

	//удаление count символов, начина€ от индекса start 
	/*String a("alexander");
	a.ShowInfo();
	a.Remove(2,3);
	a.ShowInfo();*/

	//мен€ет в строке все найденные символы R на переданный символ Z
	/*String a("alexander");
	a.ShowInfo();
	a.Replace('e', 'b');
	a.ShowInfo();*/

	//привод к нижнему регистру(в том числе и дл€ русского текста)
	/*String a("»√ќ–≈Ў» ");
	a.ShowInfo();
	a.ToLower();
	a.ShowInfo();
	cout << "===========================" << endl;
	String b("ALEXANDER");
	b.ShowInfo();
	b.ToLower();
	b.ShowInfo();*/

	//привод к верхнему регистру (в том числе и дл€ русского текста)
	/*String a("игорешик");
	a.ShowInfo();
	a.ToUpper();
	a.ShowInfo();
	cout << "========================" << endl;
	String b("alexander");
	b.ShowInfo();
	b.ToUpper();
	b.ShowInfo();*/

	//убирает лишние пробелы
	/*String a(" i have bought bear ");
	a.ShowInfo();
	a.Trim();
	a.ShowInfo();*/

	// реверс
	/*String a("Hello World!");
	a.ShowInfo();
	a.Reverse();
	a.ShowInfo();*/
	

	// сортировка по алфавиту
	/*String a("fggkjsklzggrgjnlaz");
	a.ShowInfo();
	a.SortAZ();
	a.ShowInfo();
	cout << "==========================" << endl;
	String b("gbfjgbskgkruaz");
	b.ShowInfo();
	b.SortZA();
	b.ShowInfo();
	cout << "==========================" << endl;
	String c("паотпдытпкыдптж€а");
	c.ShowInfo();
	c.SortAZ();
	c.ShowInfo();
	cout << "==========================" << endl;
	String d("протауггрф€тплкыдп");
	d.ShowInfo();
	d.SortZA();
	d.ShowInfo();*/

	// случайна€ сортировка
	/*String a("Hello World!");
	a.ShowInfo();
	a.Shuffle();
	a.ShowInfo();*/

	String a;
	a.ShowInfo();
	a.RandomFill();
	a.ShowInfo();






	return 0;
}