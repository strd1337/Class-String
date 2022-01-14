/*
Вариант 7:

b) Создать класс String – строку, используя динамическую память. Определить операторы
"+" –сложение строк, "=" и "+=" – присваивания, как методы класса. Определить операторы
сравнения "==", "!=", "<", ">", как дружественные функции. Операторы должны работать
как со String, так и с char*. Определить оператор "[]" для доступа к каждому символу в
отдельности. Перегрузить операторы ввода/вывода в поток.
*/


#include "BfuncLAB3.cpp"


int main(void) {
	
	SetConsoleCP(1251);				
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	
	String A, B, C;
	cout << "\nКак ваше имя?\n";
	cin >> A;
	cout << "\nНазвоите ваш год рождения." << endl;
	cin >> B;
	C = A + B;
	cout << "\nВаши данные: " << C;
	
	cout << endl;
	
	String D("\nСлужба поддержки."), E(D);
	D = " Оператор у микрофона.";
	E += D + "Подскажите, что случилось?\n";
	E += "Проблемы какие-то?";
	cout << E;
	
	cout << "\n\n";
	
	String S("Знаете что?");
	S = "Почему вы так разговариваете? " + S;
	cout << S << endl;
	
	cout << endl;
	
	String P("Присвоил сам себе.");
	P = P;
	cout << P << endl;
	
	cout << endl;
	
	String F("1"), G("2");
	cout << F << " > " << G;
	if (F > G)
		cout << "\nВы правы.\n";
	else
		cout << "\nВы не правы.\n";

	cout << F << " < " << G;
	if (F < G)
		cout << "\nВы правы.\n";
	else
		cout << "\nВы не правы.\n";
		
	cout << F << " == " << G;
	if (F == G)
		cout << "\nВы правы.\n";
	else
		cout << "\nВы не правы.\n";
	
	cout << F << " != " <<  "13";
	if (F != "13")
		cout << "\nВы правы.\n";
	else
		cout << "\nВы не правы.\n";
	
	cout << endl;
	
	String U("123456789ABCDEFabcdef");
	cout << U << endl;
	for (int i; i < U.lengthStr(); i++)
		cout << U[i] << endl; 
	
	cout << endl;
	cout << U << endl;
	U[0] = 'R';
	cout << U << endl;
	
	return 0;
}
