#include <iostream>
#include <string>
using namespace std;
/*if (cin.get() == '\n')
{
system("cls");
}*/
int x, n, y, i = 0, ModifyRoll, r, delroll, t1, t3, t4, t5, t6, t7, t8, t9; string t2;
int m = 0; int rep[100]; int rr = 0;
class studentinfo
{
private:
	string studentName[100];
	int StudentRollNumber[100], roll;
	float  per[100], avr[100], phy[100], chem[100], math[100], eng[100], CS[100];
	char grade[100];

public:

	void resultMenu()
	{
		system("cls");
		cout << endl;
		cout << "      RESULT MENU         " << endl;
		cout << endl;
		cout << "      1.CLASS RESULT        " << endl;
		cout << endl;
		cout << "      2.STUDENT REPORT CARD     " << endl;
		cout << endl;
		cout << "      3.BACK TO MAIN MENU      " << endl;
		cout << endl;
		cout << "  Enter Choice (1/2/3) ?  ";
		cin >> r;
		if (r > 0 && r <= 3)
		{
			switch (r)

			{
			case 1:
			{
					  if (cin.get() == '\n')
					  {
						  system("cls");
					  }
					  cout << "      ALL STUDENTS RECORDS      " << endl;
					  cout << endl;
					  cout << endl;
					  cout << "===================================================================" << endl;
					  cout << "  R.NO        NAME      PHY   CHE   MATH   ENG   CS   %AGE   GRADE " << endl;
					  cout << "===================================================================" << endl;
					  for (int s = 0; s <= 100; s++)
					  {
						  avr[s] = (phy[s] + chem[s] + math[s] + eng[s] + CS[s]) / 5;
						  per[s] = (avr[s] * 100) / 100;
						  if (per[s] >= 85 && per[s] <= 100)
						  {
							  grade[s] = 'A';
							  cout << "   " << StudentRollNumber[s] << "          " << studentName[s] << "     " << phy[s] << "     " << chem[s] << "     " << math[s] << "     " << eng[s] << "     " << CS[s] << "     " << per[s] << "%" << "     " << grade[s];
						  }
						  else if (per[s] >= 70 && per[s] < 85)
						  {
							  grade[s] = 'B';
							  cout << "   " << StudentRollNumber[s] << "          " << studentName[s] << "     " << phy[s] << "     " << chem[s] << "     " << math[s] << "     " << eng[s] << "     " << CS[s] << "     " << per[s] << "%" << "     " << grade[s];
						  }
						  else if (per[s] >= 55 && per[s] < 70)
						  {
							  grade[s] = 'C';
							  cout << "   " << StudentRollNumber[s] << "          " << studentName[s] << "     " << phy[s] << "     " << chem[s] << "     " << math[s] << "     " << eng[s] << "     " << CS[s] << "     " << per[s] << "%" << "     " << grade[s];
						  }
						  else if (per[s] >= 45 && per[s] < 55)
						  {
							  grade[s] = 'D';
							  cout << "   " << StudentRollNumber[s] << "          " << studentName[s] << "     " << phy[s] << "     " << chem[s] << "     " << math[s] << "     " << eng[s] << "     " << CS[s] << "     " << per[s] << "%" << "     " << grade[s];
						  }
						  else if (per[s] >= 0 && per[s] < 45)
						  {
							  grade[s] = 'F';
							  cout << "   " << StudentRollNumber[s] << "          " << studentName[s] << "     " << phy[s] << "     " << chem[s] << "     " << math[s] << "     " << eng[s] << "     " << CS[s] << "     " << per[s] << "%" << "     " << grade[s];
						  }
						  cin.get() == '\n';
						  resultMenu();
					  }

			}
			case 2:
			{
					  searchStudetReacord();

			}
			case 3:
			{
					  MainMenu();

			}
			default:
				break;
			}
		}


	}
	void bodyentryMenu()
	{
		if (cin.get() == '\n')
		{
			system("cls");
		}
		cout << "     ENTRY MENU   " << endl;
		cout << "     1.CREAT STUDENT RECORD    " << endl;
		cout << "     2.DISPLAY ALL STUDENTS RECORD " << endl;
		cout << "     3.SEARCH STUDENT RECORD  " << endl;
		cout << "     4.MODIFY STUDENT RECORD  " << endl;
		cout << "     5.DELETE STUDENT RECORD  " << endl;
		cout << "     6.BACK TO MAIN MENU      " << endl;
		cout << "PLEASE ENTER YOUR CHOICE (1-6) : " << endl;
		cin >> x;
		if (x > 0 && x <= 6)
		{
			switch (x)
			{
			case 1:
			{  system("cls");
			for (; i <= 100;)
			{
				cout << " Enter The roll number of Student : ";
				cin >> StudentRollNumber[i]; //0
				if ((StudentRollNumber[i] >= 0) && (StudentRollNumber[i] <= 100))
				{
					cout << endl;
					cout << endl;
					cin.get() == '\n';

					cout << "Enter The Name of Student : ";
					getline(cin, studentName[i]);
					if (studentName[i] != " ")
					{
						cout << endl;
						cout << "Enter The Marks of physics out of 100 : ";
						cin >> phy[i];
						if ((phy[i] >= 0) && (phy[i] <= 100))
						{
							cout << endl;
							cout << "Enter The Marks of chemistry out of 100 : ";
							cin >> chem[i];
							if ((chem[i] >= 0) && (chem[i] <= 100))
							{
								cout << endl;
								cout << "Enter The Marks of maths out of 100 : ";
								cin >> math[i];
								if ((chem[i] >= 0) && (chem[i] <= 100))
								{
									cout << endl;
									cout << "Enter The Marks of English out of 100 : ";
									cin >> eng[i];
									if ((chem[i] >= 0) && (chem[i] <= 100))
									{
										cout << endl;
										cout << "Enter The Marks of Computer Science out of 100 : ";
										cin >> CS[i];
										if ((chem[i] >= 0) && (chem[i] <= 100))
										{
											cout << endl;
										}
										else
										{
											cout << "invalid marks.. press << Enter >> to create valid record  " << endl;
											cout << endl;
											cin.get() == '\n';
										}
									}
									else
									{
										cout << "invalid marks.. press << Enter >> to create valid record  " << endl;
										cout << endl;
										cin.get() == '\n';
									}
								}
								else
								{
									cout << "invalid marks.. press << Enter >> to create valid record  " << endl;
									cout << endl;
									cin.get() == '\n';
								}
							}
							else
							{
								cout << "invalid marks.. press << Enter >> to create valid record  " << endl;
								cout << endl;
								cin.get() == '\n';
							}
						}
						else
						{
							cout << "invalid marks.. press << Enter >> to create valid record  " << endl;
							cout << endl;
							cin.get() == '\n';
						}
					}
					else
					{
						cout << "invalid marks.. press << Enter >> to create valid record  " << endl;
						cout << endl;
						cin.get() == '\n';
					}
				}
				else
				{
					cout << "invalid roll number press << Enter >> to create valid record  " << endl;
					cout << endl;
					cin.get() == '\n';
				}
				i++;
				break;
			}
			bodyentryMenu();

			case 2:
			{

					  DisplayStudentRecord();
			}
			case 3:
			{

					  searchStudetReacord();
			}
			case 4:
			{

					  ModifyStudetRecord();
			}
			case 5:
			{

					  deleteStudentRecord();
			}
			case 6:
			{

					  MainMenu();
			}

			default:
				break;
			}
			}
		}
	}
	void deleteStudentRecord()
	{
		system("cls");
		cout << " enter roll number of student to delete his/her information :";
		cin >> delroll;
		for (int d = 0; d <= 100; d++)
		{
			if (delroll == StudentRollNumber[d])
			{
				for (; d < 6; d++)
				{
					t1 = StudentRollNumber[d];
					StudentRollNumber[d] = StudentRollNumber[d + 1];

					t2 = studentName[d];
					studentName[d] = studentName[d + 1];

					t3 = phy[d];
					phy[d] = phy[d + 1];

					t4 = chem[d];
					chem[d] = chem[d + 1];

					t5 = math[d];
					math[d] = math[d + 1];

					t6 = eng[d];
					eng[d] = eng[d + 1];

					t7 = CS[d];
					CS[d] = CS[d + 1];

					t8 = per[d];
					per[d] = per[d + 1];

					t9 = grade[d];
					grade[d] = grade[d + 1];
				}
			}
		}
		cout << "<<       the student record has been deleted successfully !      >>" << endl;
		(cin.get() == '\n');
		bodyentryMenu();
	}
	void searchStudetReacord()
	{
		system("cls");
		cout << "please enter the roll number :  " << endl;
		cin >> roll;
		for (int s = 0; s <= 100; s++)
		{
			if (roll == StudentRollNumber[s])
			{
				cout << "Roll number of student : " << StudentRollNumber[s] << endl;
				cout << "name of student : " << studentName[s] << endl;
				cout << "marks in physics : " << phy[s] << endl;
				cout << "marks im chemistry : " << chem[s] << endl;
				cout << "marks in maths : " << math[s] << endl;
				cout << "marksin english : " << eng[s] << endl;
				cout << "computer science: " << CS[s] << endl;
				avr[s] = (phy[s] + chem[s] + math[s] + eng[s] + CS[s]) / 5;
				per[s] = (avr[s] * 100) / 100;
				cout << "persentage of student is : " << per[s] << endl;
				if (per[s] >= 85 && per[s] <= 100)
				{
					grade[s] = 'A';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 70 && per[s] < 85)
				{
					grade[s] = 'B';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 55 && per[s] < 70)
				{
					grade[s] = 'C';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 45 && per[s] < 55)
				{
					grade[s] = 'D';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 0 && per[s] < 45)
				{
					grade[s] = 'F';
					cout << "student grade is :" << grade[s] << endl;
				}
				else
					cout << "<<       RECORD NOT FOUND       >>" << endl;
			}

			(cin.get() == '\n');
			bodyentryMenu();
		}
	}
	void DisplayStudentRecord()
	{
		system("cls");
		cout << "please enter the roll number :  " << endl;

		for (int j = 0; j <= 100; j++)
		{
			cin >> roll;
			if (StudentRollNumber[j] = roll)
			{
				cout << "Roll number of student : " << StudentRollNumber[j] << endl;
				cout << "name of student : " << studentName[j] << endl;
				cout << "marks in physics : " << phy[j] << endl;
				cout << "marks im chemistry : " << chem[j] << endl;
				cout << "marks in maths : " << math[j] << endl;
				cout << "marksin english : " << eng[j] << endl;
				cout << "computer science: " << CS[j] << endl;
				avr[j] = (phy[j] + chem[j] + math[j] + eng[j] + CS[j]) / 5;
				per[j] = (avr[j] * 100) / 100;
				cout << "persentage of student is : " << per[j] << "%" << endl;

				if (per[j] >= 85 && per[j] <= 100)
				{
					grade[j] = 'A';
					cout << "student grade is :" << grade[j] << endl;
				}
				else if (per[j] >= 70 && per[j] < 85)
				{
					grade[j] = 'B';
					cout << "student grade is :" << grade[j] << endl;
				}
				else if (per[j] >= 55 && per[j] < 70)
				{
					grade[j] = 'C';
					cout << "student grade is :" << grade[j] << endl;
				}
				else if (per[j] >= 45 && per[j] < 55)
				{
					grade[j] = 'D';
					cout << "student grade is :" << grade[j] << endl;
				}
				else if (per[j] >= 0 && per[j] < 45)
				{
					grade[j] = 'F';
					cout << "student grade is :" << grade[j] << endl;
				}

			}
			(cin.get() == '\n');
			bodyentryMenu();
		}
	}
	void plusStudentRecord()
	{
		system("cls");
		cout << "please enter the roll number :  " << endl;
		cin >> roll;
		for (int s = 0; s <= 100; s++)
		{
			if (roll == StudentRollNumber[s])
			{
				cout << "Roll number of student : " << StudentRollNumber[s] << endl;
				cout << "name of student : " << studentName[s] << endl;
				cout << "marks in physics : " << phy[s] << endl;
				cout << "marks im chemistry : " << chem[s] << endl;
				cout << "marks in maths : " << math[s] << endl;
				cout << "marksin english : " << eng[s] << endl;
				cout << "computer science: " << CS[s] << endl;
				avr[s] = (phy[s] + chem[s] + math[s] + eng[s] + CS[s]) / 5;
				per[s] = (avr[s] * 100) / 100;
				cout << "persentage of student is : " << per[s] << endl;
				if (per[s] >= 85 && per[s] <= 100)
				{
					grade[s] = 'A';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 70 && per[s] < 85)
				{
					grade[s] = 'B';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 55 && per[s] < 70)
				{
					grade[s] = 'C';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 45 && per[s] < 55)
				{
					grade[s] = 'D';
					cout << "student grade is :" << grade[s] << endl;
				}
				else if (per[s] >= 0 && per[s] < 45)
				{
					grade[s] = 'F';
					cout << "student grade is :" << grade[s] << endl;
				}
			}
			cout << endl;
			cout << endl;
			cout << "Enter the roll number for updating ";
			cin >> ModifyRoll;

			for (; m <= 100; m++)
			{
				if (ModifyRoll == roll)
				{
					cout << "Enter The Name Of The student : ";
					cin >> studentName[m];
					(cin.get() == '\n');
					cout << "Enter The marks of physics out of 100 : ";
					cin >> phy[m];
					(cin.get() == '\n');
					cout << "Enter the marks of chemistry out of 100 : ";
					cin >> chem[m];
					(cin.get() == '\n');
					cout << "Enter The Marks of math out of 100 : ";
					cin >> math[m];
					(cin.get() == '\n');
					cout << "Enter the marks of English out of 100 : ";
					cin >> eng[m];
					(cin.get() == '\n');
					cout << "Enter the Marks of computer science out of 100 : ";
					cin >> CS[m];
					cin.get() == '\n';
				}
				break;
			}
			cout << "              RECORD UPDATED                         ";

			(cin.get() == '\n');
			bodyentryMenu();
		}
	}

	void ModifyStudetRecord()
	{
		system("cls");
		plusStudentRecord();

	}
	void frontPage()
	{
		system("cls");
		cout << endl;
		cout << "              STUDENT          " << endl << endl;
		cout << "            REPORT CARD          " << endl << endl;
		cout << "              PROJECT            " << endl << endl;
		cout << endl;
		cout << "      MADE BY : DEBUG ENTITY GROUP         ";
		if (cin.get() == '\n')
		{
			system("cls");
		}
	}
	void MainMenu()
	{
		system("cls");
		cout << endl;
		cout << "          MAIN MENU         " << endl;
		cout << endl;
		cout << "      01. RESULT MENU    " << endl;
		cout << endl;
		cout << "      02. ENTRY/EDIT MENU" << endl;
		cout << endl;
		cout << "      03. EXIT           " << endl;
		cout << endl;
		cout << "  please select your option (1-3) :  ";
		cout << "  Enter Choice (1/2/3) ?  ";
		cin >> y;
		if (y > 0 && y <= 3)
		{
			switch (y)
			{
			case 1:
			{
					  resultMenu();
					  if (cin.get() == '\n')
					  {
						  system("cls");
					  }
			}
			case 2:
			{
					  bodyentryMenu();
					  if (cin.get() == '\n')
					  {
						  system("cls");
					  }
			}
			case 3:
			{
					  frontPage();
					  if (cin.get() == '\n')
					  {
						  system("cls");
					  }
			}
			default:
				break;
			}

		}
		if (cin.get() == '\n')
		{
			system("cls");
		}
	}
};


void main()
{

	studentinfo s1;
	s1.frontPage();
	s1.MainMenu();


	system("pause");
}