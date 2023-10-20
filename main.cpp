#include <iostream>
#include "Author.h"
#include "Author.cpp"
using namespace std
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Author::Author(12,"bharat",300,200);
	cout<<Author::ABooks(300,200);<<endl;

	return 0;
}
