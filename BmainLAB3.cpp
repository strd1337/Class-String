/*
������� 7:

b) ������� ����� String � ������, ��������� ������������ ������. ���������� ���������
"+" ��������� �����, "=" � "+=" � ������������, ��� ������ ������. ���������� ���������
��������� "==", "!=", "<", ">", ��� ������������� �������. ��������� ������ ��������
��� �� String, ��� � � char*. ���������� �������� "[]" ��� ������� � ������� ������� �
�����������. ����������� ��������� �����/������ � �����.
*/


#include "BfuncLAB3.cpp"


int main(void) {
	
	SetConsoleCP(1251);				
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	
	String A, B, C;
	cout << "\n��� ���� ���?\n";
	cin >> A;
	cout << "\n�������� ��� ��� ��������." << endl;
	cin >> B;
	C = A + B;
	cout << "\n���� ������: " << C;
	
	cout << endl;
	
	String D("\n������ ���������."), E(D);
	D = " �������� � ���������.";
	E += D + "����������, ��� ���������?\n";
	E += "�������� �����-��?";
	cout << E;
	
	cout << "\n\n";
	
	String S("������ ���?");
	S = "������ �� ��� ��������������? " + S;
	cout << S << endl;
	
	cout << endl;
	
	String P("�������� ��� ����.");
	P = P;
	cout << P << endl;
	
	cout << endl;
	
	String F("1"), G("2");
	cout << F << " > " << G;
	if (F > G)
		cout << "\n�� �����.\n";
	else
		cout << "\n�� �� �����.\n";

	cout << F << " < " << G;
	if (F < G)
		cout << "\n�� �����.\n";
	else
		cout << "\n�� �� �����.\n";
		
	cout << F << " == " << G;
	if (F == G)
		cout << "\n�� �����.\n";
	else
		cout << "\n�� �� �����.\n";
	
	cout << F << " != " <<  "13";
	if (F != "13")
		cout << "\n�� �����.\n";
	else
		cout << "\n�� �� �����.\n";
	
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
