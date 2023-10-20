#ifndef AUTHOR_H
#define AUTHOR_H
#include <iostream>
using namespace std
class Author
{
	private:
		int authorId;
		string name;
		int publish_no;
		int total_sold;
	public:
		Author(int authorId,string name,int publish_no,int total_sold);
		int ABooks(int no1,int no2);
	protected:
};

#endif
