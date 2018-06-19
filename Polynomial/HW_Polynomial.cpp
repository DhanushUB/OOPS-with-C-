#include<iostream>
#include<stdlib.h>

using namespace std;

class polynomial {
public:
    int *COEFF, DEGREE;    

    int get_data(); 
    int display(int *COEFF, int DEGREE);
    void AddOperation(polynomial P1, polynomial P2);
    void SubOperation(polynomial P1, polynomial P2);
	void DerivativeOperation(polynomial P1);
};

int polynomial::display(int *COEFF, int DEGREE) {
    int i, j;
    for (i = DEGREE; i >= 0; i--) {
        cout << COEFF[i] << "x^" << i;
        if ((i - 1) != -1)
            cout << "+";
    }
    cout << "\n";
    return 0;
}

int polynomial::get_data() {
    int i;
    cout << "Enter number of X terms:";
    cin >> DEGREE;
    COEFF = new int[DEGREE + 1];
    for (i = DEGREE; i >= 0; i--) {
        cout << "Enter Coeff of x^" << i << ":";
        cin >> COEFF[i];
    }

    return 0;
}

void polynomial::AddOperation(polynomial P1, polynomial P2) {
    int max, i;
    max = (P1.DEGREE > P2.DEGREE) ? P1.DEGREE : P2.DEGREE;
    int *add = new int[max + 1];
    if (P1.DEGREE == P2.DEGREE) {
        for (i = P1.DEGREE; i >= 0; i--)
            add[i] = P1.COEFF[i] + P2.COEFF[i];
    }

    if (P1.DEGREE > P2.DEGREE) {
        for (i = P1.DEGREE; i > P2.DEGREE; i--)
            add[i] = P1.COEFF[i];
        for (i = P2.DEGREE; i >= 0; i--)
            add[i] = P1.COEFF[i] + P2.COEFF[i];
    }

    if (P1.DEGREE < P2.DEGREE) {
        for (i = P2.DEGREE; i > P1.DEGREE; i--)
            add[i] = P2.COEFF[i];
        for (i = P1.DEGREE; i >= 0; i--)
            add[i] = P1.COEFF[i] + P2.COEFF[i];
    }
    cout << "\nAddOperation:";
    display(add, max);
    cout << "\n";
}

void polynomial::SubOperation(polynomial P1, polynomial P2) {
    int max, i;
    max = (P1.DEGREE > P2.DEGREE) ? P1.DEGREE : P2.DEGREE;
    int *sub = new int[max + 1];
    if (P1.DEGREE == P2.DEGREE) {
        for (i = P1.DEGREE; i >= 0; i--)
            sub[i] = P1.COEFF[i] - P2.COEFF[i];
    }

    if (P1.DEGREE > P2.DEGREE) {
        for (i = P1.DEGREE; i > P2.DEGREE; i--)
            sub[i] = P1.COEFF[i];
        for (i = P2.DEGREE; i >= 0; i--)
            sub[i] = P1.COEFF[i] - P2.COEFF[i];
    }

    if (P1.DEGREE < P2.DEGREE) {
        for (i = P2.DEGREE; i > P1.DEGREE; i--)
            sub[i] = -P2.COEFF[i];
        for (i = P1.DEGREE; i >= 0; i--)
            sub[i] = P1.COEFF[i] - P2.COEFF[i];
    }
    cout << "\nSubOperation:";
    display(sub, max);
    cout << "\n";
}

void polynomial::DerivativeOperation(polynomial p1) {
int i, j, max;
max=p1.DEGREE;

int *derv=new int[max-1];
int coef,deg=max;

for (i=p1.DEGREE,coef=p1.COEFF[i]; i>=0;i-- )
	{
		derv[i]=coef * deg;
		deg--;
	}
	cout<<"\t Derivative: ";
	for(i=max;i>0;--i)
	{
	int de=i-1;
		cout <<derv[i]<<"x^"<<de<<"+";
		}
	
}

int main() {
    int choice;
    polynomial P1, P2, P3;
	cout << "Enter Polynomial1:\t" << endl;
    P1.get_data();
    cout << "Enter Polynomial2:\t" << endl;
    P2.get_data();

    while (1) {
        cout << "\nPlease Select from the following" << endl;
        cout << "1: AddOperation\n2: SubOperation\n3.DerivativeOperation\n0: Exit" << endl;
        cout << "\nEnter your choice:";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Polynomial1:";
                P1.display(P1.COEFF, P1.DEGREE);
                cout << "Polynomial2:";
                P2.display(P2.COEFF, P2.DEGREE);
                P3.AddOperation(P1, P2);
                break;
            case 2:
                cout << "Polynomial1:";
                P1.display(P1.COEFF, P1.DEGREE);
                cout << "Polynomial2:";
                P2.display(P2.COEFF, P2.DEGREE);
                P3.SubOperation(P1, P2);
                
                break;
            case 3:
             
                cout << "Polynomial1: ";
                P1.display(P1.COEFF, P1.DEGREE);
				P1.DerivativeOperation(P1);
				cout<<endl;
                cout << "Polynomial2: ";
                P2.display(P2.COEFF, P2.DEGREE);
				P2.DerivativeOperation(P2);
				cout<<endl;               
                break;
			case 0:
                    exit(0);
			default:
				cout<<"\t\tInvalid Choice\n";
            
        }
    }
    return 0;
}
