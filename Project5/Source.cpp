#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct Account {
	string account_name;
	int no;
	char type;
	double amount;

};

void inputs(Account f[], int g) {
	
	bool q = false;
	do {
		cout << " Enter the account no:";
		cin >> f[g].no;
		for (int i = 0; i < g; i++) {
			if (f[g].no == f[i].no && g!=i) {
				q = true;
            	cout << " this number is not available , please try again" << endl;
				system("pause");
				system("cls");
				}
			else {
				q = false;
			}
		}
		if (q==false) {
			break;
		}
		else {
			continue;
		}
	} while (true);
cout << " Enter the name of account holder:";
	cin >> f[g].account_name;
	cout << " Enter the type of account (c/s):";
	cin >> f[g].type;
	if (f[g].type != 'c' && f[g].type != 's') {
		cout << "error" << endl;
		system("pause");
		system("cls");
	}
	cout << " Enter the account amount:";
	cin >> f[g].amount;
	cout << " Account created"<<endl;
	cout << endl;
	system("pause");
	system("cls");

}
void despoit(Account f[], int counter) {
	int m;
	int u = 0;
	cout << "Enter the account number:" << endl;
	cin >> m;
	for (int y = 0; y < counter; y++) {

		if (f[y].no == m)
		{
			u = 1;
			cout << " the account no:";
			cout << endl << f[y].no << endl;
			cout << " the name of account holder:";
			cout << endl << f[y].account_name << endl;
			cout << " the type of account (c/s):";
			cout << endl << f[y].type << endl;
			cout << " the account amount:";
			cout << endl << f[y].amount << endl;
			int c;
			cout << "Enter the amount to be dospoit" << endl;
			cin >> c;
			if (c >= 0) {
				f[y].amount = f[y].amount + c;
				cout << "record updated" << endl;
			}
			else {
				cout << "not accepted"<<endl;
			}
		}
    }
	if (u == 0) {
		cout << "not exist"<<endl;
	}
	system("pause");
	system("cls");
}
void outputs(Account f[], int g) {
	for (int i = 0; i < g; i++) {
		cout << " the account no:" << endl;
		cout << endl << f[i].no << endl;
		cout << " the name of account holder:" << endl;
		cout << endl << f[i].account_name << endl;
		cout << " the type of account (c/s):" << endl;
		cout << endl << f[i].type << endl;
		cout << " the account amount:" << endl;
		cout << endl << f[i].amount << endl;

	}
	system("pause");
	system("cls");
}

void withdraw(Account f[], int counter) {
	int t;
	int y = 0;
	cout << "Enter the account number:" << endl;
	cin >> t;
	for (int o = 0; o < counter; o++) {
        if (t == f[o].no) {
			y = 1;
			cout << " the account no:";
			cout << endl << f[o].no << endl;
			cout << " the name of account holder:";
			cout << endl << f[o].account_name << endl;
			cout << " the type of account (c/s):";
			cout << endl << f[o].type << endl;
			cout << " the account amount:";
			cout << endl << f[o].amount << endl;
			int c;
			cout << "Enter the amount to be withdraw" << endl;
			cin >> c;
			if (c >= 0) {
				if (f[o].amount >= c) {
					f[o].amount = f[o].amount - c;
					cout << "record updated" << endl;
				}
				else {
					cout << "error" << endl;
				}

			}
			else {
				cout << "not accpeted";
			}
		}
    }
	if (y == 0) {
		cout<<"not exist"<<endl;
	}
	system("pause");
	system("cls");
}
void balance(Account f[], int g) {
	int t;
	int p = 0;
	cout << "Enter the account number:" << endl;
	cin >> t;
	for (int i = 0; i < g; i++) {
		if (f[i].no == t) {
			p=1;
			cout << " the account no:" << endl;
			cout << endl << f[i].no << endl;
			cout << " the name of account holder:" << endl;
			cout << endl << f[i].account_name << endl;
			cout << " the type of account (c/s):" << endl;
			cout << endl << f[i].type << endl;
			cout << " the account amount:" << endl;
			cout << endl << f[i].amount << endl;
			break;
		}

		
	}
	if (p==0) {
		cout << "not exist" << endl;
	}
	system("pause");
	system("cls");
}
void modify(Account f[], int m) {
	int y;
	int l = 0;
	cout << "Enter the account number:" << endl;
	cin >> y;
	for (int i = 0; i < m; i++) {
		if (f[i].no == y) {
			l = 1;
			cout << " the account no:" << endl;
			cout << endl << f[i].no << endl;
			cout << " the name of account holder:" << endl;
			cout << endl << f[i].account_name << endl;
			cout << " the type of account (c/s):" << endl;
			cout << endl << f[i].type << endl;
			cout << " the account amount:" << endl;
			cout << endl << f[i].amount << endl;
		}
	}
	if (l == 0) {
		cout << "not exist"<<endl;
	}

	for (int g = 0; g < m; g++) {
		if (f[g].no == y) {
			cout << "Enter the new detials of the account" << endl<<endl;
			cout <<endl <<" the account no:";
			cout  << f[g].no << endl<<endl;
			cout << " Enter the name of account holder:";
			cin >> f[g].account_name;
			cout << endl << " modify type of account (c/s):";
			cin >> f[g].type;
			if (f[g].type != 'c' && f[g].type != 's') {
				cout << "error";
			}
			cout << endl << " modify account amount:";
			cin >> f[g].amount;
			cout << endl << " recored created";
			cout << endl;
			break;
		}
	}
	system("pause");
	system("cls");
}
void close(Account f[], int& l) {
	cout << "enter number account " << endl;
	int n ;
	cin >> n;
	int s = 0;
	for (int i = 0; i < l; i++) {
		if (f[i].no == n) {
			s = 1;
			for (int j = i; j < l; j++) {
				f[j].no = f[j + 1].no;
				f[j].account_name = f[j + 1].account_name;
				f[j].amount = f[j + 1].amount;
				f[j].type = f[j + 1].type;
			}
			cout << "accout was deleted" << endl;
			l--;
			break;
		}
	}
	if (s == 0) {
		cout << "not exist" << endl;
	}
	system("pause");
	system("cls");
}


int main() {
	Account f[1000];
	int counter = 0;
	do {
		cout << endl << "   MAIN MENU" << endl;
		cout << endl << "  1-NEW ACCOUNT" << endl;
		cout << endl << "  2-DESPOIT AMOUNT" << endl;
		cout << endl << "  3-WITHDRAW" << endl;
		cout << endl << "  4-BALANCE ENQUIRY" << endl;
		cout << endl << "  5-ALL ACCOUNT HOLDR LIST" << endl;
		cout << endl << "  6-CLOSE AN ACCOUNT" << endl;
		cout << endl << "  7-MODIFY AN ACCOUNT" << endl;
		cout << endl << "  8-EXIT" << endl;
		int n;
		cout << endl << " select your option (1-8)" << endl;
		cin >> n;
		system("cls");
		if (n == 1) {
			inputs(f, counter);
			counter++;
		}
		if (n == 2) {
			despoit(f, counter);
		}
		else if (n == 3) {
			withdraw(f, counter);
		}
		else if (n == 4) {
			balance(f, counter);
		}
		else if (n == 5) {
			outputs(f, counter);
		}
		else if (n == 6) {
			close(f, counter);
		}
		else if (n == 7) {
			modify(f, counter);
		}
		else if (n == 8) {
			cout << " thank you for using our manangement system."<<endl;
			break;
		}
	} while (true);

	return 0;
}