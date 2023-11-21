#include "Header.h"


class Tree {
private:
	int i;
	Tree* l;
	Tree* r;
public:
	Tree(int temp) : i(temp) {}
	

	void Add(int temp) {
		if (temp > i && r == nullptr) {
		r = new Tree(temp);
			
		}
		else if (temp < i && l  == nullptr) {
			l = new Tree(temp);
		}
		else {
			if (temp > i ) {
				r->Add(temp);
			}
			else if (temp < i ) {
				l ->Add(temp);
			}
		}
	}
	void Out() {
		if (l != nullptr) {
			cout << l->i << endl
				; l->Out();
			cout << endl;
		}if (r != nullptr) {
			cout << r->i<< endl; r->Out();
		}
		
	}

	
};



void main() {


	/*string inputstr;
	cout << "Enter string: "; cin >> inputstr; cout << endl;
	map <char, int > mp;
	bool bl = false;
	bool bl1 = false;
	int  tempend = 0;
	int  tempbegin = 0;
	int rec = 0;
	for (size_t i =0; i< inputstr.size(); i++)
	{
		mp[inputstr[i]]++;
	}

	for (size_t i = 0; i < inputstr.size() - 1; i++)
	{
		for (size_t j = inputstr.size() - 1; j > 0; j--)
		{
			if (!bl1) {
				for (auto& el : mp)
				{
					if (el.first == inputstr[i] && el.first == inputstr[j] && !bl) {

						tempend = j;
						tempbegin = i;
						el.second -= 2;
						rec += el.second;
						bl = true;

					}
					else if (el.first != inputstr[i] && el.first != inputstr[j] && !bl) {
						el.second--;
					}

					if (bl) {
						rec += el.second;
						bl1 = 1;
					}
					if (tempend == i && tempbegin == j) {
						bl = 0;
					}
				}
			}
		}

	}
	if (rec <0 ) {
		rec = -1;
	}

	cout << rec ;*/

	Tree tr(8);
	tr.Add(4);
	tr.Add(40  );
	tr.Add(5);
	tr.Add(2);
	tr.Out();

}
	
		
