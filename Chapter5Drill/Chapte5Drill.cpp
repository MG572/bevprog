#include "std_lib_facilities.h"
int main()
try {
	//<< your code here >>
	//most variables have been renamed to make them work, the originals are in the commets
	
	//1., Cout << "Success!\n";
	cout << "Success!\n"; 
	//2., cout << "Success!\n;
	cout << "Success!\n";
	//3., cout << "Success" << !\n"
	cout << "Success!\n";
	//4.,  cout << success << '\n';
	cout << "Success!\n";
	//5., string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	//6. v renamed to z to run, vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
	vector<int> z(10); z[5] = 7; if (z[5] == 7) cout << "Success!\n";
	//7., if (cond) cout << "Success!\n"; else cout << "Fail!\n";
	bool cond=true;
	if (cond==true) cout << "Success!\n"; else cout << "Fail!\n"; 
	//8., bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
	bool c = false; if (c==false) cout << "Success!\n"; else cout << "Fail!\n";
	//9. c renamed to o, string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
	
	string s = "ape";
	bool o = "fool" > s; 
	if (o) cout << "Success!\n"; 
	
	//10. s renamed to st, string s = "ape"; if (s=="fool") cout << "Success!\n";
	string st = "ape";
	if (st == "ape") 
		cout << "Success!\n"; 
	
	//11. s renamed to stt, string s = "ape"; if (s=="fool") cout < "Success!\n";
	string stt = "ape";
	if (stt != "fool") 
		cout << "Success!\n";
	
	//12. s renamed to sttt, string s = "ape"; if (s+"fool") cout < "Success!\n";
	string sttt = "ape";
	if (sttt + "fool"=="apefool") 
		cout << "Success!\n"; 
	
	//13. v renamed to vv, vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
	vector<char> vv(5); 
	for (int i = 0; i < vv.size(); ++i);
	cout << "Success!\n";
	
	//14 v renamed to vvv, vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	vector<char> vvv(5);
	for (int i = 0; i <= vvv.size(); ++i); 
	cout << "Success!\n"; 
	
	//15 s renamed to sh, string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
	string sh = "Success!\n";
	for (int i = 0; i < 6; ++i) { if (i=6) cout << sh; }
	
	//16, if (true) then cout << "Success!\n"; else cout << "Fail!\n";
	if (true) cout << "Success!\n"; 
	else cout << "Fail!\n"; 
	
	//17 c renamed to ch, int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
	int x = 2000; int ch = x;
	if (ch == 2000) 
		cout << "Success!\n"; 
	
	//18 sh renamed to shh, string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
	string shh = "Success!\n";
	 for (int i = 0; i < 10 ; ++i) 
	cout << shh[i]; 
	
	//19 v renamed to w, vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	vector<char> w(5); 
	for (int i = 0; i <= w.size(); ++i); 
	cout << "Success!\n"; 
	
	//20 i renamed to u to not ruin everything, int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
	int u = 0; int j = 9; 
	while (u < 10) ++u; {
	if (j < u)
		cout << "Success!\n"; }
	
	//21 x renamed to xx, int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
	double xx = 2; 
	double d = 0.5+ (xx+2); 
	if (d == 2 * xx+ 0.5) 
		cout << "Success!\n"; 

	//22 s renamed to sp, string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];	
	string sp = "Success!\n"; 
	for (int i=0; i<=8; ++i) 
		cout << sp[i];

	//23 i renamed to k, j renamed to jk int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
	int k = 0; 
	int jk = 10;  
	while (k < 10) ++k; 
	if (jk == k) 
		cout << "Success!\n";

	//24 x renamed to xy, d renamed to dy (it works?) int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
	int xy = 4; 
	double dy = 5 / (xy-2); 
	if (dy = 2 * xy + 0.5) 
		cout << "Success!\n";

	//25 cin << "Success!\n";
	cout << "Success!\n";

	keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
