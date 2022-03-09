#include<iostream>
#include<string>
// #include <cstdio>
#include <cstring>
using namespace std;

//hapus kata
// int main(){
//     string str, word;
//     cin>>str>>word;
// 	while((str.find(word)<str.length()) && (str.find(word)>=0)) {
// 		str.erase(str.find(word), word.length());
// 	}
// 	cout<<str<<endl;
// 	return 0;
// }

//caesar cipher
// void reverseStr(string& str){
//     int n = str.length();
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
// }

// int main(){
//     string str;
//     int n;
//     cin>>str>>n;
//     for(int i=0; i<str.length(); i++){
//         str[i]+=n;
//     }
//     reverseStr(str);
//     cout<<str;

//     return 0;
// }

//-----cara ke-2
// char buff[111];
// int N;

// int main() {
//   scanf("%s", buff);
//   scanf("%d", &N);

//   int len = strlen(buff);
//   for (int i = 0; i < len; i++) {
//     int ord = (buff[i] - 'a');
//     // printf("ord = %d\n", ord);
//     int encrypted = (ord + N) % 26;
//     buff[i] = encrypted + 'a';
//   }

//   printf("%s\n", buff);
// }


//operasi string
// int main(){
//     string s1, s2, s3, s4;
//     cin>>s1>>s2>>s3>>s4;
//     s1.erase(s1.find(s2), s2.length());
//     s1.insert(s1.find(s3)+s3.length(), s4);
//     cout<<s1;
// }


//bahasa Dengklek
// int main(){
//     string str;
//     cin>>str;
//     int len=str.length();
//     for(int i=0; i<len; i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]=toupper(str[i]);
//         }
//         else if(str[i]>='A' && str[i]<='Z'){
//             str[i]=tolower(str[i]);
//         }
//     }
//     cout<<str;
//     return 0;
// }


//snake case
void camel(string *mem) {
	string s=*mem;
	int i;
	
	for(i=0; i<s.length(); i++) {
		if((s[i]>='A') && (s[i]<='Z')) {
			s[i]=s[i]-'A'+'a';
			s.insert(i,"_");
		}
	}
	*mem=s;
}

void snake(string *mem) {
	int ada=0;
	int dimana[255];
	string s=*mem;
	string und="_";
	int panjang=s.length();
	int temudi=s.find(und);
	
	while((temudi>=0) && (temudi<panjang)) {
		dimana[ada]=temudi;
		ada++;
		s.erase(temudi,1);
		temudi=s.find(und);
		panjang=s.length();
	}
	
	for(int i=0; i<ada;i++) {
		if(!(dimana[i]>=s.length())) {
			s[dimana[i]]-=32;
		}
	}
	
	*mem=s;
}

int main() {
	string s;
	string * mem;
	mem=&s;
	cin>>s;
	
	if((s.find("_")>=0) && ((s.find("_")<s.length())))
		snake(mem);
	else camel(mem);
	
	cout<<s<<endl;
	return 0;
}