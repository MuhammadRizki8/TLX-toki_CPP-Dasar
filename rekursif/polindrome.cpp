#include <iostream>
#include <string>

using namespace std;


bool palindrom(string s, int length) {
	if(length==1) {
		return 1;
	}
	if(length==2) {
		if(s[0]==s[1]){
			return 1;
        }
		else{
            return 0;
        }
	}
	bool masih=(s[0]==s[length-1]);
    if(masih==false){
        return 0;
    }
	s.erase(length-1, length);
    // cout<<"kondisi string terkini abis (length-1, length) "<<s<<endl;
	s.erase(0, 1);
    // cout<<"kondisi string terkini abis (0, 1) "<<s<<endl;
	length=s.length();
	return masih && palindrom(s, length);
}

int main() {
	string s;
	cin>>s;
	int length= s.length();
	if(palindrom(s, length))
		cout<<"YA"<<endl;
	else cout<<"BUKAN"<<endl;
	
	return 0;
}