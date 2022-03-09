#include<cstdio>
#include<string>
using namespace std;

int main(){
    char input[100];
    scanf("%[^\n]", input);
    string output=input;
    printf("%s", output.c_str());
}