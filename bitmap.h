class Complex
{	private:

	int real;
	int img;
    public:

		Complex();
		Complex(int, int);
		void Accept();
		void Display();
		Complex operator+(Complex&);
		Complex operator-(Complex&);
		Complex operator++();
		Complex operator++(int);
		double CalMod(int real , int img)
		{
			double real = real * real;
			double imgPart = img * img;
			double ans = sqrt(real + imgPart);
			return ans;
		}

		bool operator==(Complex&);
};
