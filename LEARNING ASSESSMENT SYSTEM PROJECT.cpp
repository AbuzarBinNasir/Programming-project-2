#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
void start();

int main() {
	start();
    string name, regNumber, department;
    int score = 0;
    char answer;
    int choice;

    // Student Information
    cout << "\t\t\t\t\t\t\t\t\t\t====== Student Information ======\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\tEnter your full name: ";
    getline(cin, name);
    
    cout << "\t\t\t\t\t\t\t\t\t\tEnter your registration number: ";
    getline(cin, regNumber);
    
    cout << "\t\t\t\t\t\t\t\t\t\tEnter your department: ";
    getline(cin, department);

    system("cls");  // Clear screen before quiz starts

    cout << "\t\t\t\t\t\t\t\t\t\t=== Simple Quiz (5 Questions) ===\n";
    cout << "\t\t\t\t\t\t\t\t\t\tWelcome, " << name << "!\n\n";

    // Question 1
    cout << "\t\t\t\t\t\t\t\t\t\t1. Capital of Pakistan?\n";
    cout << "\t\t\t\t\t\t\t\t\t\tA) Karachi   B) Lahore   C) Islamabad   D) Peshawar\n";
    cout << "\t\t\t\t\t\t\t\t\t\tYour answer (A/B/C/D): ";
    cin >> answer;
    answer = toupper(answer);
    if (answer == 'C') score++;
    system("cls");

    // Question 2
    cout << "\t\t\t\t\t\t\t\t\t\t2. Which is NOT a programming language?\n";
    cout << "\t\t\t\t\t\t\t\t\t\tA) Python   B) Java   C) HTML   D) C++\n";
    cout << "\t\t\t\t\t\t\t\t\t\tYour answer (A/B/C/D): ";
    cin >> answer;
    answer = toupper(answer);
    if (answer == 'C') score++;
    system("cls");

    // Question 3
    cout << "\t\t\t\t\t\t\t\t\t\t3. How many continents are there?\n";
    cout << "\t\t\t\t\t\t\t\t\t\tA) 5   B) 6   C) 7   D) 8\n";
    cout << "\t\t\t\t\t\t\t\t\t\tYour answer (A/B/C/D): ";
    cin >> answer;
    answer = toupper(answer);
    if (answer == 'C') score++;
    system("cls");

    // Question 4
    cout << "\t\t\t\t\t\t\t\t\t\t4. What does CPU stand for?\n";
    cout << "\t\t\t\t\t\t\t\t\t\tA) Central Processing Unit   B) Computer Personal Unit\n";
    cout << "\t\t\t\t\t\t\t\t\t\tC) Central Power Unit        D) Control Processing Unit\n";
    cout << "\t\t\t\t\t\t\t\t\t\tYour answer (A/B/C/D): ";
    cin >> answer;
    answer = toupper(answer);
    if (answer == 'A') score++;
    system("cls");

    // Question 5
    cout << "\t\t\t\t\t\t\t\t\t\t5. Which symbol is used for single line comment in C++?\n";
    cout << "\t\t\t\t\t\t\t\t\t\tA) //   B) /* */   C) #   D) --\n";
    cout << "\t\t\t\t\t\t\t\t\t\tYour answer (A/B/C/D): ";
    cin >> answer;
    answer = toupper(answer);
    if (answer == 'A') score++;
    system("cls");

    // Menu loop
    do {
        cout << "\n\t\t\t\t\t\t\t\t\t\t==================== MENU ====================\n";
        cout << "\t\t\t\t\t\t\t\t\t\t1. View Result Card\n";
        cout << "\t\t\t\t\t\t\t\t\t\t2. View Correct Answers\n";
        cout << "\t\t\t\t\t\t\t\t\t\t3. Exit\n";
        cout << "\t\t\t\t\t\t\t\t\t\tEnter your choice (1-3): ";
        cin >> choice;
        system("cls");

        switch (choice) {
            case 1:
              {
				cout << "\n\t\t\t\t\t\t\t\t\t\t================= RESULT CARD ================\n";
                cout << "\t\t\t\t\t\t\t\t\t\tName             : " << name << endl;
                cout << "\t\t\t\t\t\t\t\t\t\tRegistration No  : " << regNumber << endl;
                cout << "\t\t\t\t\t\t\t\t\t\tDepartment       : " << department << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t----------------------------------------------\n";
                cout << "\t\t\t\t\t\t\t\t\t\tScore            : " << score << " / 5" << endl;
                
                float percentage = (score * 100) / 5.0;
                cout << "\t\t\t\t\t\t\t\t\t\tPercentage       : " << percentage << "%" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t==============================================\n\n";
            }
                break;

            case 2:
                {
				cout << "\n\t\t\t\t\t\t\t\t\t\t========================== CORRECT ANSWERS =========================\n";
                cout << "\t\t\t\t\t\t\t\t\t\t1. Capital of Pakistan?			C) Islamabad\n";
                cout << "\t\t\t\t\t\t\t\t\t\t2. NOT a programming language?		C) HTML\n";
                cout << "\t\t\t\t\t\t\t\t\t\t3. Number of continents?		C) 7\n";
                cout << "\t\t\t\t\t\t\t\t\t\t4. CPU stands for?			A) Central Processing Unit\n";
                cout << "\t\t\t\t\t\t\t\t\t\t5. Single line comment in C++?		A) //\n";
                cout << "\t\t\t\t\t\t\t\t\t\t===================================================================\n\n";
            }
                break;

            case 3:
            	{
                cout << "\n\t\t\t\t\t\t\t\t\t\tThank you for taking the quiz, " << name << "!\n";
                cout << "\t\t\t\t\t\t\t\t\t\tGoodbye!\n\n";
            }
                break;

            default:
                cout << "\t\t\t\t\t\t\t\t\t\tInvalid choice! Please select 1, 2, or 3.\n\n";
        }

    } while (choice != 3);

    return 0;
}

void start()
{
	system("Color 0B");
	cout  << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t====================================\n";
	cout << "\t\t\t\t\t\t\t\t\t\t====================================\n";
	cout << "\t\t\t\t\t\t\t\t\t\t||				  ||\n";
	cout << " \t\t\t\t\t\t\t\t\t\t||   LEARNING ASSESSMENT SYSTEM	  ||\n";
	cout << "\t\t\t\t\t\t\t\t\t\t||				  ||\n";
	cout << "\t\t\t\t\t\t\t\t\t\t====================================\n";
	cout << "\t\t\t\t\t\t\t\t\t\t====================================\n";
	cout << "\t\t\t\t\t\t\t\t\t\tLoading ";
	
	char block = 219;
	
	for(int i = 0; i < 28; i++) {
    cout << block;

    if(i < 5)
        Sleep(220);      // very slow
    else if(i < 12)
        Sleep(180);      // slow
    else if(i < 20)
        Sleep(140);      // medium slow
    else if(i < 30)
        Sleep(100);      // medium
    else if(i < 40)
        Sleep(60);       // medium fast
    else if(i < 50)
        Sleep(25);       // fast
    else
        Sleep(8);        // very fast and smooth end
} 
	system("cls");
}