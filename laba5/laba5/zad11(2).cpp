//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
////�������� ������. �.�.�, ���� ��������, �����, �������, ����� ������ ��� �����, ���������. ����� �� �������.
//
//
//union MyUn {
//	char* goC = new char[15];
//	int* goI;
//} mun;
//
//struct Byte {
//	unsigned day : 5;
//	unsigned month : 4;
//	unsigned year : 11;
//};
//
//struct Dude {
//	struct Byte goB;
//	char* firstName = new char[15];
//	char* lastName = new char[15];
//	char* patronymic = new char[15];
//	char* address = new char[30];
//	char* phoneNumb = new char[15];
//};
//
//void show(struct Dude Obj[], const int all) {
//	system("cls");
//	printf(" �\tLastName\tFirstName\tPatronymic\tDate of birth\tAddress\t\tPhone number\n");
//	printf("==============================================================================================\n");
//
//	for (int i = 0; i < all; i++) {
//		printf(" %d\t%-10s\t%-10s\t%-10s\t%d.%d.%d\t%-15s\t%-10s\n", i + 1, Obj[i].lastName, Obj[i].firstName, Obj[i].patronymic, Obj[i].goB.day, Obj[i].goB.month, Obj[i].goB.year, Obj[i].address, Obj[i].phoneNumb);
//	}
//}
//
//
//void main() {
//	setlocale(LC_ALL, "ru");
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	const int allMen = 2;
//	Dude goD[allMen];
//	int myDay, myMonth, myYear;
//
//	for (int i = 0; i < allMen; i++) {
//		printf("Lastname is ");
//		_flushall();
//		gets_s(goD[i].lastName, 15);
//		printf("Firstname is ");
//		gets_s(goD[i].firstName, 15);
//		printf("Patronymic is ");
//		gets_s(goD[i].patronymic, 15);
//		printf("Day is ");
//		scanf_s("%d", &myDay);
//		goD[i].goB.day = myDay;
//		printf("Month is ");
//		scanf_s("%d", &myMonth);
//		goD[i].goB.month = myMonth;
//		printf("Year is ");
//		scanf_s("%d", &myYear);
//		goD[i].goB.year = myYear;
//		printf("Address is ");
//		cin.get();
//		gets_s(goD[i].address, 30);
//		printf("Phone number is ");
//		gets_s(goD[i].phoneNumb, 15);
//	}
//
//	show(goD, allMen);
//
//
//	do {
//		printf("\n1)������� '0' ����� �����\n2)������� '1' ����� ������ � �������� � ������� ��\n");
//		int choise;
//		scanf_s("\n%d", &choise);
//
//		if (choise) {
//			system("cls");
//			printf("������� ������� ��������, ������ � ������� ������ �������: ");
//			char str[15];
//			int myI;
//			cin >> str;
//
//			for (int i = 0; i < allMen; i++) {
//				if (strcmp(goD[i].lastName, str) == 0) {
//					SetConsoleTextAttribute(h, 2);
//					printf("\n1)�������: %s\n2)���: %s\n3)��������: %s\n", goD[i].lastName, goD[i].firstName, goD[i].patronymic);
//					SetConsoleTextAttribute(h, 4);
//					printf("4)���� ��������(������ �������): %d.%d.%d\n", goD[i].goB.day, goD[i].goB.month, goD[i].goB.year);
//					SetConsoleTextAttribute(h, 2);
//					printf("5)�����: %s\n6)����� ��������: %s\n", goD[i].address, goD[i].phoneNumb);
//					myI = i;
//					SetConsoleTextAttribute(h, 7);
//					break;
//				}
//			}
//
//			printf("��� �� ����� �� ������ ��������?(1-6(����� 4)): ");
//
//			int choise2;
//			scanf_s("%d", &choise2);
//
//			switch (choise2) {
//			case 1:
//				goD[myI].lastName = (char*)"";
//				break;
//			case 2:
//				goD[myI].firstName = (char*)"";
//				break;
//			case 3:
//				goD[myI].patronymic = (char*)"";
//				break;
//			case 5:
//				goD[myI].address = (char*)"";
//				break;
//			case 6:
//				goD[myI].phoneNumb = (char*)"";
//				break;
//			}
//
//			SetConsoleTextAttribute(h, 2);
//			printf("\n1)�������: %s\n2)���: %s\n3)��������: %s\n", goD[myI].lastName, goD[myI].firstName, goD[myI].patronymic);
//			SetConsoleTextAttribute(h, 4);
//			printf("4)���� ��������(������ �������): %d.%d.%d\n", goD[myI].goB.day, goD[myI].goB.month, goD[myI].goB.year);
//			SetConsoleTextAttribute(h, 2);
//			printf("5)�����: %s\n6)����� ��������: %s\n", goD[myI].address, goD[myI].phoneNumb);
//			SetConsoleTextAttribute(h, 7);
//
//		}
//		else exit(0);
//
//	} while (true);
//}