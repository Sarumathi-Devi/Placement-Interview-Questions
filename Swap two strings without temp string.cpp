string str1,str2;
getline(cin,str1);
getline(cin,str2);

int alen = a.length();
int blen = b.length();

a.append(b);
b.append(a);

a.erase(0,alen);
b.erase(0,blen);
b.erase((alen),(alen+blen+alen));

cout << a << endl << b ;
