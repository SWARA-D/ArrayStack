#include <iostream>

using namespace std;

template <typename T>
class Stack
{
	public:
		Stack(const int& c)
		{
			t = -1;
			capacity = c;
			
			arr = new T[capacity];
		}
		int size() const
		{
			return t+1;
		}
		bool empty() const
		{
			return (t==-1);
		}
		const T& top() const
		{
			/*if(empty())
			{
				cout << "cant" << endl;
				return 0;
			}*/
			//else
			//{
				return arr[t];
			//}
		}
		void push(const T& e)
		{
			if(t == capacity - 1)
			{
				cout << "cant" << endl;
			}
			else
			{
				t++;
				arr[t] = e;
			}
		}
		void pop()
		{
			if(empty())
			{
				cout << "cant" << endl;
			}
			else
			{
				t--;
			}
		}
		void print()
		{
			for(int i = 0; i <= t; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	private:
		T* arr;
		int t;
		int capacity;
};
int main()
{
	Stack<int> s = 5;
	s.push(6);
	s.print();
	
	s.push(2);
	s.print();
	
	s.push(9);
	s.push(10);
	
	cout << s.top() << endl;
	s.print();
	
	s.push(11);
	s.print();
	
	s.pop();
	s.print();
	
	s.push(9);
	s.print();
	
	//s.push(99);
	//s.print();	
	
	return EXIT_SUCCESS;	
}
